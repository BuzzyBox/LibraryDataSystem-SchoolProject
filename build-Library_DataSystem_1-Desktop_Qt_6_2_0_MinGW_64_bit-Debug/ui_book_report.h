/********************************************************************************
** Form generated from reading UI file 'book_report.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_REPORT_H
#define UI_BOOK_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_book_report
{
public:
    QLabel *labelBookReportText;
    QPushButton *btnBRoverdue;
    QPushButton *btnBRnotAvailable;
    QPushButton *btnBRavailable;
    QLabel *labelBoarderReport1;
    QListWidget *ItemBook;
    QPushButton *pbRefresh;

    void setupUi(QDialog *book_report)
    {
        if (book_report->objectName().isEmpty())
            book_report->setObjectName(QString::fromUtf8("book_report"));
        book_report->resize(800, 600);
        labelBookReportText = new QLabel(book_report);
        labelBookReportText->setObjectName(QString::fromUtf8("labelBookReportText"));
        labelBookReportText->setGeometry(QRect(230, 20, 300, 51));
        labelBookReportText->setStyleSheet(QString::fromUtf8("/*Text*/\n"
"\n"
"position: absolute;\n"
"width: 164px;\n"
"height: 56px;\n"
"left: 112px;\n"
"top: 47px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 36px;\n"
"line-height: 56px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;"));
        labelBookReportText->setAlignment(Qt::AlignCenter);
        btnBRoverdue = new QPushButton(book_report);
        btnBRoverdue->setObjectName(QString::fromUtf8("btnBRoverdue"));
        btnBRoverdue->setGeometry(QRect(620, 520, 130, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        btnBRoverdue->setFont(font);
        btnBRoverdue->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #DAB7B7;\n"
"border-radius: 10px;"));
        btnBRnotAvailable = new QPushButton(book_report);
        btnBRnotAvailable->setObjectName(QString::fromUtf8("btnBRnotAvailable"));
        btnBRnotAvailable->setGeometry(QRect(620, 440, 130, 51));
        btnBRnotAvailable->setFont(font);
        btnBRnotAvailable->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #A7BFB1;\n"
"border-radius: 10px;"));
        btnBRavailable = new QPushButton(book_report);
        btnBRavailable->setObjectName(QString::fromUtf8("btnBRavailable"));
        btnBRavailable->setGeometry(QRect(620, 360, 130, 51));
        btnBRavailable->setFont(font);
        btnBRavailable->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #A7BFB1;\n"
"border-radius: 10px;"));
        labelBoarderReport1 = new QLabel(book_report);
        labelBoarderReport1->setObjectName(QString::fromUtf8("labelBoarderReport1"));
        labelBoarderReport1->setGeometry(QRect(15, 97, 581, 480));
        labelBoarderReport1->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labelBoarderReport1->setAlignment(Qt::AlignCenter);
        ItemBook = new QListWidget(book_report);
        ItemBook->setObjectName(QString::fromUtf8("ItemBook"));
        ItemBook->setGeometry(QRect(25, 107, 561, 460));
        ItemBook->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px; \n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;"));
        pbRefresh = new QPushButton(book_report);
        pbRefresh->setObjectName(QString::fromUtf8("pbRefresh"));
        pbRefresh->setGeometry(QRect(620, 110, 131, 41));
        pbRefresh->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 5px;\n"
"\n"
"/*Text*/\n"
"\n"
"position: absolute;\n"
"width: 305px;\n"
"height: 31px;\n"
"left: 115px;\n"
"top: 153px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));

        retranslateUi(book_report);

        QMetaObject::connectSlotsByName(book_report);
    } // setupUi

    void retranslateUi(QDialog *book_report)
    {
        book_report->setWindowTitle(QCoreApplication::translate("book_report", "Dialog", nullptr));
        labelBookReportText->setText(QCoreApplication::translate("book_report", "Book Report", nullptr));
        btnBRoverdue->setText(QCoreApplication::translate("book_report", "Overdue", nullptr));
        btnBRnotAvailable->setText(QCoreApplication::translate("book_report", "Not Available", nullptr));
        btnBRavailable->setText(QCoreApplication::translate("book_report", "Available", nullptr));
        labelBoarderReport1->setText(QString());
        pbRefresh->setText(QCoreApplication::translate("book_report", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book_report: public Ui_book_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_REPORT_H
