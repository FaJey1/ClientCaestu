/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *home;
    QPushButton *analytics;
    QPushButton *calibration;
    QPushButton *news;
    QPushButton *settings;
    QPushButton *exit;
    QFrame *line;
    QLabel *logo_picture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(900, 675);
        MainMenu->setStyleSheet(QString::fromUtf8("QWidget{background-color: rgb(47, 47, 47)}"));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 98, 96, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        home = new QPushButton(frame);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(0, 0, 96, 48));
        home->setStyleSheet(QString::fromUtf8("QPushButton{border-width:0px; border-radius: 0px}"));
        analytics = new QPushButton(frame);
        analytics->setObjectName(QString::fromUtf8("analytics"));
        analytics->setGeometry(QRect(0, 53, 96, 48));
        analytics->setStyleSheet(QString::fromUtf8("QPushButton{border-width:0px; border-radius: 0px}"));
        calibration = new QPushButton(frame);
        calibration->setObjectName(QString::fromUtf8("calibration"));
        calibration->setGeometry(QRect(0, 106, 96, 48));
        calibration->setStyleSheet(QString::fromUtf8("QPushButton{border-width:0px; border-radius: 0px}"));
        news = new QPushButton(frame);
        news->setObjectName(QString::fromUtf8("news"));
        news->setGeometry(QRect(0, 159, 96, 48));
        news->setStyleSheet(QString::fromUtf8("QPushButton{border-width:0px; border-radius: 0px}"));
        settings = new QPushButton(frame);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(0, 212, 96, 48));
        settings->setMouseTracking(true);
        settings->setStyleSheet(QString::fromUtf8("QPushButton{border-width:0px; border-radius: 0px}"));
        exit = new QPushButton(frame);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(0, 265, 96, 48));
        exit->setStyleSheet(QString::fromUtf8("QPushButton{border-width:0px; border-radius: 0px}"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 86, 900, 1));
        line->setStyleSheet(QString::fromUtf8("Line{background-color: rgb(236, 236, 236)}"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        logo_picture = new QLabel(centralwidget);
        logo_picture->setObjectName(QString::fromUtf8("logo_picture"));
        logo_picture->setGeometry(QRect(24, 10, 50, 50));
        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        home->setText(QString());
        analytics->setText(QString());
        calibration->setText(QString());
        news->setText(QString());
        settings->setText(QString());
        exit->setText(QString());
        logo_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
