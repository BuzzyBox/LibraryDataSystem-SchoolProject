#ifndef MAINWINDOWMEB_H
#define MAINWINDOWMEB_H

#include <QMainWindow>
#include "book.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowMeb; }
QT_END_NAMESPACE

class MainWindowMeb : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowMeb(QWidget *parent = nullptr);
    ~MainWindowMeb();

    void exitApp();
    void getBookData();
    void whenBookClicked();


private:
    Ui::MainWindowMeb *ui;
    QVector<Book*> bookList;
  //  QString imageFilePath;

};
#endif // MAINWINDOWMEB_H
