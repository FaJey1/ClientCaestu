#ifndef APPEREANCE_H
#define APPEREANCE_H

#include <QWidget>

namespace Ui {
class appereance;
}

class appereance : public QWidget
{
    Q_OBJECT

public:
    explicit appereance(QWidget *parent = nullptr);
    ~appereance();

private:
    Ui::appereance *ui;
};

#endif // APPEREANCE_H
