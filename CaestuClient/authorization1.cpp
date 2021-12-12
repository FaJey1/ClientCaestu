#include "authorization1.h"
#include "ui_authorization1.h"

Authorization1::Authorization1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization1)
{
    ui->setupUi(this);
    int id1 = QFontDatabase::addApplicationFont("src\\fonts\\Aquire\\Aquire.otf");
    int id2 = QFontDatabase::addApplicationFont("src\\fonts\\Ubuntu\\Ubuntu-Light.ttf");
    QString family1 = QFontDatabase::applicationFontFamilies(id1).at(0);
    QString family2 = QFontDatabase::applicationFontFamilies(id2).at(0);
    QFont font1(family1);
    QFont font2(family2);
    ui->caestu_text->setFont(font1);
    ui->to_login->setFont(font2);
    ui->to_registration->setFont(font2);
}

Authorization1::~Authorization1()
{
    delete ui;
}

void Authorization1::get_from_screen_saver()
{
    this->show();
}

void Authorization1::resizeEvent(QResizeEvent *event){
    QPixmap pixmap;
    pixmap.load("src\\pictures\\Authorization.png");
    this->ui->caestu_text->resize(event->size().width(), event->size().height());
    this->ui->caestu_picture->resize(event->size().width(), event->size().height());
    this->ui->frame->move((event->size().width()-200)/2, (event->size().height()-76)*3/4);
    if(event->size().width() != 900 && event->size().height() != 675){
        pixmap = pixmap.scaled(ui->caestu_picture->size().width(), 1.5*ui->caestu_picture->size().height(), Qt::IgnoreAspectRatio);
    }
    else{
        pixmap = pixmap.scaled(ui->caestu_picture->size().width(), ui->caestu_picture->size().height(), Qt::IgnoreAspectRatio);
    }
    this->ui->caestu_picture->setPixmap(pixmap);
}



void Authorization1::on_to_login_clicked()
{
    this->hide();
    emit send_to_authorization3();
}


void Authorization1::on_to_registration_clicked()
{
    this->hide();
    emit send_to_authorization2();
}

