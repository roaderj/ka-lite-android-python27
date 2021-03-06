/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:29 2012
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

#include "sipAPIQtNetwork.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 39 "sipQtNetworkQNetworkConfiguration.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtNetworkQNetworkConfiguration.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "sipQtNetworkQNetworkConfiguration.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 49 "sipQtNetworkQNetworkConfiguration.cpp"


extern "C" {static PyObject *meth_QNetworkConfiguration_state(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::StateFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkConfiguration::StateFlags(sipCpp->state());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration_StateFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_state, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_type(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkConfiguration_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_type, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_purpose(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_purpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::Purpose sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->purpose();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkConfiguration_Purpose);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_purpose, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_bearerName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->bearerName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_bearerType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QNetworkConfiguration::BearerType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bearerType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkConfiguration_BearerType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_bearerTypeName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_bearerTypeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->bearerTypeName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_bearerTypeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_identifier(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_identifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->identifier());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_identifier, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_isRoamingAvailable(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_isRoamingAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isRoamingAvailable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_isRoamingAvailable, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_children(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_children(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QList<QNetworkConfiguration> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkConfiguration>(sipCpp->children());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_children, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_name(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_name, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkConfiguration_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkConfiguration_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkConfiguration, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkConfiguration, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkConfiguration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkConfiguration *sipCpp = reinterpret_cast<QNetworkConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkConfiguration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkConfiguration::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkConfiguration,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkConfiguration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkConfiguration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkConfiguration *sipCpp = reinterpret_cast<QNetworkConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkConfiguration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkConfiguration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkConfiguration::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkConfiguration,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkConfiguration(void *, const sipTypeDef *);}
static void *cast_QNetworkConfiguration(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkConfiguration)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkConfiguration(void *, int);}
static void release_QNetworkConfiguration(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkConfiguration *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkConfiguration(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkConfiguration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkConfiguration *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkConfiguration *>(sipSrc);
}


extern "C" {static void *array_QNetworkConfiguration(SIP_SSIZE_T);}
static void *array_QNetworkConfiguration(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkConfiguration[sipNrElem];
}


extern "C" {static void *copy_QNetworkConfiguration(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkConfiguration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkConfiguration(reinterpret_cast<const QNetworkConfiguration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkConfiguration(sipSimpleWrapper *);}
static void dealloc_QNetworkConfiguration(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkConfiguration(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QNetworkConfiguration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkConfiguration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkConfiguration *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkConfiguration();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QNetworkConfiguration * a0;

        static const char *sipKwdList[] = {
            sipName_other,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_QNetworkConfiguration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkConfiguration(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkConfiguration[] = {
    {(void *)slot_QNetworkConfiguration___ne__, ne_slot},
    {(void *)slot_QNetworkConfiguration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkConfiguration[] = {
    {SIP_MLNAME_CAST(sipName_bearerName), meth_QNetworkConfiguration_bearerName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_bearerType), meth_QNetworkConfiguration_bearerType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_bearerTypeName), meth_QNetworkConfiguration_bearerTypeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_children), meth_QNetworkConfiguration_children, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_identifier), meth_QNetworkConfiguration_identifier, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isRoamingAvailable), meth_QNetworkConfiguration_isRoamingAvailable, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNetworkConfiguration_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QNetworkConfiguration_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_purpose), meth_QNetworkConfiguration_purpose, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_state), meth_QNetworkConfiguration_state, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QNetworkConfiguration_type, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QNetworkConfiguration[] = {
    {sipName_Active, QNetworkConfiguration::Active, 48},
    {sipName_Bearer2G, QNetworkConfiguration::Bearer2G, 46},
    {sipName_BearerBluetooth, QNetworkConfiguration::BearerBluetooth, 46},
    {sipName_BearerCDMA2000, QNetworkConfiguration::BearerCDMA2000, 46},
    {sipName_BearerEthernet, QNetworkConfiguration::BearerEthernet, 46},
    {sipName_BearerHSPA, QNetworkConfiguration::BearerHSPA, 46},
    {sipName_BearerUnknown, QNetworkConfiguration::BearerUnknown, 46},
    {sipName_BearerWCDMA, QNetworkConfiguration::BearerWCDMA, 46},
    {sipName_BearerWLAN, QNetworkConfiguration::BearerWLAN, 46},
    {sipName_BearerWiMAX, QNetworkConfiguration::BearerWiMAX, 46},
    {sipName_Defined, QNetworkConfiguration::Defined, 48},
    {sipName_Discovered, QNetworkConfiguration::Discovered, 48},
    {sipName_InternetAccessPoint, QNetworkConfiguration::InternetAccessPoint, 50},
    {sipName_Invalid, QNetworkConfiguration::Invalid, 50},
    {sipName_PrivatePurpose, QNetworkConfiguration::PrivatePurpose, 47},
    {sipName_PublicPurpose, QNetworkConfiguration::PublicPurpose, 47},
    {sipName_ServiceNetwork, QNetworkConfiguration::ServiceNetwork, 50},
    {sipName_ServiceSpecificPurpose, QNetworkConfiguration::ServiceSpecificPurpose, 47},
    {sipName_Undefined, QNetworkConfiguration::Undefined, 48},
    {sipName_UnknownPurpose, QNetworkConfiguration::UnknownPurpose, 47},
    {sipName_UserChoice, QNetworkConfiguration::UserChoice, 50},
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkConfiguration = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkConfiguration,
        {0}
    },
    {
        sipNameNr_QNetworkConfiguration,
        {0, 0, 1},
        11, methods_QNetworkConfiguration,
        21, enummembers_QNetworkConfiguration,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkConfiguration,
    init_QNetworkConfiguration,
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
    dealloc_QNetworkConfiguration,
    assign_QNetworkConfiguration,
    array_QNetworkConfiguration,
    copy_QNetworkConfiguration,
    release_QNetworkConfiguration,
    cast_QNetworkConfiguration,
    0,
    0,
    0
},
    0,
    0,
    0
};
