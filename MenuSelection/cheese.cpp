#include "cheese.h"
#include "ui_cheese.h"
#include "pizza.h"
#include <QSpinBox>
#include <QString>
#include <QLineEdit>

cheese::cheese(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cheese)
{
    ui->setupUi(this);
}

cheese::~cheese()
{
    delete ui;
}

void cheese::on_pushButton_2_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}


void cheese::on_spinBox_valueChanged(int arg1)
{
    blue = arg1*179;
    blue1.setNum(blue);
}


void cheese::on_spinBox_2_valueChanged(int arg1)
{
    choco = arg1*129;
    choco1.setNum(choco);
}


void cheese::on_spinBox_3_valueChanged(int arg1)
{
    tira = arg1*229;
    tira1.setNum(tira);
}


void cheese::on_spinBox_4_valueChanged(int arg1)
{
    brown = arg1*199;
    brown1.setNum(brown);
}


void cheese::on_spinBox_5_valueChanged(int arg1)
{
    cara = arg1*99;
    cara1.setNum(cara);
}


void cheese::on_spinBox_6_valueChanged(int arg1)
{
    sun = arg1*99;
    sun1.setNum(sun);
}


void cheese::on_spinBox_7_valueChanged(int arg1)
{
    cro = arg1*159;
    cro1.setNum(cro);
}


void cheese::on_spinBox_8_valueChanged(int arg1)
{
    pie = arg1*79;
    pie1.setNum(pie);
}


void cheese::on_pushButton_clicked()
{
    total = blue+choco+tira+brown+cara+sun+cro+pie;
    total1.setNum(total);
    ui->lineEdit->setText("Your Total Order of Dessert is Taka = " +total1);
    ui->lineEdit_2->setText(" PRESS  NEXT  TO  CONTINUE");
}


void cheese::on_pushButton_4_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}

