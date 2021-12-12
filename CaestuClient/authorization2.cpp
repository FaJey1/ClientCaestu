#include "authorization2.h"
#include "ui_authorization2.h"

Authorization2::Authorization2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization2)
{
    ui->setupUi(this);
    int id1 = QFontDatabase::addApplicationFont("src\\fonts\\Ubuntu\\Ubuntu-Light.ttf");
    QString family1 = QFontDatabase::applicationFontFamilies(id1).at(0);
    QFont font1(family1);
    this->ui->checkBox->setFont(font1);
    this->ui->text_emal->setFont(font1);
    this->ui->text_username->setFont(font1);
    this->ui->text_password->setFont(font1);
    this->ui->text_confirm_password->setFont(font1);
    this->ui->text_sign_up->setFont(font1);
    this->ui->input_email->setFont(font1);
    this->ui->input_username->setFont(font1);
    this->ui->input_password->setFont(font1);
    this->ui->input_confirm_password->setFont(font1);
    this->ui->to_login->setFont(font1);
    this->ui->to_sign_up->setFont(font1);
}

Authorization2::~Authorization2()
{
    delete ui;
}

void Authorization2::get_from_authorization1(){
    this->show();
}

void Authorization2::get_from_authorization3(){
    this->show();
}

void Authorization2::on_to_sign_up_clicked()
{
    if(status_policity == 1){
        this->hide();
        emit send_to_authorization3();
        status_policity = 0;
    }
    else{

    }
}


void Authorization2::on_checkBox_stateChanged(int arg1)
{
    status_policity = 0;
    if(arg1 != 0){
        qDebug()<< "политика принята";
        status_policity = 1;
    }
    if(arg1 == 0){
        qDebug()<< "политика не принята";
    }
}


void Authorization2::on_to_login_clicked()
{
    this->hide();
    emit send_to_authorization3();
}

void Authorization2::resizeEvent(QResizeEvent *event)
{
    this->ui->main_frame->move((event->size().width()-370)/2, (event->size().height()-252)/2);
    this->ui->text_sign_up->move((event->size().width()-92)/2, event->size().height()/5-30);
    this->ui->checkBox->move((event->size().width()-370)/2+20, event->size().height()/3*2+12);
    this->ui->to_sign_up->move((event->size().width()-200)/2, event->size().height()/3*2+12+50);
    this->ui->to_login->move((event->size().width()-182)/2, event->size().height()/3*2+12+50+35);
}
