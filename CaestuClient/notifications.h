#ifndef NOTIFICATIONS_H
#define NOTIFICATIONS_H

#include <QWidget>

namespace Ui {
class notifications;
}

class notifications : public QWidget
{
    Q_OBJECT

public:
    explicit notifications(QWidget *parent = nullptr);
    ~notifications();

private:
    Ui::notifications *ui;
};

#endif // NOTIFICATIONS_H
