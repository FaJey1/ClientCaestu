/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutus
{
public:

    void setupUi(QWidget *aboutus)
    {
        if (aboutus->objectName().isEmpty())
            aboutus->setObjectName(QString::fromUtf8("aboutus"));
        aboutus->resize(640, 480);

        retranslateUi(aboutus);

        QMetaObject::connectSlotsByName(aboutus);
    } // setupUi

    void retranslateUi(QWidget *aboutus)
    {
        aboutus->setWindowTitle(QCoreApplication::translate("aboutus", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutus: public Ui_aboutus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
