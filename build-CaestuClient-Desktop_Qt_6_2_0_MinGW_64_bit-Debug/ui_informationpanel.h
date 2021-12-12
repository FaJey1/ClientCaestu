/********************************************************************************
** Form generated from reading UI file 'informationpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONPANEL_H
#define UI_INFORMATIONPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationPanel
{
public:

    void setupUi(QWidget *InformationPanel)
    {
        if (InformationPanel->objectName().isEmpty())
            InformationPanel->setObjectName(QString::fromUtf8("InformationPanel"));
        InformationPanel->resize(900, 675);

        retranslateUi(InformationPanel);

        QMetaObject::connectSlotsByName(InformationPanel);
    } // setupUi

    void retranslateUi(QWidget *InformationPanel)
    {
        InformationPanel->setWindowTitle(QCoreApplication::translate("InformationPanel", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InformationPanel: public Ui_InformationPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONPANEL_H
