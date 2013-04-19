/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:18 2012
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

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 39 "sipQtGuiQMatrix.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpolygon.sip"
#include <qpolygon.h>
#line 43 "sipQtGuiQMatrix.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 46 "sipQtGuiQMatrix.cpp"
#line 158 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 49 "sipQtGuiQMatrix.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 52 "sipQtGuiQMatrix.cpp"
#line 92 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 55 "sipQtGuiQMatrix.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qline.sip"
#include <qline.h>
#line 58 "sipQtGuiQMatrix.cpp"
#line 107 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qline.sip"
#include <qline.h>
#line 61 "sipQtGuiQMatrix.cpp"
#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpolygon.sip"
#include <qpolygon.h>
#line 64 "sipQtGuiQMatrix.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 67 "sipQtGuiQMatrix.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 55 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 72 "sipQtGuiQMatrix.cpp"


extern "C" {static PyObject *meth_QMatrix_setMatrix(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_setMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        qreal a4;
        qreal a5;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddddd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1, &a2, &a3, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMatrix(a0,a1,a2,a3,a4,a5);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_setMatrix, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_m11(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m11(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m11();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m11, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_m12(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m12(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m12();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m12, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_m21(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m21(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m21();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m21, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_m22(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m22(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m22();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m22, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_dx(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_dx(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dx();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_dx, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_dy(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_dy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dy();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_dy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_map(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BXiXi", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->map(a0,a1,&a2,&a3);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(ii)",a2,a3);
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->map(a0,a1,&a2,&a3);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(dd)",a2,a3);
        }
    }

    {
        const QPoint * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPoint, &a0))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    {
        const QPointF * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPointF, &a0))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    {
        const QLine * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QLine, &a0))
        {
            QLine *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLine(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLine,NULL);
        }
    }

    {
        const QLineF * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QLineF, &a0))
        {
            QLineF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLineF(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    {
        const QPolygonF * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPolygonF, &a0))
        {
            QPolygonF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPolygonF(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPolygonF,NULL);
        }
    }

    {
        const QPolygon * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPolygon, &a0))
        {
            QPolygon *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPolygon(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPolygon,NULL);
        }
    }

    {
        const QRegion * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRegion, &a0))
        {
            QRegion *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRegion(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
        const QPainterPath * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPainterPath, &a0))
        {
            QPainterPath *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainterPath(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_map, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_mapRect(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_mapRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRect, &a0))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->mapRect(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    {
        const QRectF * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRectF, &a0))
        {
            QRectF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->mapRect(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_mapRect, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_mapToPolygon(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_mapToPolygon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect * a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRect, &a0))
        {
            QPolygon *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPolygon(sipCpp->mapToPolygon(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPolygon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_mapToPolygon, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_reset(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reset();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_reset, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_translate(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->translate(a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_translate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_scale(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_scale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->scale(a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_scale, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_shear(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_shear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->shear(a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_shear, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_rotate(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_rotate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMatrix, &sipCpp, &a0))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->rotate(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_rotate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_isInvertible(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_isInvertible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isInvertible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_isInvertible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_det(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_det(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->det();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_det, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_inverted(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMatrix_inverted(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QMatrix *sipCpp;

        static const char *sipKwdList[] = {
            sipName_invertible,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix(sipCpp->inverted(&a0));
            Py_END_ALLOW_THREADS

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
            return sipBuildResult(0,"(Rb)",sipResObj,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_inverted, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isIdentity();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_isIdentity, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QMatrix_determinant(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_determinant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->determinant();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_determinant, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QMatrix___mul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix * a0;
        const QMatrix * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMatrix, &a0, sipType_QMatrix, &a1))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix((*a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMatrix___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix::operator*=(*a0);
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


extern "C" {static PyObject *slot_QMatrix___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMatrix,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMatrix,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMatrix(void *, const sipTypeDef *);}
static void *cast_QMatrix(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMatrix)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix(void *, int);}
static void release_QMatrix(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMatrix *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QMatrix(void *);}
static PyObject *pickle_QMatrix(void *sipCppV)
{
    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipCppV);
    PyObject *sipRes;

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qmatrix.sip"
    sipRes = Py_BuildValue((char *)"dddddd", sipCpp->m11(), sipCpp->m12(), sipCpp->m21(), sipCpp->m22(), sipCpp->dx(), sipCpp->dy());
#line 968 "sipQtGuiQMatrix.cpp"

    return sipRes;
}


extern "C" {static void assign_QMatrix(void *, SIP_SSIZE_T, const void *);}
static void assign_QMatrix(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMatrix *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMatrix *>(sipSrc);
}


extern "C" {static void *array_QMatrix(SIP_SSIZE_T);}
static void *array_QMatrix(SIP_SSIZE_T sipNrElem)
{
    return new QMatrix[sipNrElem];
}


extern "C" {static void *copy_QMatrix(const void *, SIP_SSIZE_T);}
static void *copy_QMatrix(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMatrix(reinterpret_cast<const QMatrix *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix(sipSimpleWrapper *);}
static void dealloc_QMatrix(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMatrix(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QMatrix(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMatrix(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMatrix *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        qreal a4;
        qreal a5;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddddd", &a0, &a1, &a2, &a3, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix(a0,a1,a2,a3,a4,a5);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMatrix * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMatrix[] = {
    {(void *)slot_QMatrix___mul__, mul_slot},
    {(void *)slot_QMatrix___imul__, imul_slot},
    {(void *)slot_QMatrix___ne__, ne_slot},
    {(void *)slot_QMatrix___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix[] = {
    {SIP_MLNAME_CAST(sipName_det), meth_QMatrix_det, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_determinant), meth_QMatrix_determinant, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dx), meth_QMatrix_dx, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dy), meth_QMatrix_dy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inverted), (PyCFunction)meth_QMatrix_inverted, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isIdentity), meth_QMatrix_isIdentity, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isInvertible), meth_QMatrix_isInvertible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_m11), meth_QMatrix_m11, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_m12), meth_QMatrix_m12, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_m21), meth_QMatrix_m21, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_m22), meth_QMatrix_m22, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_map), meth_QMatrix_map, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mapRect), meth_QMatrix_mapRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mapToPolygon), meth_QMatrix_mapToPolygon, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_reset), meth_QMatrix_reset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rotate), meth_QMatrix_rotate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scale), meth_QMatrix_scale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMatrix), meth_QMatrix_setMatrix, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_shear), meth_QMatrix_shear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_translate), meth_QMatrix_translate, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QMatrix = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMatrix,
        {0}
    },
    {
        sipNameNr_QMatrix,
        {0, 0, 1},
        20, methods_QMatrix,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMatrix,
    init_QMatrix,
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
    dealloc_QMatrix,
    assign_QMatrix,
    array_QMatrix,
    copy_QMatrix,
    release_QMatrix,
    cast_QMatrix,
    0,
    0,
    pickle_QMatrix
},
    0,
    0,
    0
};
