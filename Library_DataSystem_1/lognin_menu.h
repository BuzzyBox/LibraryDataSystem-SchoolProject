#ifndef LOGNIN_MENU_H
#define LOGNIN_MENU_H

#include <QDialog>

namespace Ui {
class lognin_menu;
}

class lognin_menu : public QDialog
{
    Q_OBJECT

public:
    explicit lognin_menu(QWidget *parent = nullptr);
    ~lognin_menu();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::lognin_menu *ui;
};

#endif // LOGNIN_MENU_H
