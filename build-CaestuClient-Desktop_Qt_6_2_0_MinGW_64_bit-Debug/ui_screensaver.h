/********************************************************************************
** Form generated from reading UI file 'screensaver.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSAVER_H
#define UI_SCREENSAVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenSaver
{
public:
    QLabel *caestu_text;
    QLabel *caestu_picture;

    void setupUi(QWidget *ScreenSaver)
    {
        if (ScreenSaver->objectName().isEmpty())
            ScreenSaver->setObjectName(QString::fromUtf8("ScreenSaver"));
        ScreenSaver->resize(900, 673);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScreenSaver->sizePolicy().hasHeightForWidth());
        ScreenSaver->setSizePolicy(sizePolicy);
        caestu_text = new QLabel(ScreenSaver);
        caestu_text->setObjectName(QString::fromUtf8("caestu_text"));
        caestu_text->setGeometry(QRect(0, 0, 900, 675));
        sizePolicy.setHeightForWidth(caestu_text->sizePolicy().hasHeightForWidth());
        caestu_text->setSizePolicy(sizePolicy);
        caestu_picture = new QLabel(ScreenSaver);
        caestu_picture->setObjectName(QString::fromUtf8("caestu_picture"));
        caestu_picture->setGeometry(QRect(0, 0, 900, 675));
        caestu_picture->raise();
        caestu_text->raise();

        retranslateUi(ScreenSaver);

        QMetaObject::connectSlotsByName(ScreenSaver);
    } // setupUi

    void retranslateUi(QWidget *ScreenSaver)
    {
        ScreenSaver->setWindowTitle(QCoreApplication::translate("ScreenSaver", "\320\227\320\260\321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        caestu_text->setText(QCoreApplication::translate("ScreenSaver", "<html><head/><body><p align=\"center\"><span style=\" font-size:103px; font-weight:600; color:#1abeff;\">CAESTU</span></p></body></html>", nullptr));
        caestu_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScreenSaver: public Ui_ScreenSaver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSAVER_H
