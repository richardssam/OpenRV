//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#include <MuQt5/qtUtils.h>
#include <MuQt5/QTimeType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QWidgetType.h>
#include <Mu/Alias.h>
#include <Mu/BaseFunctions.h>
#include <Mu/ClassInstance.h>
#include <Mu/Exception.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu
{
    using namespace std;

    QTimeType::Instance::Instance(const Class* c)
        : ClassInstance(c)
    {
    }

    QTimeType::QTimeType(Context* c, const char* name, Class* super)
        : Class(c, name, super)
    {
    }

    QTimeType::~QTimeType() {}

    static NODE_IMPLEMENTATION(__allocate, Pointer)
    {
        QTimeType::Instance* i =
            new QTimeType::Instance((Class*)NODE_THIS.type());
        QTimeType::registerFinalizer(i);
        NODE_RETURN(i);
    }

    void QTimeType::registerFinalizer(void* o)
    {
        GC_register_finalizer(o, QTimeType::finalizer, 0, 0, 0);
    }

    void QTimeType::finalizer(void* obj, void* data)
    {
        QTimeType::Instance* i = reinterpret_cast<QTimeType::Instance*>(obj);
        delete i;
    }

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    Pointer qt_QTime_QTime_QTime_QTime(Mu::Thread& NODE_THREAD,
                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        setqtype<QTimeType>(param_this, QTime());
        return param_this;
    }

    Pointer qt_QTime_QTime_QTime_QTime_int_int_int_int(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this,
                                                       int param_h, int param_m,
                                                       int param_s,
                                                       int param_ms)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        int arg1 = (int)(param_h);
        int arg2 = (int)(param_m);
        int arg3 = (int)(param_s);
        int arg4 = (int)(param_ms);
        setqtype<QTimeType>(param_this, QTime(arg1, arg2, arg3, arg4));
        return param_this;
    }

    Pointer qt_QTime_addMSecs_QTime_QTime_int(Mu::Thread& NODE_THREAD,
                                              Pointer param_this, int param_ms)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        int arg1 = (int)(param_ms);
        return makeqtype<QTimeType>(c, arg0.addMSecs(arg1), "qt.QTime");
    }

    Pointer qt_QTime_addSecs_QTime_QTime_int(Mu::Thread& NODE_THREAD,
                                             Pointer param_this, int param_s)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        int arg1 = (int)(param_s);
        return makeqtype<QTimeType>(c, arg0.addSecs(arg1), "qt.QTime");
    }

    int qt_QTime_elapsed_int_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.elapsed();
    }

    int qt_QTime_hour_int_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.hour();
    }

    bool qt_QTime_isNull_bool_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.isNull();
    }

    bool qt_QTime_isValid_bool_QTime(Mu::Thread& NODE_THREAD,
                                     Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.isValid();
    }

    int qt_QTime_minute_int_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.minute();
    }

    int qt_QTime_msec_int_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.msec();
    }

    int qt_QTime_msecsSinceStartOfDay_int_QTime(Mu::Thread& NODE_THREAD,
                                                Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.msecsSinceStartOfDay();
    }

    int qt_QTime_msecsTo_int_QTime_QTime(Mu::Thread& NODE_THREAD,
                                         Pointer param_this, Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.msecsTo(arg1);
    }

    int qt_QTime_restart_int_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.restart();
    }

    int qt_QTime_second_int_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        return arg0.second();
    }

    int qt_QTime_secsTo_int_QTime_QTime(Mu::Thread& NODE_THREAD,
                                        Pointer param_this, Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.secsTo(arg1);
    }

    bool qt_QTime_setHMS_bool_QTime_int_int_int_int(Mu::Thread& NODE_THREAD,
                                                    Pointer param_this,
                                                    int param_h, int param_m,
                                                    int param_s, int param_ms)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        int arg1 = (int)(param_h);
        int arg2 = (int)(param_m);
        int arg3 = (int)(param_s);
        int arg4 = (int)(param_ms);
        return arg0.setHMS(arg1, arg2, arg3, arg4);
    }

    void qt_QTime_start_void_QTime(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        arg0.start();
        setqtype<QTimeType>(param_this, arg0);
    }

    Pointer qt_QTime_toString_string_QTime_string(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this,
                                                  Pointer param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QString arg1 = qstring(param_format);
        return makestring(c, arg0.toString(arg1));
    }

    Pointer qt_QTime_toString_string_QTime_int(Mu::Thread& NODE_THREAD,
                                               Pointer param_this,
                                               int param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        Qt::DateFormat arg1 = (Qt::DateFormat)(param_format);
        return makestring(c, arg0.toString(arg1));
    }

    bool qt_QTime_operatorBang_EQ__bool_QTime_QTime(Mu::Thread& NODE_THREAD,
                                                    Pointer param_this,
                                                    Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.operator!=(arg1);
    }

    bool qt_QTime_operatorLT__bool_QTime_QTime(Mu::Thread& NODE_THREAD,
                                               Pointer param_this,
                                               Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.operator<(arg1);
    }

    bool qt_QTime_operatorLT_EQ__bool_QTime_QTime(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this,
                                                  Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.operator<=(arg1);
    }

    bool qt_QTime_operatorEQ_EQ__bool_QTime_QTime(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this,
                                                  Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.operator==(arg1);
    }

    bool qt_QTime_operatorGT__bool_QTime_QTime(Mu::Thread& NODE_THREAD,
                                               Pointer param_this,
                                               Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.operator>(arg1);
    }

    bool qt_QTime_operatorGT_EQ__bool_QTime_QTime(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this,
                                                  Pointer param_t)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QTime arg0 = getqtype<QTimeType>(param_this);
        const QTime arg1 = getqtype<QTimeType>(param_t);
        return arg0.operator>=(arg1);
    }

    Pointer qt_QTime_currentTime_QTime(Mu::Thread& NODE_THREAD)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        return makeqtype<QTimeType>(c, QTime::currentTime(), "qt.QTime");
    }

    Pointer qt_QTime_fromMSecsSinceStartOfDay_QTime_int(Mu::Thread& NODE_THREAD,
                                                        int param_msecs)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        int arg0 = (int)(param_msecs);
        return makeqtype<QTimeType>(c, QTime::fromMSecsSinceStartOfDay(arg0),
                                    "qt.QTime");
    }

    Pointer qt_QTime_fromString_QTime_string_int(Mu::Thread& NODE_THREAD,
                                                 Pointer param_string,
                                                 int param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_string);
        Qt::DateFormat arg1 = (Qt::DateFormat)(param_format);
        return makeqtype<QTimeType>(c, QTime::fromString(arg0, arg1),
                                    "qt.QTime");
    }

    Pointer qt_QTime_fromString_QTime_string_string(Mu::Thread& NODE_THREAD,
                                                    Pointer param_string,
                                                    Pointer param_format)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg0 = qstring(param_string);
        const QString arg1 = qstring(param_format);
        return makeqtype<QTimeType>(c, QTime::fromString(arg0, arg1),
                                    "qt.QTime");
    }

    bool qt_QTime_isValid_bool_int_int_int_int(Mu::Thread& NODE_THREAD,
                                               int param_h, int param_m,
                                               int param_s, int param_ms)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        int arg0 = (int)(param_h);
        int arg1 = (int)(param_m);
        int arg2 = (int)(param_s);
        int arg3 = (int)(param_ms);
        return QTime::isValid(arg0, arg1, arg2, arg3);
    }

    static NODE_IMPLEMENTATION(_n_QTime0, Pointer)
    {
        NODE_RETURN(qt_QTime_QTime_QTime_QTime(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QTime1, Pointer)
    {
        NODE_RETURN(qt_QTime_QTime_QTime_QTime_int_int_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int),
            NODE_ARG(2, int), NODE_ARG(3, int), NODE_ARG(4, int)));
    }

    static NODE_IMPLEMENTATION(_n_addMSecs0, Pointer)
    {
        NODE_RETURN(qt_QTime_addMSecs_QTime_QTime_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_addSecs0, Pointer)
    {
        NODE_RETURN(qt_QTime_addSecs_QTime_QTime_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_elapsed0, int)
    {
        NODE_RETURN(qt_QTime_elapsed_int_QTime(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_hour0, int)
    {
        NODE_RETURN(
            qt_QTime_hour_int_QTime(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isNull0, bool)
    {
        NODE_RETURN(qt_QTime_isNull_bool_QTime(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isValid0, bool)
    {
        NODE_RETURN(qt_QTime_isValid_bool_QTime(NODE_THREAD,
                                                NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_minute0, int)
    {
        NODE_RETURN(qt_QTime_minute_int_QTime(NODE_THREAD,
                                              NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_msec0, int)
    {
        NODE_RETURN(
            qt_QTime_msec_int_QTime(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_msecsSinceStartOfDay0, int)
    {
        NODE_RETURN(qt_QTime_msecsSinceStartOfDay_int_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_msecsTo0, int)
    {
        NODE_RETURN(qt_QTime_msecsTo_int_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_restart0, int)
    {
        NODE_RETURN(qt_QTime_restart_int_QTime(NODE_THREAD,
                                               NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_second0, int)
    {
        NODE_RETURN(qt_QTime_second_int_QTime(NODE_THREAD,
                                              NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_secsTo0, int)
    {
        NODE_RETURN(qt_QTime_secsTo_int_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setHMS0, bool)
    {
        NODE_RETURN(qt_QTime_setHMS_bool_QTime_int_int_int_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int),
            NODE_ARG(2, int), NODE_ARG(3, int), NODE_ARG(4, int)));
    }

    static NODE_IMPLEMENTATION(_n_start0, void)
    {
        qt_QTime_start_void_QTime(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_toString0, Pointer)
    {
        NODE_RETURN(qt_QTime_toString_string_QTime_string(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_toString1, Pointer)
    {
        NODE_RETURN(qt_QTime_toString_string_QTime_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_operatorBang_EQ_0, bool)
    {
        NODE_RETURN(qt_QTime_operatorBang_EQ__bool_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorLT_0, bool)
    {
        NODE_RETURN(qt_QTime_operatorLT__bool_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorLT_EQ_0, bool)
    {
        NODE_RETURN(qt_QTime_operatorLT_EQ__bool_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorEQ_EQ_0, bool)
    {
        NODE_RETURN(qt_QTime_operatorEQ_EQ__bool_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorGT_0, bool)
    {
        NODE_RETURN(qt_QTime_operatorGT__bool_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorGT_EQ_0, bool)
    {
        NODE_RETURN(qt_QTime_operatorGT_EQ__bool_QTime_QTime(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_currentTime0, Pointer)
    {
        NODE_RETURN(qt_QTime_currentTime_QTime(NODE_THREAD));
    }

    static NODE_IMPLEMENTATION(_n_fromMSecsSinceStartOfDay0, Pointer)
    {
        NODE_RETURN(qt_QTime_fromMSecsSinceStartOfDay_QTime_int(
            NODE_THREAD, NODE_ARG(0, int)));
    }

    static NODE_IMPLEMENTATION(_n_fromString0, Pointer)
    {
        NODE_RETURN(qt_QTime_fromString_QTime_string_int(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_fromString1, Pointer)
    {
        NODE_RETURN(qt_QTime_fromString_QTime_string_string(
            NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isValid1, bool)
    {
        NODE_RETURN(qt_QTime_isValid_bool_int_int_int_int(
            NODE_THREAD, NODE_ARG(0, int), NODE_ARG(1, int), NODE_ARG(2, int),
            NODE_ARG(3, int)));
    }

    void QTimeType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(
            new Function(c, "__allocate", __allocate, None, Return, ftn, End),

            EndArguments);

        addSymbols(EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QTime", _n_QTime0, None, Compiled,
                         qt_QTime_QTime_QTime_QTime, Return, "qt.QTime",
                         Parameters, new Param(c, "this", "qt.QTime"), End),
            new Function(c, "QTime", _n_QTime1, None, Compiled,
                         qt_QTime_QTime_QTime_QTime_int_int_int_int, Return,
                         "qt.QTime", Parameters,
                         new Param(c, "this", "qt.QTime"),
                         new Param(c, "h", "int"), new Param(c, "m", "int"),
                         new Param(c, "s", "int", Value((int)0)),
                         new Param(c, "ms", "int", Value((int)0)), End),
            new Function(c, "addMSecs", _n_addMSecs0, None, Compiled,
                         qt_QTime_addMSecs_QTime_QTime_int, Return, "qt.QTime",
                         Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "ms", "int"), End),
            new Function(c, "addSecs", _n_addSecs0, None, Compiled,
                         qt_QTime_addSecs_QTime_QTime_int, Return, "qt.QTime",
                         Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "s", "int"), End),
            new Function(c, "elapsed", _n_elapsed0, None, Compiled,
                         qt_QTime_elapsed_int_QTime, Return, "int", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "hour", _n_hour0, None, Compiled,
                         qt_QTime_hour_int_QTime, Return, "int", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "isNull", _n_isNull0, None, Compiled,
                         qt_QTime_isNull_bool_QTime, Return, "bool", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "isValid", _n_isValid0, None, Compiled,
                         qt_QTime_isValid_bool_QTime, Return, "bool",
                         Parameters, new Param(c, "this", "qt.QTime"), End),
            new Function(c, "minute", _n_minute0, None, Compiled,
                         qt_QTime_minute_int_QTime, Return, "int", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "msec", _n_msec0, None, Compiled,
                         qt_QTime_msec_int_QTime, Return, "int", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "msecsSinceStartOfDay", _n_msecsSinceStartOfDay0,
                         None, Compiled,
                         qt_QTime_msecsSinceStartOfDay_int_QTime, Return, "int",
                         Parameters, new Param(c, "this", "qt.QTime"), End),
            new Function(c, "msecsTo", _n_msecsTo0, None, Compiled,
                         qt_QTime_msecsTo_int_QTime_QTime, Return, "int",
                         Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, "restart", _n_restart0, None, Compiled,
                         qt_QTime_restart_int_QTime, Return, "int", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "second", _n_second0, None, Compiled,
                         qt_QTime_second_int_QTime, Return, "int", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "secsTo", _n_secsTo0, None, Compiled,
                         qt_QTime_secsTo_int_QTime_QTime, Return, "int",
                         Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, "setHMS", _n_setHMS0, None, Compiled,
                         qt_QTime_setHMS_bool_QTime_int_int_int_int, Return,
                         "bool", Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "h", "int"), new Param(c, "m", "int"),
                         new Param(c, "s", "int"),
                         new Param(c, "ms", "int", Value((int)0)), End),
            new Function(c, "start", _n_start0, None, Compiled,
                         qt_QTime_start_void_QTime, Return, "void", Parameters,
                         new Param(c, "this", "qt.QTime"), End),
            new Function(c, "toString", _n_toString0, None, Compiled,
                         qt_QTime_toString_string_QTime_string, Return,
                         "string", Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "format", "string"), End),
            new Function(
                c, "toString", _n_toString1, None, Compiled,
                qt_QTime_toString_string_QTime_int, Return, "string",
                Parameters, new Param(c, "this", "qt.QTime"),
                new Param(c, "format", "int", Value((int)Qt::TextDate)), End),
            // static functions
            new Function(c, "currentTime", _n_currentTime0, None, Compiled,
                         qt_QTime_currentTime_QTime, Return, "qt.QTime", End),
            new Function(c, "fromMSecsSinceStartOfDay",
                         _n_fromMSecsSinceStartOfDay0, None, Compiled,
                         qt_QTime_fromMSecsSinceStartOfDay_QTime_int, Return,
                         "qt.QTime", Parameters, new Param(c, "msecs", "int"),
                         End),
            new Function(
                c, "fromString", _n_fromString0, None, Compiled,
                qt_QTime_fromString_QTime_string_int, Return, "qt.QTime",
                Parameters, new Param(c, "string", "string"),
                new Param(c, "format", "int", Value((int)Qt::TextDate)), End),
            new Function(c, "fromString", _n_fromString1, None, Compiled,
                         qt_QTime_fromString_QTime_string_string, Return,
                         "qt.QTime", Parameters,
                         new Param(c, "string", "string"),
                         new Param(c, "format", "string"), End),
            new Function(c, "isValid", _n_isValid1, None, Compiled,
                         qt_QTime_isValid_bool_int_int_int_int, Return, "bool",
                         Parameters, new Param(c, "h", "int"),
                         new Param(c, "m", "int"), new Param(c, "s", "int"),
                         new Param(c, "ms", "int", Value((int)0)), End),
            EndArguments);
        globalScope()->addSymbols(
            new Function(c, "!=", _n_operatorBang_EQ_0, Op, Compiled,
                         qt_QTime_operatorBang_EQ__bool_QTime_QTime, Return,
                         "bool", Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, "<", _n_operatorLT_0, Op, Compiled,
                         qt_QTime_operatorLT__bool_QTime_QTime, Return, "bool",
                         Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, "<=", _n_operatorLT_EQ_0, Op, Compiled,
                         qt_QTime_operatorLT_EQ__bool_QTime_QTime, Return,
                         "bool", Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, "==", _n_operatorEQ_EQ_0, Op, Compiled,
                         qt_QTime_operatorEQ_EQ__bool_QTime_QTime, Return,
                         "bool", Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, ">", _n_operatorGT_0, Op, Compiled,
                         qt_QTime_operatorGT__bool_QTime_QTime, Return, "bool",
                         Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            new Function(c, ">=", _n_operatorGT_EQ_0, Op, Compiled,
                         qt_QTime_operatorGT_EQ__bool_QTime_QTime, Return,
                         "bool", Parameters, new Param(c, "this", "qt.QTime"),
                         new Param(c, "t", "qt.QTime"), End),
            EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
