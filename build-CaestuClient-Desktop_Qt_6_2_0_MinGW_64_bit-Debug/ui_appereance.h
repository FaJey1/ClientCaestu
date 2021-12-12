/********************************************************************************
** Form generated from reading UI file 'appereance.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEREANCE_H
#define UI_APPEREANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appereance
{
public:

    void setupUi(QWidget *appereance)
    {
        if (appereance->objectName().isEmpty())
            appereance->setObjectName(QString::fromUtf8("appereance"));
        appereance->resize(640, 480);

        retranslateUi(appereance);

        QMetaObject::connectSlotsByName(appereance);
    } // setupUi

    void retranslateUi(QWidget *appereance)
    {
        appereance->setWindowTitle(QCoreApplication::translate("appereance", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appereance: public Ui_appereance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEREANCE_H
