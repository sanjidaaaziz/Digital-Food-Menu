#include "bellpepper.h"
#include "ui_bellpepper.h"
#include "pizza.h"
#include <QSpinBox>
#include <QString>
#include <QLineEdit>

bellpepper::bellpepper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bellpepper)
{
    ui->setupUi(this);
}

bellpepper::~bellpepper()
{
    delete ui;
}




void bellpepper::on_spinBox_valueChanged(int arg1)
{
    hyde =arg1*249;
    hyde1.setNum(hyde);
}


void bellpepper::on_spinBox_2_valueChanged(int arg1)
{
    kacchi = arg1*239;
    kacchi1.setNum(kacchi);
}


void bellpepper::on_spinBox_3_valueChanged(int arg1)
{
    kebab = arg1*279;
    kebab1.setNum(kebab);
}


void bellpepper::on_spinBox_4_valueChanged(int arg1)
{
    bowl = arg1*179;
    bowl1.setNum(bowl);
}


void bellpepper::on_spinBox_5_valueChanged(int arg1)
{
    rice = arg1*149;
    rice1.setNum(rice);
}


void bellpepper::on_spinBox_6_valueChanged(int arg1)
{
    man = arg1*159;
    man1.setNum(man);
}


void bellpepper::on_spinBox_7_valueChanged(int arg1)
{
    pot = arg1*599;
    pot1.setNum(pot);
}


void bellpepper::on_spinBox_8_valueChanged(int arg1)
{
    sea = arg1*449;
    sea1.setNum(sea);
}


void bellpepper::on_spinBox_9_valueChanged(int arg1)
{
    las = arg1*589;
    las1.setNum(las);
}


void bellpepper::on_spinBox_10_valueChanged(int arg1)
{
    piz = arg1*899;
    piz1.setNum(piz);
}


void bellpepper::on_pushButton_3_clicked()
{
    total = hyde+kacchi+kebab+bowl+rice+man+pot+sea+las+piz;
    total1.setNum(total);
    ui->lineEdit->setText("Your Total Order of Main Course is Taka = " +total1);
    ui->lineEdit_2->setText("  PRESS  NEXT  TO  CONTINUE");
}

void bellpepper::on_pushButton_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}


void bellpepper::on_pushButton_4_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}

