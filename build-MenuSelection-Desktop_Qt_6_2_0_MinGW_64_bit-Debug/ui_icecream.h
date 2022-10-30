/********************************************************************************
** Form generated from reading UI file 'icecream.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICECREAM_H
#define UI_ICECREAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_icecream
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *icecream)
    {
        if (icecream->objectName().isEmpty())
            icecream->setObjectName(QString::fromUtf8("icecream"));
        icecream->resize(835, 616);
        icecream->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 23);"));
        centralwidget = new QWidget(icecream);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 691, 72));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bernard MT Condensed")});
        font.setPointSize(36);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 460, 161, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(20);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 97);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 530, 101, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Papyrus")});
        font2.setPointSize(10);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 97);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 130, 491, 301));
        label_2->setPixmap(QPixmap(QString::fromUtf8("C:/Users/ASUS/Pictures/My Photoes/Vintage style restaurant logo[68].png")));
        icecream->setCentralWidget(centralwidget);
        menubar = new QMenuBar(icecream);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 835, 25));
        icecream->setMenuBar(menubar);
        statusbar = new QStatusBar(icecream);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        icecream->setStatusBar(statusbar);

        retranslateUi(icecream);
        QObject::connect(pushButton_2, &QPushButton::clicked, icecream, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton, &QPushButton::clicked, icecream, qOverload<>(&QMainWindow::hide));

        QMetaObject::connectSlotsByName(icecream);
    } // setupUi

    void retranslateUi(QMainWindow *icecream)
    {
        icecream->setWindowTitle(QCoreApplication::translate("icecream", "icecream", nullptr));
        label->setText(QCoreApplication::translate("icecream", "Welcome to The BoinkHunger", nullptr));
        pushButton->setText(QCoreApplication::translate("icecream", "Proceed", nullptr));
        pushButton_2->setText(QCoreApplication::translate("icecream", "Close", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class icecream: public Ui_icecream {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICECREAM_H
