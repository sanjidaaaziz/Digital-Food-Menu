#ifndef CHEESE_H
#define CHEESE_H

#include <QDialog>

namespace Ui {
class cheese;
}

class cheese : public QDialog
{
    Q_OBJECT

public:
    explicit cheese(QWidget *parent = nullptr);
    ~cheese();
    int blue=0, choco=0, tira=0, brown=0, cara=0, sun=0, cro=0, pie=0, total=0;
    QString blue1, choco1, tira1, brown1, cara1, sun1, cro1, pie1, total1;

private slots:
    void on_pushButton_2_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::cheese *ui;
};

#endif // CHEESE_H
