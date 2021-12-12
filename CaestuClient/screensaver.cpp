#include "screensaver.h"
#include "ui_screensaver.h"

ScreenSaver::ScreenSaver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScreenSaver)
{
    ui->setupUi(this);
    //qDebug() <<"Вывод:" << QDir::currentPath();
    QTimer::singleShot(4000,this,SLOT(nextWindow()));
    int id = QFontDatabase::addApplicationFont("src\\fonts\\Aquire\\Aquire.otf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont font1(family);
    ui->caestu_text->setFont(font1);
}

ScreenSaver::~ScreenSaver()
{
    delete ui;
}
void ScreenSaver::resizeEvent(QResizeEvent *event){
    QPixmap pixmap;
    pixmap.load("src\\pictures\\screensaver.png");
    this->ui->caestu_picture->resize(event->size().width(), event->size().height());
    this->ui->caestu_text->resize(event->size().width(), event->size().height());
    if(event->size().width() != 900 && event->size().height() != 675){
        pixmap = pixmap.scaled(ui->caestu_picture->size().width(), 1.5*ui->caestu_picture->size().height(), Qt::IgnoreAspectRatio);
    }
    else{
        pixmap = pixmap.scaled(ui->caestu_picture->size().width(), ui->caestu_picture->size().height(), Qt::IgnoreAspectRatio);
    }
    this->ui->caestu_picture->setPixmap(pixmap);
}

void ScreenSaver::nextWindow()
{
    this->hide();
    emit send_to_authorization1();
}
