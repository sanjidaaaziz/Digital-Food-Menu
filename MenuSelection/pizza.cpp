#include "pizza.h"
#include "ui_pizza.h"
#include "pepperoni.h"
#include "cheese.h"
#include "bellpepper.h"
#include "oregano.h"
#include "icecream.h"
#include "mushroom.h"
pizza::pizza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pizza)
{
    ui->setupUi(this);
}

pizza::~pizza()
{
    delete ui;
}


void pizza::on_pushButton_clicked()
{
    pepperoni appetizers;
    appetizers.setModal(true);
    appetizers.exec();
}


void pizza::on_pushButton_3_clicked()
{
    cheese dessert;
    dessert.setModal(true);
    dessert.exec();
}


void pizza::on_pushButton_4_clicked()
{
    bellpepper maincourse;
    maincourse.setModal(true);
    maincourse.exec();
}


void pizza::on_pushButton_2_clicked()
{
    Oregano beverage;
    beverage.setModal(true);
    beverage.exec();
}




void pizza::on_pushButton_6_clicked()
{
    mushroom enjoy;
    enjoy.setModal(true);
    enjoy.exec();
}

