/********************************************************************************
** Form generated from reading UI file 'notifications.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONS_H
#define UI_NOTIFICATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notifications
{
public:

    void setupUi(QWidget *notifications)
    {
        if (notifications->objectName().isEmpty())
            notifications->setObjectName(QString::fromUtf8("notifications"));
        notifications->resize(640, 480);

        retranslateUi(notifications);

        QMetaObject::connectSlotsByName(notifications);
    } // setupUi

    void retranslateUi(QWidget *notifications)
    {
        notifications->setWindowTitle(QCoreApplication::translate("notifications", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notifications: public Ui_notifications {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONS_H
