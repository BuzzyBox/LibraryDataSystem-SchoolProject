#ifndef EDIT_BOOK_H
#define EDIT_BOOK_H

#include <QDialog>

namespace Ui {
class edit_book;
}

class edit_book : public QDialog
{
    Q_OBJECT

public:
    explicit edit_book(QWidget *parent = nullptr);
    ~edit_book();

private:
    Ui::edit_book *ui;
};

#endif // EDIT_BOOK_H
