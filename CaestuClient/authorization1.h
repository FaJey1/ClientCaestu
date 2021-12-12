#ifndef AUTHORIZATION1_H
#define AUTHORIZATION1_H

#include <QWidget>
#include <QResizeEvent>
#include <QDebug>
#include <QFontDatabase>
#include <QDir>
#include <QPixmap>
#include <QTimer>

namespace Ui {
class Authorization1;
}

class Authorization1 : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization1(QWidget *parent = nullptr);
    ~Authorization1();

signals:
    void send_to_authorization2();
    void send_to_authorization3();
protected:
    void resizeEvent(QResizeEvent *event);

public slots:
    void get_from_screen_saver();

private slots:
    void on_to_login_clicked();

    void on_to_registration_clicked();

private:
    Ui::Authorization1 *ui;
};

#endif // AUTHORIZATION1_H
