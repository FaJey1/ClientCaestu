#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    screen_saver = new ScreenSaver;
    authorization1 = new Authorization1;
    authorization2 = new Authorization2;
    authorization3 = new Authorization3;

    information_panel = new InformationPanel;
    calibration_panel = new Calibration();
    news_panel = new News();
    settings_panel = new Settings();

    screen_saver->show();
    connect(screen_saver, &ScreenSaver::send_to_authorization1, authorization1, &Authorization1::get_from_screen_saver);
    connect(authorization1, &Authorization1::send_to_authorization2, authorization2, &Authorization2::get_from_authorization1);
    connect(authorization1, &Authorization1::send_to_authorization3, authorization3, &Authorization3::get_from_authorization1);
    connect(authorization3, &Authorization3::send_to_authorization2, authorization2, &Authorization2::get_from_authorization3);
    connect(authorization2, &Authorization2::send_to_authorization3, authorization3, &Authorization3::get_from_authorization2);
    connect(authorization3, &Authorization3::send_to_main_menu, this, &MainMenu::get_from_authorization3);

    pixmap_home.load("src\\pictures\\home.png");
    pixmap_analytics.load("src\\pictures\\analytics.png");
    pixmap_calibration.load("src\\pictures\\calibration.png");
    pixmap_news.load("src\\pictures\\news.png");
    pixmap_settings.load("src\\pictures\\settings.png");
    pixmap_exit.load("src\\pictures\\exit.png");

    pixmap_home2.load("src\\pictures\\home2.png");
    pixmap_analytics2.load("src\\pictures\\analytics2.png");
    pixmap_calibration2.load("src\\pictures\\calibration2.png");
    pixmap_news2.load("src\\pictures\\news2.png");
    pixmap_settings2.load("src\\pictures\\settings2.png");
    pixmap_exit2.load("src\\pictures\\exit2.png");

    home_icon = new QIcon(pixmap_home);
    analytics_icon = new QIcon(pixmap_analytics);
    calibration_icon = new QIcon(pixmap_calibration);
    news_icon = new QIcon(pixmap_news);
    settings_icon = new QIcon(pixmap_settings);
    exit_icon = new QIcon(pixmap_exit);

    home_icon2 = new QIcon(pixmap_home2);
    analytics_icon2 = new QIcon(pixmap_analytics2);
    calibration_icon2 = new QIcon(pixmap_calibration2);
    news_icon2 = new QIcon(pixmap_news2);
    settings_icon2 = new QIcon(pixmap_settings2);
    exit_icon2 = new QIcon(pixmap_exit2);

    this->ui->home->setIcon(*home_icon);
    this->ui->analytics->setIcon(*analytics_icon);
    this->ui->calibration->setIcon(*calibration_icon);
    this->ui->news->setIcon(*news_icon);
    this->ui->settings->setIcon(*settings_icon);
    this->ui->exit->setIcon(*exit_icon);

    this->ui->home->setIconSize(QSize(24,24));
    this->ui->analytics->setIconSize(QSize(26,21));
    this->ui->calibration->setIconSize(QSize(26,23));
    this->ui->news->setIconSize(QSize(18, 22));
    this->ui->settings->setIconSize(QSize(24,24));
    this->ui->exit->setIconSize(QSize(22,22));

    ui->home->installEventFilter(this);
    ui->analytics->installEventFilter(this);
    ui->calibration->installEventFilter(this);
    ui->news->installEventFilter(this);
    ui->settings->installEventFilter(this);
    ui->exit->installEventFilter(this);
}

MainMenu::~MainMenu()
{
    delete ui;
    delete screen_saver;
}

void MainMenu::get_from_authorization3()
{
    this->show();
}

void MainMenu::resizeEvent(QResizeEvent *event)
{
    QPixmap logo_picture;
    logo_picture.load("src\\pictures\\logo.png");
    logo_picture.scaled(ui->logo_picture->size().width(), ui->logo_picture->size().height(), Qt::IgnoreAspectRatio);
    this->ui->logo_picture->setPixmap(logo_picture);

    this->ui->frame->move(0, (event->size().height()-321)/3-10);
    this->ui->line->resize(event->size().width(), 3);
    this->ui->line->move(0,event->size().height()/10.24+20);
    this->ui->logo_picture->move(24, (event->size().height()/10.24-30)/2);


}

