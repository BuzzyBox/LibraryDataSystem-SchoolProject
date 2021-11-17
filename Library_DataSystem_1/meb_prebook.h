#ifndef MEB_PREBOOK_H
#define MEB_PREBOOK_H
#include "prebook.h"
#include<QVector>
#include <QDialog>

namespace Ui {
class meb_prebook;
}

class meb_prebook : public QDialog
{
    Q_OBJECT

public:
    explicit meb_prebook(QWidget *parent = nullptr);
    ~meb_prebook();
    void whenClicked();

private:
    Ui::meb_prebook *ui;
    QVector<preBook*> listprr;
};

#endif // MEB_PREBOOK_H
