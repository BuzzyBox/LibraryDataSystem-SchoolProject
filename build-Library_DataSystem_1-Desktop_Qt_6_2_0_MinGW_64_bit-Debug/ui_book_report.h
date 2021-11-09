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

QT_BEGIN_NAMESPACE

class Ui_book_report
{
public:
    QLabel *labelBookReportText;
    QLabel *labelBoarderReport1;
    QListWidget *ItemReport;
    QLabel *labelBoarderReport2;
    QLabel *labelMemberIDText;
    QLabel *lbBRmebID;
    QLabel *labelMemberNameText;
    QLabel *lbBRName;
    QLabel *labelBooksBorrowedText;
    QLabel *lbBRbooksBorrowed;
    QLabel *labelDateBorrowedText;
    QLabel *labelDateDateText;
    QLabel *labelDateOverdueText;
    QLabel *labelOverdueFeesText;
    QLabel *lbBRDue;
    QLabel *lbBRdateBorrowed;
    QLabel *lbBRoverdue;
    QLabel *lbBRFees;

    void setupUi(QDialog *book_report)
    {
        if (book_report->objectName().isEmpty())
            book_report->setObjectName(QString::fromUtf8("book_report"));
        book_report->resize(800, 600);
        labelBookReportText = new QLabel(book_report);
        labelBookReportText->setObjectName(QString::fromUtf8("labelBookReportText"));
        labelBookReportText->setGeometry(QRect(250, 20, 300, 51));
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
        labelBoarderReport1 = new QLabel(book_report);
        labelBoarderReport1->setObjectName(QString::fromUtf8("labelBoarderReport1"));
        labelBoarderReport1->setGeometry(QRect(10, 80, 771, 290));
        labelBoarderReport1->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labelBoarderReport1->setAlignment(Qt::AlignCenter);
        ItemReport = new QListWidget(book_report);
        ItemReport->setObjectName(QString::fromUtf8("ItemReport"));
        ItemReport->setGeometry(QRect(20, 90, 751, 270));
        ItemReport->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
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
        labelBoarderReport2 = new QLabel(book_report);
        labelBoarderReport2->setObjectName(QString::fromUtf8("labelBoarderReport2"));
        labelBoarderReport2->setGeometry(QRect(18, 380, 761, 210));
        labelBoarderReport2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labelMemberIDText = new QLabel(book_report);
        labelMemberIDText->setObjectName(QString::fromUtf8("labelMemberIDText"));
        labelMemberIDText->setGeometry(QRect(30, 396, 88, 22));
        labelMemberIDText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelMemberIDText->setAlignment(Qt::AlignCenter);
        lbBRmebID = new QLabel(book_report);
        lbBRmebID->setObjectName(QString::fromUtf8("lbBRmebID"));
        lbBRmebID->setGeometry(QRect(170, 395, 101, 21));
        lbBRmebID->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRmebID->setMargin(3);
        labelMemberNameText = new QLabel(book_report);
        labelMemberNameText->setObjectName(QString::fromUtf8("labelMemberNameText"));
        labelMemberNameText->setGeometry(QRect(280, 394, 51, 22));
        labelMemberNameText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelMemberNameText->setAlignment(Qt::AlignCenter);
        lbBRName = new QLabel(book_report);
        lbBRName->setObjectName(QString::fromUtf8("lbBRName"));
        lbBRName->setGeometry(QRect(340, 395, 421, 21));
        lbBRName->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRName->setMargin(3);
        labelBooksBorrowedText = new QLabel(book_report);
        labelBooksBorrowedText->setObjectName(QString::fromUtf8("labelBooksBorrowedText"));
        labelBooksBorrowedText->setGeometry(QRect(30, 425, 129, 22));
        labelBooksBorrowedText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelBooksBorrowedText->setAlignment(Qt::AlignCenter);
        lbBRbooksBorrowed = new QLabel(book_report);
        lbBRbooksBorrowed->setObjectName(QString::fromUtf8("lbBRbooksBorrowed"));
        lbBRbooksBorrowed->setGeometry(QRect(170, 425, 591, 55));
        lbBRbooksBorrowed->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRbooksBorrowed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbBRbooksBorrowed->setMargin(3);
        labelDateBorrowedText = new QLabel(book_report);
        labelDateBorrowedText->setObjectName(QString::fromUtf8("labelDateBorrowedText"));
        labelDateBorrowedText->setGeometry(QRect(30, 488, 118, 22));
        labelDateBorrowedText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelDateBorrowedText->setAlignment(Qt::AlignCenter);
        labelDateDateText = new QLabel(book_report);
        labelDateDateText->setObjectName(QString::fromUtf8("labelDateDateText"));
        labelDateDateText->setGeometry(QRect(31, 521, 76, 22));
        labelDateDateText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelDateDateText->setAlignment(Qt::AlignCenter);
        labelDateOverdueText = new QLabel(book_report);
        labelDateOverdueText->setObjectName(QString::fromUtf8("labelDateOverdueText"));
        labelDateOverdueText->setGeometry(QRect(30, 554, 110, 22));
        labelDateOverdueText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelDateOverdueText->setAlignment(Qt::AlignCenter);
        labelOverdueFeesText = new QLabel(book_report);
        labelOverdueFeesText->setObjectName(QString::fromUtf8("labelOverdueFeesText"));
        labelOverdueFeesText->setGeometry(QRect(320, 490, 121, 22));
        labelOverdueFeesText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        labelOverdueFeesText->setAlignment(Qt::AlignCenter);
        lbBRDue = new QLabel(book_report);
        lbBRDue->setObjectName(QString::fromUtf8("lbBRDue"));
        lbBRDue->setGeometry(QRect(170, 521, 141, 21));
        lbBRDue->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRDue->setMargin(3);
        lbBRdateBorrowed = new QLabel(book_report);
        lbBRdateBorrowed->setObjectName(QString::fromUtf8("lbBRdateBorrowed"));
        lbBRdateBorrowed->setGeometry(QRect(170, 489, 141, 21));
        lbBRdateBorrowed->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRdateBorrowed->setMargin(3);
        lbBRoverdue = new QLabel(book_report);
        lbBRoverdue->setObjectName(QString::fromUtf8("lbBRoverdue"));
        lbBRoverdue->setGeometry(QRect(170, 555, 141, 21));
        lbBRoverdue->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRoverdue->setMargin(3);
        lbBRFees = new QLabel(book_report);
        lbBRFees->setObjectName(QString::fromUtf8("lbBRFees"));
        lbBRFees->setGeometry(QRect(440, 491, 321, 85));
        lbBRFees->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
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
        lbBRFees->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbBRFees->setMargin(3);

        retranslateUi(book_report);

        QMetaObject::connectSlotsByName(book_report);
    } // setupUi

