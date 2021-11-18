#ifndef ADD_NEWBOOK_H
#define ADD_NEWBOOK_H

#include <QDialog>
#include "book.h"
#include "mainwindowmeb.h"
namespace Ui {
class add_newbook;
}

class add_newbook : public QDialog
{
    Q_OBJECT

public:
    explicit add_newbook(Book*& newBook,QWidget *parent = nullptr);
    ~add_newbook();
    void confirmImage();
    void loadBook();

private:
    Ui::add_newbook *ui;
    Book**newBook;
    QString imageFilePath;
};

#endif // ADD_NEWBOOK_H
