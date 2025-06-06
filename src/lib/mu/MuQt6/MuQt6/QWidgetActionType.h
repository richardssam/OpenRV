//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the
//            qt2mu.py script. If it is not possible, manual editing is ok but
//            it could be lost in future generations.

#ifndef __MuQt6__QWidgetActionType__h__
#define __MuQt6__QWidgetActionType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <MuQt6/Bridge.h>

namespace Mu
{
    class MuQt_QWidgetAction;

    class QWidgetActionType : public Class
    {
    public:
        typedef MuQt_QWidgetAction MuQtType;
        typedef QWidgetAction QtType;

        //
        //  Constructors
        //

        QWidgetActionType(Context* context, const char* name,
                          Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QWidgetActionType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[4];
    };

    // Inheritable object

    class MuQt_QWidgetAction : public QWidgetAction
    {
    public:
        virtual ~MuQt_QWidgetAction();
        MuQt_QWidgetAction(Pointer muobj, const CallEnvironment*,
                           QObject* parent);

    protected:
        virtual QWidget* createWidget(QWidget* parent);
        virtual void deleteWidget(QWidget* widget);
        virtual bool event(QEvent* event_);
        virtual bool eventFilter(QObject* obj, QEvent* event);

    public:
        QWidget* createWidget_pub(QWidget* parent)
        {
            return createWidget(parent);
        }

        QWidget* createWidget_pub_parent(QWidget* parent)
        {
            return QWidgetAction::createWidget(parent);
        }

        void deleteWidget_pub(QWidget* widget) { deleteWidget(widget); }

        void deleteWidget_pub_parent(QWidget* widget)
        {
            QWidgetAction::deleteWidget(widget);
        }

        bool event_pub(QEvent* event_) { return event(event_); }

        bool event_pub_parent(QEvent* event_)
        {
            return QWidgetAction::event(event_);
        }

        bool eventFilter_pub(QObject* obj, QEvent* event)
        {
            return eventFilter(obj, event);
        }

        bool eventFilter_pub_parent(QObject* obj, QEvent* event)
        {
            return QWidgetAction::eventFilter(obj, event);
        }

    public:
        const QWidgetActionType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QWidgetActionType::cachedInstance(const QWidgetActionType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QWidgetActionType__h__
