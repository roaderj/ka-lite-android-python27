/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
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

#line 139 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 164 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 41 "sipQtGuiQTextBlock.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "sipQtGuiQTextBlock.cpp"
#line 260 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 48 "sipQtGuiQTextBlock.cpp"
#line 139 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 164 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 53 "sipQtGuiQTextBlock.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextlist.sip"
#include <qtextlist.h>
#line 56 "sipQtGuiQTextBlock.cpp"
#line 65 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 59 "sipQtGuiQTextBlock.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 62 "sipQtGuiQTextBlock.cpp"
#line 309 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 65 "sipQtGuiQTextBlock.cpp"
#line 439 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 68 "sipQtGuiQTextBlock.cpp"
#line 58 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 80 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 73 "sipQtGuiQTextBlock.cpp"


extern "C" {static PyObject *meth_QTextBlock_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_position(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_position, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_length(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_length, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_contains(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contains(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_contains, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_layout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_layout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextLayout *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->layout();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextLayout,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_layout, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_blockFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlockFormat *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlockFormat(sipCpp->blockFormat());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlockFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormat, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->blockFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormatIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_charFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextCharFormat *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCharFormat(sipCpp->charFormat());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormat, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_charFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->charFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormatIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_text(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_text, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_document(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_document(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            const QTextDocument *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->document();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QTextDocument *>(sipRes),sipType_QTextDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_document, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_textList(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textList();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textList, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_begin(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock::iterator *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock::iterator(sipCpp->begin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_begin, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_end(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock::iterator *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock::iterator(sipCpp->end());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_end, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_next(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock(sipCpp->next());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_next, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_previous(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock(sipCpp->previous());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_previous, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_userData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlockUserData *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userData();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextBlockUserData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_setUserData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlockUserData * a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QTextBlock, &sipCpp, sipType_QTextBlockUserData, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUserData(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_userState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userState();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userState, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_setUserState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUserState(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserState, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_clearLayout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_clearLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearLayout();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_clearLayout, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_revision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_revision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->revision();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_revision, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_setRevision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setRevision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRevision(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setRevision, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isVisible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setVisible, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_blockNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->blockNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockNumber, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_firstLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_firstLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->firstLineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_firstLineNumber, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_setLineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setLineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLineCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setLineCount, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_lineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_lineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_lineCount, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBlock_textDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            Qt::LayoutDirection sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textDirection();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_LayoutDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textDirection, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QTextBlock___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->QTextBlock::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ge_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,lt_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextBlock,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextBlock(void *, const sipTypeDef *);}
static void *cast_QTextBlock(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextBlock)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlock(void *, int);}
static void release_QTextBlock(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextBlock *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextBlock(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBlock(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBlock *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBlock *>(sipSrc);
}


extern "C" {static void *array_QTextBlock(SIP_SSIZE_T);}
static void *array_QTextBlock(SIP_SSIZE_T sipNrElem)
{
    return new QTextBlock[sipNrElem];
}


extern "C" {static void *copy_QTextBlock(const void *, SIP_SSIZE_T);}
static void *copy_QTextBlock(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBlock(reinterpret_cast<const QTextBlock *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBlock(sipSimpleWrapper *);}
static void dealloc_QTextBlock(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBlock(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QTextBlock(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextBlock(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextBlock *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBlock();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextBlock * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextBlock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBlock(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBlock[] = {
    {(void *)slot_QTextBlock___ge__, ge_slot},
    {(void *)slot_QTextBlock___lt__, lt_slot},
    {(void *)slot_QTextBlock___ne__, ne_slot},
    {(void *)slot_QTextBlock___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextBlock[] = {
    {SIP_MLNAME_CAST(sipName_begin), meth_QTextBlock_begin, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_blockFormat), meth_QTextBlock_blockFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_blockFormatIndex), meth_QTextBlock_blockFormatIndex, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_blockNumber), meth_QTextBlock_blockNumber, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_charFormat), meth_QTextBlock_charFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_charFormatIndex), meth_QTextBlock_charFormatIndex, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clearLayout), meth_QTextBlock_clearLayout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contains), meth_QTextBlock_contains, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_document), meth_QTextBlock_document, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_end), meth_QTextBlock_end, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_firstLineNumber), meth_QTextBlock_firstLineNumber, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextBlock_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QTextBlock_isVisible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_layout), meth_QTextBlock_layout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_length), meth_QTextBlock_length, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lineCount), meth_QTextBlock_lineCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_next), meth_QTextBlock_next, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextBlock_position, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_previous), meth_QTextBlock_previous, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_revision), meth_QTextBlock_revision, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setLineCount), meth_QTextBlock_setLineCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setRevision), meth_QTextBlock_setRevision, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUserData), meth_QTextBlock_setUserData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setUserState), meth_QTextBlock_setUserState, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QTextBlock_setVisible, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_text), meth_QTextBlock_text, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textDirection), meth_QTextBlock_textDirection, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textList), meth_QTextBlock_textList, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_userData), meth_QTextBlock_userData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_userState), meth_QTextBlock_userState, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextBlock = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextBlock,
        {0}
    },
    {
        sipNameNr_QTextBlock,
        {0, 0, 1},
        30, methods_QTextBlock,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QTextBlock,
    init_QTextBlock,
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
    dealloc_QTextBlock,
    assign_QTextBlock,
    array_QTextBlock,
    copy_QTextBlock,
    release_QTextBlock,
    cast_QTextBlock,
    0,
    0,
    0
},
    0,
    0,
    0
};
