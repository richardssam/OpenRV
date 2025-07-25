INCLUDE(ProcessorCount) # require CMake 3.15+
PROCESSORCOUNT(_cpu_count)

RV_CREATE_STANDARD_DEPS_VARIABLES("RV_DEPS_PYIMGUI" "" "" "")
RV_SHOW_STANDARD_DEPS_VARIABLES()

GET_TARGET_PROPERTY(_imgui_include_dirs imgui::imgui INTERFACE_INCLUDE_DIRECTORIES)
IF(RV_TARGET_WINDOWS)
  GET_TARGET_PROPERTY(_imgui_library_file imgui::imgui IMPORTED_IMPLIB)
ELSE()
  GET_TARGET_PROPERTY(_imgui_library_file imgui::imgui LOCATION)
ENDIF()

SET(_configure_options
    ""
)

LIST(APPEND _configure_options "-DCMAKE_INSTALL_PREFIX=${_install_dir}")
LIST(APPEND _configure_options "-DCMAKE_OSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES}")
LIST(APPEND _configure_options "-DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}")

# Windows Release mode workaround - testing minimal working set
IF(RV_TARGET_WINDOWS AND CMAKE_BUILD_TYPE STREQUAL "Release")
  # /O2 - Keep speed optimization
  # /GL- - Disable whole program optimization (prevents hangs)
  # /Ob0 - Disable inlining (prevents template hang)
  # /bigobj - Allow large object files (needed for nanobind)
  # /DNDEBUG - Keep release mode defines
  LIST(APPEND _configure_options "-DCMAKE_CXX_FLAGS_RELEASE=/O2 /GL- /Ob0 /bigobj /DNDEBUG")
  LIST(APPEND _configure_options "-DCMAKE_C_FLAGS_RELEASE=/O2 /GL- /Ob0 /bigobj /DNDEBUG")
  MESSAGE(STATUS "PyImGui: Testing reduced Windows Release workaround flags")
ENDIF()

LIST(APPEND _configure_options "-S ${CMAKE_BINARY_DIR}/RV_DEPS_IMGUI/deps/imgui-bundle/external/imgui")
LIST(APPEND _configure_options "-B ${_build_dir}")

SET(_libname
    "pyimgui${CMAKE_SHARED_MODULE_SUFFIX}"
)

# The built library will be at the root of the build directory.
SET(_build_output_path
    ${_build_dir}/${_libname}
)

# Override the library name for Linux for now because our CMakelists.txt install it in lib for all platform.
SET(_lib_dir
    ${_install_dir}/lib
)
SET(_libpath
    ${_lib_dir}/${_libname}
)

SET(_PYTHON_LIB_DIR
    "python${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR}"
)

SET(_patch_command_for_imgui_bindings
    patch -p1 < ${CMAKE_CURRENT_SOURCE_DIR}/patch/pybind_imgui.cpp.patch
)

EXTERNALPROJECT_ADD(
  ${_target}
  GIT_REPOSITORY "https://github.com/pthom/imgui_bundle.git"
  GIT_TAG "76cbc64953858ff2a8699aa1f7e8c7cb77e3b17a"
  DOWNLOAD_DIR ${RV_DEPS_DOWNLOAD_DIR}
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
  SOURCE_DIR ${CMAKE_BINARY_DIR}/RV_DEPS_IMGUI/deps/imgui-bundle
  GIT_SUBMODULES "" GIT_SUBMODULES_RECURSE 0
  PATCH_COMMAND
    ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_CURRENT_SOURCE_DIR}/imgui/CMakeLists_PyImGUI.cmake
    ${CMAKE_BINARY_DIR}/RV_DEPS_IMGUI/deps/imgui-bundle/external/imgui/CMakeLists.txt && ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_CURRENT_SOURCE_DIR}/imgui/pybind_imgui_module.cpp ${CMAKE_BINARY_DIR}/RV_DEPS_IMGUI/deps/imgui-bundle/external/imgui/bindings
    && ${_patch_command_for_imgui_bindings}
  UPDATE_COMMAND ""
  CONFIGURE_COMMAND ${CMAKE_COMMAND} ${_configure_options} -DCMAKE_PREFIX_PATH=$ENV{QT_HOME}/lib/cmake -DPython_ROOT=${RV_DEPS_BASE_DIR}/RV_DEPS_PYTHON3/install
                    -Dimgui_INCLUDE_DIRS=${_imgui_include_dirs} -Dimgui_LIBRARY=${_imgui_library_file} -Dnanobind_ROOT=${RV_DEPS_BASE_DIR}/RV_DEPS_NANOBIND/install/nanobind
  BUILD_COMMAND ${_cmake_build_command}
  INSTALL_COMMAND ${_cmake_install_command}
  BUILD_BYPRODUCTS ${_build_output_path}
  BUILD_ALWAYS FALSE
  USES_TERMINAL_DOWNLOAD TRUE
  DEPENDS Python::Python imgui::imgui RV_DEPS_NANOBIND
)

# Not using RV_COPY_LIB_BIN_FOLDERS() because we need to copy the library to a specific location.
ADD_CUSTOM_COMMAND(
  COMMENT "Installing ${_target}'s libs into ${_PYTHON_LIB_DIR}"
  OUTPUT ${RV_STAGE_LIB_DIR}/${_libname}
  COMMAND ${CMAKE_COMMAND} -E copy_directory ${_lib_dir} ${RV_STAGE_LIB_DIR}/${_PYTHON_LIB_DIR}
  DEPENDS ${_target}
)
ADD_CUSTOM_TARGET(
  ${_target}-stage-target ALL
  DEPENDS ${RV_STAGE_LIB_DIR}/${_libname}
)

ADD_DEPENDENCIES(dependencies ${_target}-stage-target)
