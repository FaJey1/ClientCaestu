#include "security.h"
#include "ui_security.h"

security::security(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::security)
{
    ui->setupUi(this);
}

security::~security()
{
    delete ui;
}
