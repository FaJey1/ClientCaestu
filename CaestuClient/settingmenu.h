#ifndef SETTINGMENU_H
#define SETTINGMENU_H

#include <QWidget>

namespace Ui {
class settingmenu;
}

class settingmenu : public QWidget
{
    Q_OBJECT

public:
    explicit settingmenu(QWidget *parent = nullptr);
    ~settingmenu();

private:
    Ui::settingmenu *ui;
};

#endif // SETTINGMENU_H
