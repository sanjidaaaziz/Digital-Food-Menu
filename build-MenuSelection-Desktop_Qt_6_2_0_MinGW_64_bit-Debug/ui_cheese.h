/********************************************************************************
** Form generated from reading UI file 'cheese.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEESE_H
#define UI_CHEESE_H

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

class Ui_cheese
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_18;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;

    void setupUi(QDialog *cheese)
    {
        if (cheese->objectName().isEmpty())
            cheese->setObjectName(QString::fromUtf8("cheese"));
        cheese->resize(1152, 768);
        cheese->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 23);"));
        label = new QLabel(cheese);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 331, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bernard MT Condensed")});
        font.setPointSize(28);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(cheese);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1010, 610, 111, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(cheese);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 610, 101, 31));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(cheese);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1030, 20, 91, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Papyrus")});
        font2.setPointSize(9);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(cheese);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 201, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Papyrus")});
        font3.setPointSize(18);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        lineEdit = new QLineEdit(cheese);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(330, 630, 511, 41));
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(cheese);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(390, 680, 391, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Papyrus")});
        font4.setPointSize(14);
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(cheese);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(540, 730, 80, 31));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 90);\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(cheese);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 110, 931, 471));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_8);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_16);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_17);

        widget1 = new QWidget(cheese);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(960, 110, 91, 471));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(widget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_14);

        label_15 = new QLabel(widget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_15);

        label_18 = new QLabel(widget1);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        verticalLayout_3->addWidget(label_18);

        widget2 = new QWidget(cheese);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(1060, 90, 61, 511));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(widget2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox);

        spinBox_2 = new QSpinBox(widget2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_2);

        spinBox_3 = new QSpinBox(widget2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_3);

        spinBox_4 = new QSpinBox(widget2);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_4);

        spinBox_5 = new QSpinBox(widget2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_5);

        spinBox_6 = new QSpinBox(widget2);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_6);

        spinBox_7 = new QSpinBox(widget2);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 242, 150);"));

        verticalLayout_2->addWidget(spinBox_7);

        spinBox_8 = new QSpinBox(widget2);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));
        spinBox_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 150);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(spinBox_8);


        retranslateUi(cheese);
        QObject::connect(pushButton_3, &QPushButton::clicked, cheese, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, cheese, qOverload<>(&QDialog::hide));
        QObject::connect(pushButton_4, &QPushButton::clicked, cheese, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(cheese);
    } // setupUi

    void retranslateUi(QDialog *cheese)
    {
        cheese->setWindowTitle(QCoreApplication::translate("cheese", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cheese", "The BoinkHunger", nullptr));
        pushButton->setText(QCoreApplication::translate("cheese", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cheese", "Back", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cheese", "Quit", nullptr));
        label_2->setText(QCoreApplication::translate("cheese", "Dessert Items", nullptr));
        pushButton_4->setText(QCoreApplication::translate("cheese", "Next", nullptr));
        label_3->setText(QCoreApplication::translate("cheese", "1. Blueberry Cheesecake                                                                               ", nullptr));
        label_4->setText(QCoreApplication::translate("cheese", "2. The Ultimate Chocolate Trifle                                                               ", nullptr));
        label_5->setText(QCoreApplication::translate("cheese", "3. Classic Tiramisu                                                                                             ", nullptr));
        label_6->setText(QCoreApplication::translate("cheese", "4. Brownies                                                                                                            ", nullptr));
        label_7->setText(QCoreApplication::translate("cheese", "5. Caramel Pudding                                                                                               ", nullptr));
        label_8->setText(QCoreApplication::translate("cheese", "6. Chocolate Sundae Delight                                                                         ", nullptr));
        label_16->setText(QCoreApplication::translate("cheese", "7. Croissant (3 pcs)", nullptr));
        label_17->setText(QCoreApplication::translate("cheese", "8. Mango Cream Pie", nullptr));
        label_9->setText(QCoreApplication::translate("cheese", "179/=", nullptr));
        label_10->setText(QCoreApplication::translate("cheese", "129/=", nullptr));
        label_11->setText(QCoreApplication::translate("cheese", "229/=", nullptr));
        label_12->setText(QCoreApplication::translate("cheese", "199/=", nullptr));
        label_13->setText(QCoreApplication::translate("cheese", "  99/=", nullptr));
        label_14->setText(QCoreApplication::translate("cheese", "  99/=", nullptr));
        label_15->setText(QCoreApplication::translate("cheese", "159/=", nullptr));
        label_18->setText(QCoreApplication::translate("cheese", " 79/=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cheese: public Ui_cheese {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEESE_H