    void retranslateUi(QDialog *book_report)
    {
        book_report->setWindowTitle(QCoreApplication::translate("book_report", "Dialog", nullptr));
        labelBookReportText->setText(QCoreApplication::translate("book_report", "Book Report", nullptr));
        labelBoarderReport1->setText(QString());
        labelBoarderReport2->setText(QString());
        labelMemberIDText->setText(QCoreApplication::translate("book_report", "Member Id:", nullptr));
        lbBRmebID->setText(QCoreApplication::translate("book_report", "ID", nullptr));
        labelMemberNameText->setText(QCoreApplication::translate("book_report", "Name:", nullptr));
        lbBRName->setText(QCoreApplication::translate("book_report", "Member's Name", nullptr));
        labelBooksBorrowedText->setText(QCoreApplication::translate("book_report", "Books Borrowed:", nullptr));
        lbBRbooksBorrowed->setText(QCoreApplication::translate("book_report", "Books \n"
"Books \n"
"Books", nullptr));
        labelDateBorrowedText->setText(QCoreApplication::translate("book_report", "Date Borrowed:", nullptr));
        labelDateDateText->setText(QCoreApplication::translate("book_report", "Date Due:", nullptr));
        labelDateOverdueText->setText(QCoreApplication::translate("book_report", "Date-Overdue:", nullptr));
        labelOverdueFeesText->setText(QCoreApplication::translate("book_report", "Overdue Fees:", nullptr));
        lbBRDue->setText(QCoreApplication::translate("book_report", "Date Due", nullptr));
        lbBRdateBorrowed->setText(QCoreApplication::translate("book_report", "Borrowed", nullptr));
        lbBRoverdue->setText(QCoreApplication::translate("book_report", "Date Overdue", nullptr));
        lbBRFees->setText(QCoreApplication::translate("book_report", "$", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book_report: public Ui_book_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_REPORT_H
