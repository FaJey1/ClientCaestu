#ifndef SCREENSAVER_H
#define SCREENSAVER_H

#include <QWidget>
#include <QResizeEvent>
#include <QDebug>
#include <QFontDatabase>
#include <QDir>
#include <QPixmap>
#include <QTimer>

namespace Ui {
class ScreenSaver;
}

class ScreenSaver : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenSaver(QWidget *parent = nullptr);
    ~ScreenSaver();

signals:
    void send_to_authorization1();

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void nextWindow();

private:
    Ui::ScreenSaver *ui;
};

#endif // SCREENSAVER_H
