#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signup_menu.h"
#include "member.h"

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



private slots:
    //void on_pushButton_clicked();

private:
    QVector<Member*> itemMebs;
    Ui::MainWindow *ui;
    //signup_menu *signUp;
};
#endif // MAINWINDOW_H