bool MainMenu::eventFilter(QObject *obj, QEvent *event){
    if (obj ==  ui->home) {
          QEvent::Type type = event->type();
          if  (type == QEvent::HoverLeave) {

             qDebug()<<"No curcor home";
             this->ui->home->setStyleSheet("background-color: #2f2f2f; border-width:0px; border-radius: 0px; border-width:0px; border-radius: 0px");
             this->ui->home->setIcon(*home_icon);
             this->ui->home->setIconSize(QSize(24,24));

          } else if (type == QEvent::HoverEnter) {

             qDebug()<<"Yes curcor home";
             this->ui->home->setStyleSheet("background-color: rgb(45, 61, 68); border-width:0px; border-radius: 0px");
             this->ui->home->setIcon(*home_icon2);
             this->ui->home->setIconSize(QSize(24,24));

          }
      }
    if (obj ==  ui->analytics) {
          QEvent::Type type = event->type();
          if  (type == QEvent::HoverLeave) {
             qDebug()<<"No curcor analytics";
             this->ui->analytics->setStyleSheet("background-color: #2f2f2f; border-width:0px; border-radius: 0px");
             this->ui->analytics->setIcon(*analytics_icon);
             this->ui->analytics->setIconSize(QSize(24,24));

          } else if (type == QEvent::HoverEnter) {

             qDebug()<<"Yes curcor analytics";this->ui->home->setIcon(*home_icon);
             this->ui->analytics->setStyleSheet("background-color: rgb(45, 61, 68); border-width:0px; border-radius: 0px");
             this->ui->analytics->setIcon(*analytics_icon2);
             this->ui->analytics->setIconSize(QSize(24,24));
          }
      }
    if (obj ==  ui->calibration) {
          QEvent::Type type = event->type();
          if  (type == QEvent::HoverLeave) {

             qDebug()<<"No curcor calibration";
             this->ui->calibration->setStyleSheet("background-color: #2f2f2f; border-width:0px; border-radius: 0px");
             this->ui->calibration->setIcon(*calibration_icon);
             this->ui->calibration->setIconSize(QSize(24,24));

          } else if (type == QEvent::HoverEnter) {

             qDebug()<<"Yes curcor calibration";
             this->ui->calibration->setStyleSheet("background-color: rgb(45, 61, 68); border-width:0px; border-radius: 0px");
             this->ui->calibration->setIcon(*calibration_icon2);
             this->ui->calibration->setIconSize(QSize(24,24));

          }
      }
    if (obj ==  ui->news) {
          QEvent::Type type = event->type();
          if  (type == QEvent::HoverLeave) {

             qDebug()<<"No curcor news";
             this->ui->news->setStyleSheet("background-color: #2f2f2f; border-width:0px; border-radius: 0px");
             this->ui->news->setIcon(*news_icon);
             this->ui->news->setIconSize(QSize(24,24));

          } else if (type == QEvent::HoverEnter) {

             qDebug()<<"Yes curcor news";
             this->ui->news->setStyleSheet("background-color: rgb(45, 61, 68); border-width:0px; border-radius: 0px");
             this->ui->news->setIcon(*news_icon2);
             this->ui->news->setIconSize(QSize(24,24));

          }
      }
    if (obj ==  ui->settings) {
          QEvent::Type type = event->type();
          if  (type == QEvent::HoverLeave) {

             qDebug()<<"No curcor settings";
             this->ui->settings->setStyleSheet("background-color: #2f2f2f; border-width:0px; border-radius: 0px");
             this->ui->settings->setIcon(*settings_icon);
             this->ui->settings->setIconSize(QSize(24,24));

          } else if (type == QEvent::HoverEnter) {

             qDebug()<<"Yes curcor settings";
             this->ui->settings->setStyleSheet("background-color: rgb(45, 61, 68); border-width:0px; border-radius: 0px");
             this->ui->settings->setIcon(*settings_icon2);
             this->ui->settings->setIconSize(QSize(24,24));

          }
      }
    if (obj ==  ui->exit) {
          QEvent::Type type = event->type();
          if  (type == QEvent::HoverLeave) {

             qDebug()<<"No curcor exit";
             this->ui->exit->setStyleSheet("background-color: #2f2f2f; border-width:0px; border-radius: 0px");
             this->ui->exit->setIcon(*exit_icon);
             this->ui->exit->setIconSize(QSize(24,24));

          } else if (type == QEvent::HoverEnter) {

             qDebug()<<"Yes curcor exit";
             this->ui->exit->setStyleSheet("background-color: rgb(45, 61, 68); border-width:0px; border-radius: 0px");
             this->ui->exit->setIcon(*exit_icon2);
             this->ui->exit->setIconSize(QSize(24,24));

          }
      }
      return QWidget::eventFilter(obj, event);
}

void MainMenu::on_exit_clicked()
{
    this->hide();
    authorization1->show();
}


void MainMenu::on_analytics_clicked()
{

}


void MainMenu::on_calibration_clicked()
{

}


void MainMenu::on_news_clicked()
{

}


void MainMenu::on_settings_clicked()
{

}

