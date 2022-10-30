#include "icecream.h"
#include "ui_icecream.h"
#include "pizza.h"
#include <QString>

icecream::icecream(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::icecream)
{
    ui->setupUi(this);
}

icecream::~icecream()
{
    delete ui;
}




void icecream::on_pushButton_clicked()
{

    pizza menu;
    menu.setModal(true);
    menu.exec();
}


