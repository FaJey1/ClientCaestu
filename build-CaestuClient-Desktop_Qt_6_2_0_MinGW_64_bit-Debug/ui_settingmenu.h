/********************************************************************************
** Form generated from reading UI file 'settingmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGMENU_H
#define UI_SETTINGMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingmenu
{
public:

    void setupUi(QWidget *settingmenu)
    {
        if (settingmenu->objectName().isEmpty())
            settingmenu->setObjectName(QString::fromUtf8("settingmenu"));
        settingmenu->resize(640, 480);

        retranslateUi(settingmenu);

        QMetaObject::connectSlotsByName(settingmenu);
    } // setupUi

    void retranslateUi(QWidget *settingmenu)
    {
        settingmenu->setWindowTitle(QCoreApplication::translate("settingmenu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingmenu: public Ui_settingmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGMENU_H
