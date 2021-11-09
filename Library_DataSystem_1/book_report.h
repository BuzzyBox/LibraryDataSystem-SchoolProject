#ifndef BOOK_REPORT_H
#define BOOK_REPORT_H

#include <QDialog>

namespace Ui {
class book_report;
}

class book_report : public QDialog
{
    Q_OBJECT

public:
    explicit book_report(QWidget *parent = nullptr);
    ~book_report();

private:
    Ui::book_report *ui;
};

#endif // BOOK_REPORT_H
