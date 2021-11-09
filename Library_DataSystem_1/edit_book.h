#ifndef EDIT_BOOK_H
#define EDIT_BOOK_H
#include "book.h"
#include <QString>
#include <QDialog>

namespace Ui {
class edit_book;
}

class edit_book : public QDialog
{
    Q_OBJECT

public:
    explicit edit_book(Book*&currentBook, QWidget *parent = nullptr);
    ~edit_book();

    void confirmUpdateBook();
    void loadImage();

private:
    Ui::edit_book *ui;
    Book* currentBook;
    QString imageFilePath;
};

#endif // EDIT_BOOK_H
