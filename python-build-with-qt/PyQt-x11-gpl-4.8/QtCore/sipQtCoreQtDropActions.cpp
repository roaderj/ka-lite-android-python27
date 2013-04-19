/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "sipQtCoreQtDropActions.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtCoreQtDropActions.cpp"


extern "C" {static int slot_Qt_DropActions___bool__(PyObject *);}
static int slot_Qt_DropActions___bool__(PyObject *sipSelf)
{
    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtCoreQtDropActions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Qt_DropActions___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::DropActions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_DropActions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtCoreQtDropActions.cpp"
            sipReleaseType(const_cast<Qt::DropActions *>(a0),sipType_Qt_DropActions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_DropActions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_DropActions___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::DropActions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_DropActions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtCoreQtDropActions.cpp"
            sipReleaseType(const_cast<Qt::DropActions *>(a0),sipType_Qt_DropActions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_DropActions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_DropActions___invert__(PyObject *);}
static PyObject *slot_Qt_DropActions___invert__(PyObject *sipSelf)
{
    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::DropActions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }
}


extern "C" {static PyObject *slot_Qt_DropActions___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_DropActions, &a0, &a0State, &a1))
        {
            Qt::DropActions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_DropActions___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions * a0;
        int a0State = 0;
        Qt::DropActions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropActions, &a1, &a1State))
        {
            Qt::DropActions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    {
        Qt::DropActions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_DropActions, &a0, &a0State, &a1))
        {
            Qt::DropActions *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new Qt::DropActions(*a0 ^ a1);
#line 232 "sipQtCoreQtDropActions.cpp"
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_DropActions___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions * a0;
        int a0State = 0;
        Qt::DropActions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropActions, &a1, &a1State))
        {
            Qt::DropActions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    {
        Qt::DropActions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_DropActions, &a0, &a0State, &a1))
        {
            Qt::DropActions *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new Qt::DropActions(*a0 | a1);
#line 284 "sipQtCoreQtDropActions.cpp"
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_DropActions___int__(PyObject *);}
static PyObject *slot_Qt_DropActions___int__(PyObject *sipSelf)
{
    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

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


extern "C" {static PyObject *slot_Qt_DropActions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_DropActions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_DropActions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::DropActions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

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


extern "C" {static PyObject *slot_Qt_DropActions___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_DropActions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_DropActions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::DropActions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

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


extern "C" {static PyObject *slot_Qt_DropActions___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DropActions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_DropActions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::DropActions *sipCpp = reinterpret_cast<Qt::DropActions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DropActions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::DropActions::operator&=(a0);
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
extern "C" {static void *cast_Qt_DropActions(void *, const sipTypeDef *);}
static void *cast_Qt_DropActions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_DropActions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_DropActions(void *, int);}
static void release_Qt_DropActions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::DropActions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_DropActions(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_DropActions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::DropActions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::DropActions *>(sipSrc);
}


extern "C" {static void *array_Qt_DropActions(SIP_SSIZE_T);}
static void *array_Qt_DropActions(SIP_SSIZE_T sipNrElem)
{
    return new Qt::DropActions[sipNrElem];
}


extern "C" {static void *copy_Qt_DropActions(const void *, SIP_SSIZE_T);}
static void *copy_Qt_DropActions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::DropActions(reinterpret_cast<const Qt::DropActions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_DropActions(sipSimpleWrapper *);}
static void dealloc_Qt_DropActions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_DropActions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_Qt_DropActions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_Qt_DropActions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::DropActions *sipCpp = 0;

    {
        const Qt::DropActions * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_DropActions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::DropActions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Qt::DropActions *>(a0),sipType_Qt_DropActions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::DropActions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::DropActions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_DropActions(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_DropActions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::DropActions **sipCppPtr = reinterpret_cast<Qt::DropActions **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::DropActions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_DropAction)) ||
            sipCanConvertToType(sipPy, sipType_Qt_DropActions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_DropAction)))
{
    *sipCppPtr = new Qt::DropActions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::DropActions *>(sipConvertToType(sipPy, sipType_Qt_DropActions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtCoreQtDropActions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_DropActions[] = {
    {(void *)slot_Qt_DropActions___bool__, bool_slot},
    {(void *)slot_Qt_DropActions___ne__, ne_slot},
    {(void *)slot_Qt_DropActions___eq__, eq_slot},
    {(void *)slot_Qt_DropActions___invert__, invert_slot},
    {(void *)slot_Qt_DropActions___and__, and_slot},
    {(void *)slot_Qt_DropActions___xor__, xor_slot},
    {(void *)slot_Qt_DropActions___or__, or_slot},
    {(void *)slot_Qt_DropActions___int__, int_slot},
    {(void *)slot_Qt_DropActions___ixor__, ixor_slot},
    {(void *)slot_Qt_DropActions___ior__, ior_slot},
    {(void *)slot_Qt_DropActions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_DropActions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__DropActions,
        {0}
    },
    {
        sipNameNr_DropActions,
        {262, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_DropActions,
    init_Qt_DropActions,
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
    dealloc_Qt_DropActions,
    assign_Qt_DropActions,
    array_Qt_DropActions,
    copy_Qt_DropActions,
    release_Qt_DropActions,
    cast_Qt_DropActions,
    convertTo_Qt_DropActions,
    0,
    0
},
    0,
    1,
    0
};
