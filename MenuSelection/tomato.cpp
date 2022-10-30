#include "tomato.h"
#include "ui_tomato.h"
#include "oregano.h"
#include <QSpinBox>
#include <QString>
#include <QLineEdit>

tomato::tomato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tomato)
{
    ui->setupUi(this);
}

tomato::~tomato()
{
    delete ui;
}

void tomato::on_pushButton_2_clicked()
{
    Oregano bevarage;
    bevarage.setModal(true);
    bevarage.exec();
}


void tomato::on_spinBox_valueChanged(int arg1)
{
    coffee = arg1*89;
    coffee1.setNum(coffee);
}


void tomato::on_spinBox_2_valueChanged(int arg1)
{
    presso = arg1*99;
    presso1.setNum(presso);
}


void tomato::on_spinBox_3_valueChanged(int arg1)
{
    cappu = arg1*179;
    cappu1.setNum(cappu);
}


void tomato::on_spinBox_4_valueChanged(int arg1)
{
    latte = arg1*149;
    latte1.setNum(latte);
}


void tomato::on_spinBox_5_valueChanged(int arg1)
{
    cano = arg1*119;
    cano1.setNum(cano);
}


void tomato::on_spinBox_6_valueChanged(int arg1)
{
    mocha = arg1*129;
    mocha1.setNum(mocha);
}


void tomato::on_spinBox_7_valueChanged(int arg1)
{
    choco = arg1*109;
    choco1.setNum(choco);
}


void tomato::on_spinBox_8_valueChanged(int arg1)
{
    scot = arg1*149;
    scot1.setNum(scot);
}


void tomato::on_pushButton_clicked()
{
    total = coffee+presso+cappu+latte+cano+mocha+choco+scot;
    total1.setNum(total);
    ui->lineEdit->setText("Your Total Order of Hot Bevarage is Taka = " +total1);
    ui->lineEdit_2->setText("  PRESS  NEXT  TO  CONTINUE");
}


void tomato::on_pushButton_4_clicked()
{
    Oregano bevarage;
    bevarage.setModal(true);
    bevarage.exec();
}

