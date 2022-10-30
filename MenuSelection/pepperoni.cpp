#include "pepperoni.h"
#include "ui_pepperoni.h"
#include "pizza.h"
#include "icecream.h"
#include <QSpinBox>
#include <QString>
#include <QLineEdit>
pepperoni::pepperoni(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pepperoni)
{
    ui->setupUi(this);
}

pepperoni::~pepperoni()
{
    delete ui;
}



void pepperoni::on_pushButton_2_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}






void pepperoni::on_spinBox_valueChanged(int arg1)
{
    fry = arg1*99;
    fry1.setNum(fry);
}


void pepperoni::on_spinBox_2_valueChanged(int arg1)
{
    ring = arg1*99;
    ring1.setNum(ring);
}


void pepperoni::on_spinBox_3_valueChanged(int arg1)
{
    won = arg1*199;
    won1.setNum(won);
}


void pepperoni::on_spinBox_4_valueChanged(int arg1)
{
    sal = arg1*399;
    sal1.setNum(sal);
}


void pepperoni::on_spinBox_5_valueChanged(int arg1)
{
    temp =arg1*219;
    temp1.setNum(temp);
}


void pepperoni::on_spinBox_6_valueChanged(int arg1)
{
    mush = arg1*199;
    mush1.setNum(mush);
}


void pepperoni::on_pushButton_clicked()
{
    total = fry+ring+won+sal+temp+mush;
    total1.setNum(total);
    ui->lineEdit->setText("Your Total Order of Appetizer is Taka = " +total1);
    ui->lineEdit_2->setText(" PRESS  NEXT  TO  CONTINUE");
}


void pepperoni::on_pushButton_4_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}

