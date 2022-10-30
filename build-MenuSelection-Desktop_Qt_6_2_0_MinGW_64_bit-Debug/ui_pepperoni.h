/********************************************************************************
** Form generated from reading UI file 'pepperoni.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEPPERONI_H
#define UI_PEPPERONI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pepperoni
{
public:
    QLabel *label;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *pepperoni)
    {
        if (pepperoni->objectName().isEmpty())
            pepperoni->setObjectName(QString::fromUtf8("pepperoni"));
        pepperoni->resize(992, 784);
        pepperoni->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 23);"));
        label = new QLabel(pepperoni);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 331, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bernard MT Condensed")});
        font.setPointSize(28);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(pepperoni);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 251, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(18);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        pushButton = new QPushButton(pepperoni);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(850, 610, 91, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Papyrus")});
        font2.setPointSize(10);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(pepperoni);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 610, 91, 31));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(pepperoni);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(870, 20, 91, 31));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(pepperoni);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(910, 90, 61, 501));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_2);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_3);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(layoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_5);

        spinBox_6 = new QSpinBox(layoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_6);

        lineEdit = new QLineEdit(pepperoni);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 640, 561, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Papyrus")});
        font3.setPointSize(20);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(pepperoni);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 690, 371, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Papyrus")});
        font4.setPointSize(14);
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(pepperoni);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 740, 91, 31));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(pepperoni);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(21, 112, 788, 451));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Papyrus")});
        font5.setPointSize(16);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_5);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_8);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        widget1 = new QWidget(pepperoni);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(812, 112, 91, 451));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(widget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_14);


        retranslateUi(pepperoni);
        QObject::connect(pushButton_2, &QPushButton::clicked, pepperoni, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_3, &QPushButton::clicked, pepperoni, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_4, &QPushButton::clicked, pepperoni, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(pepperoni);
    } // setupUi

    void retranslateUi(QDialog *pepperoni)
    {
        pepperoni->setWindowTitle(QCoreApplication::translate("pepperoni", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pepperoni", "Tha BoinkHunger", nullptr));
        label_7->setText(QCoreApplication::translate("pepperoni", "Appetizer Items", nullptr));
        pushButton->setText(QCoreApplication::translate("pepperoni", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pepperoni", "Back", nullptr));
        pushButton_3->setText(QCoreApplication::translate("pepperoni", "Quit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("pepperoni", "Next", nullptr));
        label_2->setText(QCoreApplication::translate("pepperoni", "1. French Fries                                                                                                     ", nullptr));
        label_3->setText(QCoreApplication::translate("pepperoni", "2. Onion Rings                                                                                                    ", nullptr));
        label_4->setText(QCoreApplication::translate("pepperoni", "3. Wonton (6 psc)                                                                                              ", nullptr));
        label_5->setText(QCoreApplication::translate("pepperoni", "4. Chicken-Cashew Nut Salad (Double Serve)                                   ", nullptr));
        label_8->setText(QCoreApplication::translate("pepperoni", "5. Shrimp Tempura                                                                                     ", nullptr));
        label_6->setText(QCoreApplication::translate("pepperoni", "6. Cream of Mushroom ( Chef's Special )                                                ", nullptr));
        label_9->setText(QCoreApplication::translate("pepperoni", " 99/=", nullptr));
        label_10->setText(QCoreApplication::translate("pepperoni", " 99/=", nullptr));
        label_11->setText(QCoreApplication::translate("pepperoni", "199/=", nullptr));
        label_12->setText(QCoreApplication::translate("pepperoni", "399/=", nullptr));
        label_13->setText(QCoreApplication::translate("pepperoni", "218/=", nullptr));
        label_14->setText(QCoreApplication::translate("pepperoni", "199/=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pepperoni: public Ui_pepperoni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEPPERONI_H
