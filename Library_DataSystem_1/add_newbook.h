#ifndef ADD_NEWBOOK_H
#define ADD_NEWBOOK_H

#include <QDialog>

namespace Ui {
class add_newbook;
}

class add_newbook : public QDialog
{
    Q_OBJECT

public:
    explicit add_newbook(QWidget *parent = nullptr);
    ~add_newbook();

private:
    Ui::add_newbook *ui;
};

#endif // ADD_NEWBOOK_H
