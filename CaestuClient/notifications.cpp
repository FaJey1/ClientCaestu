#include "notifications.h"
#include "ui_notifications.h"

notifications::notifications(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::notifications)
{
    ui->setupUi(this);
}

notifications::~notifications()
{
    delete ui;
}
