/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 39 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 43 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"


extern "C" {static int slot_QGraphicsItem_GraphicsItemFlags___bool__(PyObject *);}
static int slot_QGraphicsItem_GraphicsItemFlags___bool__(PyObject *sipSelf)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(const_cast<QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGraphicsItem_GraphicsItemFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(const_cast<QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGraphicsItem_GraphicsItemFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___invert__(PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___invert__(PyObject *sipSelf)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsItem::GraphicsItemFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
            QGraphicsItem::GraphicsItemFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;
        QGraphicsItem::GraphicsItemFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, sipType_QGraphicsItem_GraphicsItemFlags, &a1, &a1State))
        {
            QGraphicsItem::GraphicsItemFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);
            sipReleaseType(a1,sipType_QGraphicsItem_GraphicsItemFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
            QGraphicsItem::GraphicsItemFlags *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsItem::GraphicsItemFlags(*a0 ^ a1);
#line 232 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;
        QGraphicsItem::GraphicsItemFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, sipType_QGraphicsItem_GraphicsItemFlags, &a1, &a1State))
        {
            QGraphicsItem::GraphicsItemFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);
            sipReleaseType(a1,sipType_QGraphicsItem_GraphicsItemFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
            QGraphicsItem::GraphicsItemFlags *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsItem::GraphicsItemFlags(*a0 | a1);
#line 284 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___int__(PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___int__(PyObject *sipSelf)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsItem::GraphicsItemFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsItem::GraphicsItemFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsItem::GraphicsItemFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsItem_GraphicsItemFlags(void *, const sipTypeDef *);}
static void *cast_QGraphicsItem_GraphicsItemFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGraphicsItem_GraphicsItemFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsItem_GraphicsItemFlags(void *, int);}
static void release_QGraphicsItem_GraphicsItemFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGraphicsItem_GraphicsItemFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsItem_GraphicsItemFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsItem::GraphicsItemFlags *>(sipSrc);
}


extern "C" {static void *array_QGraphicsItem_GraphicsItemFlags(SIP_SSIZE_T);}
static void *array_QGraphicsItem_GraphicsItemFlags(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsItem::GraphicsItemFlags[sipNrElem];
}


extern "C" {static void *copy_QGraphicsItem_GraphicsItemFlags(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsItem_GraphicsItemFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsItem::GraphicsItemFlags(reinterpret_cast<const QGraphicsItem::GraphicsItemFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *);}
static void dealloc_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsItem_GraphicsItemFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = 0;

    {
        const QGraphicsItem::GraphicsItemFlags * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsItem::GraphicsItemFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsItem::GraphicsItemFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsItem::GraphicsItemFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsItem_GraphicsItemFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsItem_GraphicsItemFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsItem::GraphicsItemFlags **sipCppPtr = reinterpret_cast<QGraphicsItem::GraphicsItemFlags **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsItem::GraphicsItemFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsItem_GraphicsItemFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlag)))
{
    *sipCppPtr = new QGraphicsItem::GraphicsItemFlags(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipConvertToType(sipPy, sipType_QGraphicsItem_GraphicsItemFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsItem_GraphicsItemFlags[] = {
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___bool__, bool_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ne__, ne_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___eq__, eq_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___invert__, invert_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___and__, and_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___xor__, xor_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___or__, or_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___int__, int_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ixor__, ixor_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ior__, ior_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsItem_GraphicsItemFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsItem__GraphicsItemFlags,
        {0}
    },
    {
        sipNameNr_GraphicsItemFlags,
        {167, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsItem_GraphicsItemFlags,
    init_QGraphicsItem_GraphicsItemFlags,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGraphicsItem_GraphicsItemFlags,
    assign_QGraphicsItem_GraphicsItemFlags,
    array_QGraphicsItem_GraphicsItemFlags,
    copy_QGraphicsItem_GraphicsItemFlags,
    release_QGraphicsItem_GraphicsItemFlags,
    cast_QGraphicsItem_GraphicsItemFlags,
    convertTo_QGraphicsItem_GraphicsItemFlags,
    0,
    0
},
    0,
    1,
    0
};
