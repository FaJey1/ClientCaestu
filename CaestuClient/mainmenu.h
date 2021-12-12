#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <screensaver.h>
#include <authorization1.h>
#include <authorization2.h>
#include <authorization3.h>
#include "informationpanel.h"
#include "calibration.h"
#include "news.h"
#include "settings.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

public slots:
    void get_from_authorization3();

protected:
    void resizeEvent(QResizeEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);

private slots:
    void on_exit_clicked();

    void on_analytics_clicked();

    void on_calibration_clicked();

    void on_news_clicked();

    void on_settings_clicked();

private:
    Ui::MainMenu *ui;
    ScreenSaver *screen_saver;
    Authorization1 *authorization1;
    Authorization2 *authorization2;
    Authorization3 *authorization3;

    InformationPanel *information_panel;
    Calibration *calibration_panel;
    News *news_panel;
    Settings *settings_panel;

    QPixmap pixmap_home, pixmap_analytics, pixmap_calibration, pixmap_news, pixmap_settings, pixmap_exit;
    QPixmap pixmap_home2, pixmap_analytics2, pixmap_calibration2, pixmap_news2, pixmap_settings2, pixmap_exit2;
    QIcon *home_icon, *analytics_icon, *calibration_icon, *news_icon, *settings_icon, *exit_icon;
    QIcon *home_icon2, *analytics_icon2, *calibration_icon2, *news_icon2, *settings_icon2, *exit_icon2;
};
#endif // MAINMENU_H
