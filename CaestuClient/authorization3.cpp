#include "authorization3.h"
#include "ui_authorization3.h"

Authorization3::Authorization3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization3)
{
    ui->setupUi(this);
    int id1 = QFontDatabase::addApplicationFont("src\\fonts\\Ubuntu\\Ubuntu-Light.ttf");
    QString family1 = QFontDatabase::applicationFontFamilies(id1).at(0);
    QFont font1(family1);
    ui->login_text->setFont(font1);
    ui->text_email->setFont(font1);
    ui->text_password->setFont(font1);
    ui->to_login->setFont(font1);
    ui->to_forgot_password->setFont(font1);
    ui->to_sign_up->setFont(font1);
}

Authorization3::~Authorization3()
{
    delete ui;
}

void Authorization3::get_from_authorization1(){
   this->show();
}

void Authorization3::get_from_authorization2(){
    this->show();
}

void Authorization3::resizeEvent(QResizeEvent *event){
    this->ui->login_text->move((event->size().width()-64)/2,(event->size().height()-35)/5+event->size().height()/9);
    this->ui->input_email->move((event->size().width()-370)/2, 2*(event->size().height()-35)/5+event->size().height()/9);
    this->ui->input_password->move((event->size().width()-370)/2, 2*(event->size().height()-35)/5+event->size().height()/9+35+24+16);
    this->ui->text_email->move((event->size().width()-370)/2, 2*(event->size().height()-35)/5+event->size().height()/9-28);
    this->ui->text_password->move((event->size().width()-370)/2, 2*(event->size().height()-35)/5+event->size().height()/9+35+12);
    this->ui->to_forgot_password->move((event->size().width()-370)/2+370-82, 2*(event->size().height()-35)/5+event->size().height()/9+70+24+16);
    this->ui->to_login->move((event->size().width()-200)/2, 2*(event->size().height()-35)/5+event->size().height()/9+70+36+16+39);
    this->ui->to_sign_up->move((event->size().width()-182)/2, 2*(event->size().height()-35)/5+event->size().height()/9+70+36+16+39+35);
}

void Authorization3::on_to_forgot_password_clicked()
{

}


void Authorization3::on_to_login_clicked()
{
    this->hide();
    emit send_to_main_menu();
}


void Authorization3::on_to_sign_up_clicked()
{
    this->hide();
    emit send_to_authorization2();
}

