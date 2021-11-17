#include "mainwindow.h"
#include "lognin_menu.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;


    QMessageBox msgBox;
    lognin_menu login;
    login.setModal(true);

    if (login.exec() != QDialog::Accepted)
    {
        msgBox.setText("Wrong credentials. The program will stop.");
        msgBox.exec();
        a.quit();
    }
    else
    {
        //msgBox.setText("Correct Credentials. You are welcome.");
        //msgBox.exec();
        m.show();
        a.exec();

    }

    return 0;
}
