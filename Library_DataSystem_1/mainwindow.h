#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signup_menu.h"
#include "member.h"
#include "add_newbook.h"
#include  "book.h"
#include "prebook.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //TabMenu

    void handleNewMember();
    void handMemberClicked();
    void handMemberEdited();
    void handleEditMember();
    void handleLoadMembers();
    void handleSaveMembers();
    void exitApp();
    void searchMemberDetials();

   //Book
     void newBookOption();
     void whenBookClicked();
     void whenBookSaved();
     void bookLoaded();
     void editBookOption();
     void searchBook();
     void refreshListB();
     void refreshListM();

//Loaning Books to members
     void loanOutBook();
     void preOutBook();
     void returnB01();
    void returnB02();
    void returnB03();
    void bookReport();
    void bookOverDue();



    void preBookList();

private slots:
    //void on_pushButton_clicked();

private:
    QVector<Member*> itemMebs;
    Ui::MainWindow *ui;
    //signup_menu *signUp;

     QVector<Book*> bookList;

     QVector<preBook*> preList;
};
#endif // MAINWINDOW_H
