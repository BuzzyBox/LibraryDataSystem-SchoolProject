#ifndef WELCOME_SCREEN_H
#define WELCOME_SCREEN_H

#include <QDialog>

namespace Ui {
class welcome_screen;
}

class welcome_screen : public QDialog
{
    Q_OBJECT

public:
    explicit welcome_screen(QWidget *parent = nullptr);
    ~welcome_screen();

private:
    Ui::welcome_screen *ui;
};

#endif // WELCOME_SCREEN_H
