/********************************************************************************
** Form generated from reading UI file 'authorization2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION2_H
#define UI_AUTHORIZATION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization2
{
public:
    QPushButton *to_login;
    QLabel *text_sign_up;
    QCheckBox *checkBox;
    QFrame *main_frame;
    QVBoxLayout *verticalLayout;
    QLabel *text_emal;
    QLineEdit *input_email;
    QLabel *text_username;
    QLineEdit *input_username;
    QLabel *text_password;
    QLineEdit *input_password;
    QLabel *text_confirm_password;
    QLineEdit *input_confirm_password;
    QPushButton *to_sign_up;

    void setupUi(QWidget *Authorization2)
    {
        if (Authorization2->objectName().isEmpty())
            Authorization2->setObjectName(QString::fromUtf8("Authorization2"));
        Authorization2->resize(900, 675);
        Authorization2->setStyleSheet(QString::fromUtf8("QWidget{background-color: rgb(47, 47, 47);}"));
        to_login = new QPushButton(Authorization2);
        to_login->setObjectName(QString::fromUtf8("to_login"));
        to_login->setGeometry(QRect(370, 580, 182, 20));
        to_login->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(47, 47, 47); color: rgb(255, 255, 255); font-size: 13,79px;border-width:0px; border-radius: 0px}"));
        text_sign_up = new QLabel(Authorization2);
        text_sign_up->setObjectName(QString::fromUtf8("text_sign_up"));
        text_sign_up->setGeometry(QRect(409, 120, 92, 41));
        checkBox = new QCheckBox(Authorization2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(300, 500, 261, 20));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox{font-size: 10px; color: rgb(255, 255, 255)}"));
        main_frame = new QFrame(Authorization2);
        main_frame->setObjectName(QString::fromUtf8("main_frame"));
        main_frame->setGeometry(QRect(265, 243, 370, 251));
        verticalLayout = new QVBoxLayout(main_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        text_emal = new QLabel(main_frame);
        text_emal->setObjectName(QString::fromUtf8("text_emal"));
        text_emal->setStyleSheet(QString::fromUtf8("QLabel{max-width:352px; max-height:16px; min-width:352px; min-height:16px}"));

        verticalLayout->addWidget(text_emal);

        input_email = new QLineEdit(main_frame);
        input_email->setObjectName(QString::fromUtf8("input_email"));
        input_email->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(41, 90, 109); color: rgb(255, 255, 255); border-style: solid; border-width:0px; border-radius: 15px; border-color:rgb(41, 90, 109); max-width:352px; max-height:35px; min-width:352px; min-height: 35px}"));

        verticalLayout->addWidget(input_email);

        text_username = new QLabel(main_frame);
        text_username->setObjectName(QString::fromUtf8("text_username"));
        text_username->setStyleSheet(QString::fromUtf8("QLabel{max-width:352px; max-height:16px; min-width:352px; min-height:16px}"));

        verticalLayout->addWidget(text_username);

        input_username = new QLineEdit(main_frame);
        input_username->setObjectName(QString::fromUtf8("input_username"));
        input_username->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(41, 90, 109); color: rgb(255, 255, 255); border-style: solid; border-width:0px; border-radius: 15px; border-color:rgb(41, 90, 109); max-width:352px; max-height:35px; min-width:352px; min-height: 35px}"));

        verticalLayout->addWidget(input_username);

        text_password = new QLabel(main_frame);
        text_password->setObjectName(QString::fromUtf8("text_password"));
        text_password->setStyleSheet(QString::fromUtf8("QLabel{max-width:352px; max-height:16px; min-width:352px; min-height:16px}"));

        verticalLayout->addWidget(text_password);

        input_password = new QLineEdit(main_frame);
        input_password->setObjectName(QString::fromUtf8("input_password"));
        input_password->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(41, 90, 109); color: rgb(255, 255, 255); border-style: solid; border-width:0px; border-radius: 15px; border-color:rgb(41, 90, 109); max-width:352px; max-height:35px; min-width:352px; min-height: 35px}"));

        verticalLayout->addWidget(input_password);

        text_confirm_password = new QLabel(main_frame);
        text_confirm_password->setObjectName(QString::fromUtf8("text_confirm_password"));
        text_confirm_password->setStyleSheet(QString::fromUtf8("QLabel{max-width:352px; max-height:16px; min-width:352px; min-height:16px}"));

        verticalLayout->addWidget(text_confirm_password);

        input_confirm_password = new QLineEdit(main_frame);
        input_confirm_password->setObjectName(QString::fromUtf8("input_confirm_password"));
        input_confirm_password->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(41, 90, 109); color: rgb(255, 255, 255); border-style: solid; border-width:0px; border-radius: 15px; border-color:rgb(41, 90, 109); max-width:352px; max-height:35px; min-width:352px; min-height: 35px}"));

        verticalLayout->addWidget(input_confirm_password);

        to_sign_up = new QPushButton(Authorization2);
        to_sign_up->setObjectName(QString::fromUtf8("to_sign_up"));
        to_sign_up->setGeometry(QRect(360, 540, 200, 35));
        to_sign_up->setStyleSheet(QString::fromUtf8("QPushButton{background-color:  rgb(255, 255, 255); color: rgb(47, 47, 47); font-size: 14px; border-radius: 15px; font-weight:600  px}\n"
""));

        retranslateUi(Authorization2);

        QMetaObject::connectSlotsByName(Authorization2);
    } // setupUi

    void retranslateUi(QWidget *Authorization2)
    {
        Authorization2->setWindowTitle(QCoreApplication::translate("Authorization2", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        to_login->setText(QCoreApplication::translate("Authorization2", "Already have an account? Login", nullptr));
        text_sign_up->setText(QCoreApplication::translate("Authorization2", "<html><head/><body><p align=\"center\"><span style=\" font-size:24px; font-weight:600; color:#ffffff;\">Sign up</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("Authorization2", "I agree with Terms and Privacy", nullptr));
        text_emal->setText(QCoreApplication::translate("Authorization2", "<html><head/><body><p><span style=\" font-size:14px; font-weight:600; color:#ffffff;\">Email</span></p></body></html>", nullptr));
        text_username->setText(QCoreApplication::translate("Authorization2", "<html><head/><body><p><span style=\" font-size:14px; font-weight:600; color:#ffffff;\">Username</span></p></body></html>", nullptr));
        text_password->setText(QCoreApplication::translate("Authorization2", "<html><head/><body><p><span style=\" font-size:14px; font-weight:600; color:#ffffff;\">Password</span></p></body></html>", nullptr));
        text_confirm_password->setText(QCoreApplication::translate("Authorization2", "<html><head/><body><p><span style=\" font-size:14px; font-weight:600; color:#ffffff;\">Confirm password</span></p></body></html>", nullptr));
        to_sign_up->setText(QCoreApplication::translate("Authorization2", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization2: public Ui_Authorization2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION2_H
