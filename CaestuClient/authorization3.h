#ifndef AUTHORIZATION3_H
#define AUTHORIZATION3_H

#include <QWidget>
#include <QResizeEvent>
#include <QDebug>
#include <QFontDatabase>
#include <QDir>
#include <QPixmap>
#include <QTimer>

namespace Ui {
class Authorization3;
}

class Authorization3 : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization3(QWidget *parent = nullptr);
    ~Authorization3();

protected:
    void resizeEvent(QResizeEvent *event);

signals:
    void send_to_authorization2();
    void send_to_main_menu();

public slots:
    void get_from_authorization1();
    void get_from_authorization2();

private slots:
    void on_to_forgot_password_clicked();

    void on_to_login_clicked();

    void on_to_sign_up_clicked();

private:
    Ui::Authorization3 *ui;
};

#endif // AUTHORIZATION3_H
