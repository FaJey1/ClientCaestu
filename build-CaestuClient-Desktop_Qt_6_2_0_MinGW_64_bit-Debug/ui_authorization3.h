/********************************************************************************
** Form generated from reading UI file 'authorization3.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION3_H
#define UI_AUTHORIZATION3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization3
{
public:
    QLabel *login_text;
    QLineEdit *input_email;
    QLabel *text_email;
    QLabel *text_password;
    QPushButton *to_forgot_password;
    QLineEdit *input_password;
    QPushButton *to_sign_up;
    QPushButton *to_login;

    void setupUi(QWidget *Authorization3)
    {
        if (Authorization3->objectName().isEmpty())
            Authorization3->setObjectName(QString::fromUtf8("Authorization3"));
        Authorization3->resize(900, 675);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Authorization3->sizePolicy().hasHeightForWidth());
        Authorization3->setSizePolicy(sizePolicy);
        Authorization3->setStyleSheet(QString::fromUtf8("QWidget{background-color: rgb(47, 47, 47);}"));
        login_text = new QLabel(Authorization3);
        login_text->setObjectName(QString::fromUtf8("login_text"));
        login_text->setGeometry(QRect(417, 203, 64, 35));
        login_text->setStyleSheet(QString::fromUtf8("QLabel{font-size: 24px; color: rgb(255, 255, 255);}"));
        input_email = new QLineEdit(Authorization3);
        input_email->setObjectName(QString::fromUtf8("input_email"));
        input_email->setGeometry(QRect(265, 328, 370, 35));
        input_email->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(41, 90, 109); color: rgb(255, 255, 255); border-style: solid; border-width:0px; border-radius: 15px; border-color:rgb(41, 90, 109); max-width:370px; max-height:35px; min-width:370px; min-height: 35px}"));
        text_email = new QLabel(Authorization3);
        text_email->setObjectName(QString::fromUtf8("text_email"));
        text_email->setGeometry(QRect(265, 300, 41, 16));
        text_email->setStyleSheet(QString::fromUtf8("QLabel{font-size: 14px; color: rgb(255, 255, 255)}"));
        text_password = new QLabel(Authorization3);
        text_password->setObjectName(QString::fromUtf8("text_password"));
        text_password->setGeometry(QRect(265, 375, 81, 16));
        text_password->setStyleSheet(QString::fromUtf8("QLabel{font-size: 14px; color: rgb(255, 255, 255)}"));
        to_forgot_password = new QPushButton(Authorization3);
        to_forgot_password->setObjectName(QString::fromUtf8("to_forgot_password"));
        to_forgot_password->setGeometry(QRect(545, 450, 91, 20));
        to_forgot_password->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(47, 47, 47); color: rgb(255, 255, 255); font-size: 10px;border-width:0px; border-radius: 0px}"));
        input_password = new QLineEdit(Authorization3);
        input_password->setObjectName(QString::fromUtf8("input_password"));
        input_password->setGeometry(QRect(265, 403, 370, 35));
        input_password->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(41, 90, 109); color: rgb(255, 255, 255); border-style: solid; border-width:0px; border-radius: 15px; border-color:rgb(41, 90, 109); max-width:370px; max-height:35px; min-width:370px; min-height: 35px}"));
        to_sign_up = new QPushButton(Authorization3);
        to_sign_up->setObjectName(QString::fromUtf8("to_sign_up"));
        to_sign_up->setGeometry(QRect(370, 570, 182, 31));
        to_sign_up->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(47, 47, 47); color: rgb(255, 255, 255); font-size: 13,79px;border-width:0px; border-radius: 0px}"));
        to_login = new QPushButton(Authorization3);
        to_login->setObjectName(QString::fromUtf8("to_login"));
        to_login->setGeometry(QRect(360, 530, 200, 35));
        to_login->setMouseTracking(false);
        to_login->setStyleSheet(QString::fromUtf8("QPushButton{background-color:  rgb(255, 255, 255); color: rgb(47, 47, 47); font-size: 14px; font-weight:600; border-radius: 15px}\n"
""));

        retranslateUi(Authorization3);

        QMetaObject::connectSlotsByName(Authorization3);
    } // setupUi

    void retranslateUi(QWidget *Authorization3)
    {
        Authorization3->setWindowTitle(QCoreApplication::translate("Authorization3", "\320\222\321\205\320\276\320\264", nullptr));
        login_text->setText(QCoreApplication::translate("Authorization3", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Login</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        input_email->setToolTip(QCoreApplication::translate("Authorization3", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        input_email->setWhatsThis(QCoreApplication::translate("Authorization3", "Input your email", nullptr));
#endif // QT_CONFIG(whatsthis)
        input_email->setText(QString());
        text_email->setText(QCoreApplication::translate("Authorization3", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Email</span></p></body></html>", nullptr));
        text_password->setText(QCoreApplication::translate("Authorization3", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Password</span></p></body></html>", nullptr));
        to_forgot_password->setText(QCoreApplication::translate("Authorization3", "Forgot password?", nullptr));
#if QT_CONFIG(whatsthis)
        input_password->setWhatsThis(QCoreApplication::translate("Authorization3", "Input your password", nullptr));
#endif // QT_CONFIG(whatsthis)
        input_password->setText(QString());
        to_sign_up->setText(QCoreApplication::translate("Authorization3", "Don't have an account? Sign up", nullptr));
        to_login->setText(QCoreApplication::translate("Authorization3", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization3: public Ui_Authorization3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION3_H
