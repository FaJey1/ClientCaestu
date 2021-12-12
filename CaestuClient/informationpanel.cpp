#include "informationpanel.h"
#include "ui_informationpanel.h"

InformationPanel::InformationPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InformationPanel)
{
    ui->setupUi(this);
}

InformationPanel::~InformationPanel()
{
    delete ui;
}
