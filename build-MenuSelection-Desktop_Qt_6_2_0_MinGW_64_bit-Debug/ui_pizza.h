/********************************************************************************
** Form generated from reading UI file 'pizza.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIZZA_H
#define UI_PIZZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pizza
{
public:
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *pizza)
    {
        if (pizza->objectName().isEmpty())
            pizza->setObjectName(QString::fromUtf8("pizza"));
        pizza->resize(1136, 711);
        pizza->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 23);"));
        label = new QLabel(pizza);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 501, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bernard MT Condensed")});
        font.setPointSize(36);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_5 = new QPushButton(pizza);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1010, 650, 80, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(9);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(pizza);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 440, 771, 52));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe Script")});
        font2.setPointSize(22);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_6 = new QPushButton(pizza);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(530, 520, 80, 67));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe Script")});
        font3.setPointSize(22);
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 97);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(pizza);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(401, 91, 341, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Papyrus")});
        font4.setPointSize(18);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(pizza);
        QObject::connect(pushButton, &QPushButton::clicked, pizza, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_4, &QPushButton::clicked, pizza, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_2, &QPushButton::clicked, pizza, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_3, &QPushButton::clicked, pizza, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_6, &QPushButton::clicked, pizza, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_5, &QPushButton::clicked, pizza, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(pizza);
    } // setupUi

    void retranslateUi(QDialog *pizza)
    {
        pizza->setWindowTitle(QCoreApplication::translate("pizza", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pizza", "The BoinkHunger", nullptr));
        pushButton_5->setText(QCoreApplication::translate("pizza", "Quit", nullptr));
        label_2->setText(QCoreApplication::translate("pizza", "Press GO to Confirm Your Whole Order", nullptr));
        pushButton_6->setText(QCoreApplication::translate("pizza", "GO", nullptr));
        pushButton->setText(QCoreApplication::translate("pizza", "Appetizers", nullptr));
        pushButton_4->setText(QCoreApplication::translate("pizza", "Main Course", nullptr));
        pushButton_3->setText(QCoreApplication::translate("pizza", "Dessert", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pizza", "Bevarages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pizza: public Ui_pizza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIZZA_H
