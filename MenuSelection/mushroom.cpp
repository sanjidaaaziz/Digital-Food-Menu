#include "mushroom.h"
#include "ui_mushroom.h"

mushroom::mushroom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mushroom)
{
    ui->setupUi(this);
}

mushroom::~mushroom()
{
    delete ui;
}
