/********************************************************************************
** Form generated from reading UI file 'mushroom.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSHROOM_H
#define UI_MUSHROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mushroom
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *mushroom)
    {
        if (mushroom->objectName().isEmpty())
            mushroom->setObjectName(QString::fromUtf8("mushroom"));
        mushroom->resize(1158, 800);
        mushroom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 23);"));
        label = new QLabel(mushroom);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 20, 411, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bernard MT Condensed")});
        font.setPointSize(36);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(mushroom);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 90, 481, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(24);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label_3 = new QLabel(mushroom);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 680, 491, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Papyrus")});
        font2.setPointSize(20);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        pushButton = new QPushButton(mushroom);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 740, 71, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Papyrus")});
        font3.setPointSize(9);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(mushroom);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 150, 561, 521));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/ASUS/Downloads/Thank.jpg")));

        retranslateUi(mushroom);
        QObject::connect(pushButton, &QPushButton::clicked, mushroom, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(mushroom);
    } // setupUi

    void retranslateUi(QDialog *mushroom)
    {
        mushroom->setWindowTitle(QCoreApplication::translate("mushroom", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("mushroom", "The BoinkHunger", nullptr));
        label_2->setText(QCoreApplication::translate("mushroom", " Your Order is Confirmed!!!", nullptr));
        label_3->setText(QCoreApplication::translate("mushroom", " ENJOY  YOUR  MEAL  :D", nullptr));
        pushButton->setText(QCoreApplication::translate("mushroom", "OK", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mushroom: public Ui_mushroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSHROOM_H
