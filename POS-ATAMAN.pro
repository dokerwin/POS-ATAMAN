QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Bcrypt.cpp-master/src/bcrypt.cpp\
     Bcrypt.cpp-master/src/blowfish.cpp\
    db_connector.cpp \
    dbhandler.cpp \
    internethandler.cpp \
    login.cpp \
    main.cpp \
    mylabel.cpp \
    pos_main_window.cpp \
    user.cpp \
    usermodel.cpp

HEADERS += \
    Bcrypt.cpp-master/include/bcrypt.h\
    Bcrypt.cpp-master/src/blf.h\
    Bcrypt.cpp-master/src/openbsd.h\
    IController.h \
    db_connector.h \
    dbhandler.h \
    internethandler.h \
    login.h \
    mylabel.h \
    pos_main_window.h\
    user.h \
    usermodel.h

FORMS += \
    login.ui \
    pos_main_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


INCLUDEPATH += Bcrypt.cpp-master/include/
HEADERS += Bcrypt.cpp-master/include/bcrypt.h
