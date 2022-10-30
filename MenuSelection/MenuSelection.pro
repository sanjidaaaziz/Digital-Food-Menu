QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basil.cpp \
    bellpepper.cpp \
    cheese.cpp \
    main.cpp \
    icecream.cpp \
    mushroom.cpp \
    oregano.cpp \
    pepperoni.cpp \
    pizza.cpp \
    tomato.cpp

HEADERS += \
    basil.h \
    bellpepper.h \
    cheese.h \
    icecream.h \
    mushroom.h \
    oregano.h \
    pepperoni.h \
    pizza.h \
    tomato.h

FORMS += \
    basil.ui \
    bellpepper.ui \
    cheese.ui \
    icecream.ui \
    mushroom.ui \
    oregano.ui \
    pepperoni.ui \
    pizza.ui \
    tomato.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
