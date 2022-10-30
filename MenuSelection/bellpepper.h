#ifndef BELLPEPPER_H
#define BELLPEPPER_H

#include <QDialog>

namespace Ui {
class bellpepper;
}

class bellpepper : public QDialog
{
    Q_OBJECT

public:
    explicit bellpepper(QWidget *parent = nullptr);
    ~bellpepper();
    int hyde=0, kacchi=0, kebab=0, bowl=0, rice=0, man=0, pot=0, sea=0, las=0, piz=0, total=0;
    QString hyde1, kacchi1, kebab1, bowl1, rice1, man1, pot1, sea1, las1, piz1, total1;

private slots:
    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_spinBox_9_valueChanged(int arg1);

    void on_spinBox_10_valueChanged(int arg1);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::bellpepper *ui;
};

#endif // BELLPEPPER_H
