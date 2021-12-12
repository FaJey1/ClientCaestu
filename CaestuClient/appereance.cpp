#include "appereance.h"
#include "ui_appereance.h"

appereance::appereance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::appereance)
{
    ui->setupUi(this);
}

appereance::~appereance()
{
    delete ui;
}
