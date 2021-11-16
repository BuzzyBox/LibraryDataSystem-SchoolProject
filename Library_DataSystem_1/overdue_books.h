#ifndef OVERDUE_BOOKS_H
#define OVERDUE_BOOKS_H

#include <QDialog>

namespace Ui {
class overdue_books;
}

class overdue_books : public QDialog
{
    Q_OBJECT

public:
    explicit overdue_books(QWidget *parent = nullptr);
    ~overdue_books();

private:
    Ui::overdue_books *ui;
};

#endif // OVERDUE_BOOKS_H
