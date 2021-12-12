/********************************************************************************
** Form generated from reading UI file 'authorization1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION1_H
#define UI_AUTHORIZATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization1
{
public:
    QLabel *caestu_picture;
    QLabel *caestu_text;
    QFrame *frame;
    QPushButton *to_login;
    QPushButton *to_registration;

    void setupUi(QWidget *Authorization1)
    {
        if (Authorization1->objectName().isEmpty())
            Authorization1->setObjectName(QString::fromUtf8("Authorization1"));
        Authorization1->resize(900, 675);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Authorization1->sizePolicy().hasHeightForWidth());
        Authorization1->setSizePolicy(sizePolicy);
        caestu_picture = new QLabel(Authorization1);
        caestu_picture->setObjectName(QString::fromUtf8("caestu_picture"));
        caestu_picture->setGeometry(QRect(0, 0, 900, 675));
        sizePolicy.setHeightForWidth(caestu_picture->sizePolicy().hasHeightForWidth());
        caestu_picture->setSizePolicy(sizePolicy);
        caestu_text = new QLabel(Authorization1);
        caestu_text->setObjectName(QString::fromUtf8("caestu_text"));
        caestu_text->setGeometry(QRect(0, 0, 900, 675));
        frame = new QFrame(Authorization1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(350, 430, 200, 84));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        to_login = new QPushButton(frame);
        to_login->setObjectName(QString::fromUtf8("to_login"));
        to_login->setGeometry(QRect(0, 0, 200, 36));
        to_login->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(47, 47, 47); color: rgb(255, 255, 255);border-radius: 15px; font-weight:600  px; font-size: 14px}"));
        to_registration = new QPushButton(frame);
        to_registration->setObjectName(QString::fromUtf8("to_registration"));
        to_registration->setGeometry(QRect(0, 48, 200, 36));
        to_registration->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(47, 47, 47); color: rgb(255, 255, 255);border-radius: 15px; font-weight:600  px; font-size: 14px}"));

        retranslateUi(Authorization1);

        QMetaObject::connectSlotsByName(Authorization1);
    } // setupUi

    void retranslateUi(QWidget *Authorization1)
    {
        Authorization1->setWindowTitle(QCoreApplication::translate("Authorization1", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        caestu_picture->setText(QString());
        caestu_text->setText(QCoreApplication::translate("Authorization1", "<html><head/><body><p align=\"center\"><span style=\" font-size:103px; font-weight:600; color:#1abeff;\">CAESTU</span></p></body></html>", nullptr));
        to_login->setText(QCoreApplication::translate("Authorization1", "Login", nullptr));
        to_registration->setText(QCoreApplication::translate("Authorization1", "Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization1: public Ui_Authorization1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION1_H
