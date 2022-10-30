#include "basil.h"
#include "ui_basil.h"
#include "oregano.h"
#include <QSpinBox>
#include <QString>
#include <QLineEdit>

basil::basil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::basil)
{
    ui->setupUi(this);
}

basil::~basil()
{
    delete ui;
}

void basil::on_pushButton_clicked()
{
    Oregano bevarage;
    bevarage.setModal(true);
    bevarage.exec();
}


void basil::on_spinBox_valueChanged(int arg1)
{
    coca = arg1*29;
    coca1.setNum(coca);
}


void basil::on_spinBox_2_valueChanged(int arg1)
{
    honey = arg1*89;
    honey1.setNum(honey);
}


void basil::on_spinBox_3_valueChanged(int arg1)
{
    blue = arg1*139;
    blue1.setNum(blue);
}


void basil::on_spinBox_4_valueChanged(int arg1)
{
    blush = arg1*129;
    blush1.setNum(blush);
}


void basil::on_spinBox_5_valueChanged(int arg1)
{
    milk = arg1*119;
    milk1.setNum(milk);
}


void basil::on_spinBox_6_valueChanged(int arg1)
{
    boozy = arg1*119;
    boozy1.setNum(boozy);
}


void basil::on_spinBox_7_valueChanged(int arg1)
{
    straw = arg1*139;
    straw1.setNum(straw);
}


void basil::on_spinBox_8_valueChanged(int arg1)
{
    rasp = arg1*179;
    rasp1.setNum(rasp);
}


void basil::on_pushButton_3_clicked()
{
    total = coca+honey+blue+blush+milk+boozy+straw+rasp;
    total1.setNum(total);
    ui->lineEdit->setText("Your Total Order of Cold Bevarage is Taka = " +total1);
    ui->lineEdit_2->setText("  PRESS  NEXT  TO  CONTINUE");
}


void basil::on_pushButton_4_clicked()
{
    Oregano bevarage;
    bevarage.setModal(true);
    bevarage.exec();
}

