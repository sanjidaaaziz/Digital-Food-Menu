#ifndef PEPPERONI_H
#define PEPPERONI_H

#include <QDialog>

namespace Ui {
class pepperoni;
}

class pepperoni : public QDialog
{
    Q_OBJECT

public:
    explicit pepperoni(QWidget *parent = nullptr);
    ~pepperoni();
    int fry=0, ring=0, won=0, sal=0, temp=0, mush=0, total=0;
    QString fry1, ring1, won1, sal1, temp1, mush1, total1;


private slots:
    void on_pushButton_2_clicked();



    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::pepperoni *ui;
};

#endif // PEPPERONI_H
