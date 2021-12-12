#ifndef AUTHORIZATION2_H
#define AUTHORIZATION2_H

#include <QWidget>
#include <QResizeEvent>
#include <QDebug>
#include <QFontDatabase>
#include <QDir>
#include <QPixmap>
#include <QTimer>

namespace Ui {
class Authorization2;
}

class Authorization2 : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization2(QWidget *parent = nullptr);
    ~Authorization2();

protected:
    void resizeEvent(QResizeEvent *event);

signals:
    void send_to_authorization3();

public slots:
    void on_to_sign_up_clicked();
    void on_checkBox_stateChanged(int arg1);
    void on_to_login_clicked();
    void get_from_authorization1();
    void get_from_authorization3();

private:
    Ui::Authorization2 *ui;
    int status_policity = 0;
};

#endif // AUTHORIZATION2_H
