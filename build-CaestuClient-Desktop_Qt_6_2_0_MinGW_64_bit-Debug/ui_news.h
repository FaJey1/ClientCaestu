/********************************************************************************
** Form generated from reading UI file 'news.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWS_H
#define UI_NEWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_News
{
public:

    void setupUi(QWidget *News)
    {
        if (News->objectName().isEmpty())
            News->setObjectName(QString::fromUtf8("News"));
        News->resize(900, 675);

        retranslateUi(News);

        QMetaObject::connectSlotsByName(News);
    } // setupUi

    void retranslateUi(QWidget *News)
    {
        News->setWindowTitle(QCoreApplication::translate("News", "\320\235\320\276\320\262\320\276\321\207\321\202\320\270 \320\270 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class News: public Ui_News {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWS_H
