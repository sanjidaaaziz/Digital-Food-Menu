#ifndef MUSHROOM_H
#define MUSHROOM_H

#include <QDialog>

namespace Ui {
class mushroom;
}

class mushroom : public QDialog
{
    Q_OBJECT

public:
    explicit mushroom(QWidget *parent = nullptr);
    ~mushroom();

private:
    Ui::mushroom *ui;
};

#endif // MUSHROOM_H
