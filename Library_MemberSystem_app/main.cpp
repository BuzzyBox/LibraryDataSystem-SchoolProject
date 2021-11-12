#include "mainwindowmeb.h"
#include "meb_login.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowMeb w;
    w.show();


    QMessageBox msgBox;
    meb_login login;
    login.setModal(true);

    if(login.exec() != QDialog::Accepted)
    {
       a.quit();

    }
    else
    {
        a.exec();

    }



    return 0;


}
