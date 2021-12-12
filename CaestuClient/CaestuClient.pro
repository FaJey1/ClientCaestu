QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutus.cpp \
    appereance.cpp \
    authorization1.cpp \
    authorization2.cpp \
    authorization3.cpp \
    calibration.cpp \
    informationpanel.cpp \
    main.cpp \
    mainmenu.cpp \
    news.cpp \
    notifications.cpp \
    screensaver.cpp \
    security.cpp \
    settingmenu.cpp \
    settings.cpp

HEADERS += \
    aboutus.h \
    appereance.h \
    authorization1.h \
    authorization2.h \
    authorization3.h \
    calibration.h \
    informationpanel.h \
    mainmenu.h \
    news.h \
    notifications.h \
    screensaver.h \
    security.h \
    settingmenu.h \
    settings.h

FORMS += \
    aboutus.ui \
    appereance.ui \
    authorization1.ui \
    authorization2.ui \
    authorization3.ui \
    calibration.ui \
    informationpanel.ui \
    mainmenu.ui \
    news.ui \
    notifications.ui \
    screensaver.ui \
    security.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
