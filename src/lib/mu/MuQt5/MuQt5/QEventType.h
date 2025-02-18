//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QEventType__h__
#define __MuQt5__QEventType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu
{

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QEventType : public Class
    {
    public:
        //
        //  Types
        //

        typedef QEvent ValueType;

        struct Struct
        {
            QEvent* object;
        };

        //
        //  Constructors
        //

        QEventType(Context* context, const char* name, Class* superClass = 0);
        virtual ~QEventType();

        //
        //  Class API
        //

        virtual void load();
    };

} // namespace Mu

#endif // __MuQt5__QEventType__h__
