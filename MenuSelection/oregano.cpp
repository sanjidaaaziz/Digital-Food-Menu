#include "oregano.h"
#include "ui_oregano.h"
#include "pizza.h"
#include "tomato.h"
#include "basil.h"

Oregano::Oregano(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oregano)
{
    ui->setupUi(this);
}

Oregano::~Oregano()
{
    delete ui;
}

void Oregano::on_pushButton_3_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}


void Oregano::on_pushButton_clicked()
{
    tomato hot;
    hot.setModal(true);
    hot.exec();
}


void Oregano::on_pushButton_2_clicked()
{
    basil cold;
    cold.setModal(true);
    cold.exec();
}


void Oregano::on_pushButton_5_clicked()
{
    pizza menu;
    menu.setModal(true);
    menu.exec();
}

