#ifndef MAINWINDOWMEB_H
#define MAINWINDOWMEB_H

#include <QMainWindow>
#include "member.h"
#include "meb_login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowMeb; }
QT_END_NAMESPACE

class MainWindowMeb : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowMeb(QString memberID, QWidget *parent = nullptr);
    ~MainWindowMeb();

    void exitApp();
    void getBookData();
    void whenBookClicked();
    void loadMemberDetails();


private slots:
    void on_bntInfoClick_clicked();

private:
    Ui::MainWindowMeb *ui;
    QVector<Member*>itemMebs;
    QString memberID;

};
#endif // MAINWINDOWMEB_H
