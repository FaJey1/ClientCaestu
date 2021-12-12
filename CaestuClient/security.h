#ifndef SECURITY_H
#define SECURITY_H

#include <QWidget>

namespace Ui {
class security;
}

class security : public QWidget
{
    Q_OBJECT

public:
    explicit security(QWidget *parent = nullptr);
    ~security();

private:
    Ui::security *ui;
};

#endif // SECURITY_H
