#
# Copyright (C) 2022  Autodesk, Inc. All Rights Reserved.
#
# SPDX-License-Identifier: Apache-2.0
#

INCLUDE(cxx_defaults)

SET(_target
    "rvprof"
)

SET(CMAKE_AUTOUIC
    ON
)
SET(CMAKE_AUTOMOC
    ON
)
SET(CMAKE_AUTORCC
    ON
)

# Add main sources
SET(_sources
    main.cpp utf8Main.cpp
)

# Add QT-specific source files
LIST(APPEND _sources VisMainWindow.cpp)

# The original Makefile was flagging this executable as NSAPP but it wasn't distributed as such, updating to simple executable.
ADD_EXECUTABLE(
  ${_target}
  ${_sources}
)

FIND_PACKAGE(
  ${RV_QT_PACKAGE_NAME}
  COMPONENTS Core Gui OpenGL Widgets ${QT6_QOPENGLWIDGET_COMPONENT}
  REQUIRED
)
FIND_PACKAGE(OpenGL REQUIRED)

TARGET_INCLUDE_DIRECTORIES(
  ${_target}
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR}
)

TARGET_LINK_LIBRARIES(
  ${_target}
  PRIVATE TwkMath TwkGLText OpenGL::GLU Qt::Gui Qt::OpenGL Qt::Widgets ${QT6_QOPENGLWIDGET_TARGET}
)

TARGET_COMPILE_OPTIONS(
  ${_target}
  PRIVATE -DUI_APPLICATION_NAME=\"${RV_UI_APPLICATION_NAME}\"
)

RV_STAGE(TYPE "EXECUTABLE" TARGET ${_target})
