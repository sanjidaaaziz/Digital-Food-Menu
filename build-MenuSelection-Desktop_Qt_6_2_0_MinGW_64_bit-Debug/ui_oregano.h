/********************************************************************************
** Form generated from reading UI file 'oregano.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OREGANO_H
#define UI_OREGANO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Oregano
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Oregano)
    {
        if (Oregano->objectName().isEmpty())
            Oregano->setObjectName(QString::fromUtf8("Oregano"));
        Oregano->resize(1068, 699);
        Oregano->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 23);"));
        label = new QLabel(Oregano);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 391, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bernard MT Condensed")});
        font.setPointSize(28);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Oregano);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 191, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(22);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        pushButton = new QPushButton(Oregano);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 230, 301, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Papyrus")});
        font2.setPointSize(18);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(255, 0, 0);"));
        pushButton_2 = new QPushButton(Oregano);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 330, 301, 71));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(42, 70, 255);"));
        pushButton_3 = new QPushButton(Oregano);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 650, 91, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Papyrus")});
        font3.setPointSize(9);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(Oregano);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(900, 650, 101, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Papyrus")});
        font4.setPointSize(11);
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        pushButton_5 = new QPushButton(Oregano);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 630, 111, 31));
        pushButton_5->setFont(font4);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(Oregano);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 280, 271, 321));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/ASUS/Pictures/My Photoes/mojito1 (2).png")));
        label_4 = new QLabel(Oregano);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(740, 50, 341, 281));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/ASUS/Pictures/My Photoes/coffeeeeee1 (2).png")));

        retranslateUi(Oregano);
        QObject::connect(pushButton_4, &QPushButton::clicked, Oregano, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_3, &QPushButton::clicked, Oregano, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton, &QPushButton::clicked, Oregano, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_2, &QPushButton::clicked, Oregano, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_5, &QPushButton::clicked, Oregano, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(Oregano);
    } // setupUi

    void retranslateUi(QDialog *Oregano)
    {
        Oregano->setWindowTitle(QCoreApplication::translate("Oregano", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Oregano", "Tha BoinkHunger", nullptr));
        label_2->setText(QCoreApplication::translate("Oregano", "Beverages", nullptr));
        pushButton->setText(QCoreApplication::translate("Oregano", "1. Hot", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Oregano", "2. Cold", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Oregano", "Back", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Oregano", "Quit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Oregano", "Next", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Oregano: public Ui_Oregano {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OREGANO_H
