#include "mainwindowmeb.h"
#include "meb_login.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox msgBox;
    meb_login login;
    login.setModal(true);



    if(login.exec() != QDialog::Accepted)
    {
       a.quit();

    }
    else
    {
        MainWindowMeb w(login.memberID, nullptr);
        w.show();
        a.exec();

    }



    return 0;


}
