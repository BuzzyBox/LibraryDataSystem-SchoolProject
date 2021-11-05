#ifndef EDIT_MEMEBER_H
#define EDIT_MEMEBER_H

#include <QDialog>

namespace Ui {
class edit_memeber;
}

class edit_memeber : public QDialog
{
    Q_OBJECT

public:
    explicit edit_memeber(QWidget *parent = nullptr);
    ~edit_memeber();

private:
    Ui::edit_memeber *ui;
};

#endif // EDIT_MEMEBER_H
