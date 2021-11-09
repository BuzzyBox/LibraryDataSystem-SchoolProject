#ifndef EDIT_MEMEBER_H
#define EDIT_MEMEBER_H

#include <QDialog>
#include "member.h"

namespace Ui {
class edit_memeber;
}

class edit_memeber : public QDialog
{
    Q_OBJECT

public:
    explicit edit_memeber(Member* currentMeb, QWidget *parent = nullptr);
    ~edit_memeber();

    void comfirmMebUpdate();
    void editGender();



private:
    Ui::edit_memeber *ui;
    Member* currentMeb;
    QStringList list;

};

#endif // EDIT_MEMEBER_H
