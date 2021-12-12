#include "settingmenu.h"
#include "ui_settingmenu.h"

settingmenu::settingmenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settingmenu)
{
    ui->setupUi(this);
}

settingmenu::~settingmenu()
{
    delete ui;
}
