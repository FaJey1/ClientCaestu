/********************************************************************************
** Form generated from reading UI file 'security.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITY_H
#define UI_SECURITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_security
{
public:

    void setupUi(QWidget *security)
    {
        if (security->objectName().isEmpty())
            security->setObjectName(QString::fromUtf8("security"));
        security->resize(640, 480);

        retranslateUi(security);

        QMetaObject::connectSlotsByName(security);
    } // setupUi

    void retranslateUi(QWidget *security)
    {
        security->setWindowTitle(QCoreApplication::translate("security", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class security: public Ui_security {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITY_H
