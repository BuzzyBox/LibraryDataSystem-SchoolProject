/********************************************************************************
** Form generated from reading UI file 'overdue_books.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERDUE_BOOKS_H
#define UI_OVERDUE_BOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_overdue_books
{
public:
    QLabel *labelBoarderReport2;
    QListWidget *ItemMember;
    QLabel *labelMemberIDText;
    QLabel *lbName;
    QLabel *lbMebID;
    QLabel *lbFees;
    QLabel *labelOverdueFeesText;
    QLabel *labelBookOverdueText;
    QLabel *labelMemberNameText;
    QLabel *labelBoarderReport1;
    QLabel *labelBooksBorrowedText;
    QLabel *title01;
    QLabel *date01;
    QLabel *labelBooksBorrowedText_2;
    QLabel *labelBooksBorrowedText_3;
    QLabel *labelBooksBorrowedText_4;
    QLabel *labelBooksBorrowedText_5;
    QLabel *labelBooksBorrowedText_6;
    QLabel *date02;
    QLabel *title02;
    QLabel *title03;
    QLabel *date03;

    void setupUi(QDialog *overdue_books)
    {
        if (overdue_books->objectName().isEmpty())
            overdue_books->setObjectName(QString::fromUtf8("overdue_books"));
        overdue_books->resize(800, 600);
        labelBoarderReport2 = new QLabel(overdue_books);
        labelBoarderReport2->setObjectName(QString::fromUtf8("labelBoarderReport2"));
        labelBoarderReport2->setGeometry(QRect(20, 370, 761, 210));
        labelBoarderReport2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        ItemMember = new QListWidget(overdue_books);
        ItemMember->setObjectName(QString::fromUtf8("ItemMember"));
        ItemMember->setGeometry(QRect(22, 79, 751, 270));
        ItemMember->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
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
        labelMemberIDText = new QLabel(overdue_books);
        labelMemberIDText->setObjectName(QString::fromUtf8("labelMemberIDText"));
        labelMemberIDText->setGeometry(QRect(27, 385, 88, 22));
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
        lbName = new QLabel(overdue_books);
        lbName->setObjectName(QString::fromUtf8("lbName"));
        lbName->setGeometry(QRect(337, 384, 421, 21));
        lbName->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbName->setMargin(3);
        lbMebID = new QLabel(overdue_books);
        lbMebID->setObjectName(QString::fromUtf8("lbMebID"));
        lbMebID->setGeometry(QRect(167, 384, 101, 21));
        lbMebID->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbMebID->setMargin(3);
        lbFees = new QLabel(overdue_books);
        lbFees->setObjectName(QString::fromUtf8("lbFees"));
        lbFees->setGeometry(QRect(610, 430, 141, 31));
        lbFees->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbFees->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbFees->setMargin(3);
        labelOverdueFeesText = new QLabel(overdue_books);
        labelOverdueFeesText->setObjectName(QString::fromUtf8("labelOverdueFeesText"));
        labelOverdueFeesText->setGeometry(QRect(480, 430, 121, 22));
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
        labelBookOverdueText = new QLabel(overdue_books);
        labelBookOverdueText->setObjectName(QString::fromUtf8("labelBookOverdueText"));
        labelBookOverdueText->setGeometry(QRect(240, 10, 300, 51));
        labelBookOverdueText->setStyleSheet(QString::fromUtf8("/*Text*/\n"
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
        labelBookOverdueText->setAlignment(Qt::AlignCenter);
        labelMemberNameText = new QLabel(overdue_books);
        labelMemberNameText->setObjectName(QString::fromUtf8("labelMemberNameText"));
        labelMemberNameText->setGeometry(QRect(277, 383, 51, 22));
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
        labelBoarderReport1 = new QLabel(overdue_books);
        labelBoarderReport1->setObjectName(QString::fromUtf8("labelBoarderReport1"));
        labelBoarderReport1->setGeometry(QRect(12, 69, 771, 290));
        labelBoarderReport1->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labelBoarderReport1->setAlignment(Qt::AlignCenter);
        labelBooksBorrowedText = new QLabel(overdue_books);
        labelBooksBorrowedText->setObjectName(QString::fromUtf8("labelBooksBorrowedText"));
        labelBooksBorrowedText->setGeometry(QRect(60, 430, 129, 22));
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
        title01 = new QLabel(overdue_books);
        title01->setObjectName(QString::fromUtf8("title01"));
        title01->setGeometry(QRect(180, 500, 121, 21));
        title01->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        title01->setMargin(3);
        date01 = new QLabel(overdue_books);
        date01->setObjectName(QString::fromUtf8("date01"));
        date01->setGeometry(QRect(180, 540, 121, 21));
        date01->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        date01->setMargin(3);
        labelBooksBorrowedText_2 = new QLabel(overdue_books);
        labelBooksBorrowedText_2->setObjectName(QString::fromUtf8("labelBooksBorrowedText_2"));
        labelBooksBorrowedText_2->setGeometry(QRect(170, 470, 129, 22));
        labelBooksBorrowedText_2->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelBooksBorrowedText_2->setAlignment(Qt::AlignCenter);
        labelBooksBorrowedText_3 = new QLabel(overdue_books);
        labelBooksBorrowedText_3->setObjectName(QString::fromUtf8("labelBooksBorrowedText_3"));
        labelBooksBorrowedText_3->setGeometry(QRect(340, 470, 129, 22));
        labelBooksBorrowedText_3->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelBooksBorrowedText_3->setAlignment(Qt::AlignCenter);
        labelBooksBorrowedText_4 = new QLabel(overdue_books);
        labelBooksBorrowedText_4->setObjectName(QString::fromUtf8("labelBooksBorrowedText_4"));
        labelBooksBorrowedText_4->setGeometry(QRect(500, 470, 129, 22));
        labelBooksBorrowedText_4->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelBooksBorrowedText_4->setAlignment(Qt::AlignCenter);
        labelBooksBorrowedText_5 = new QLabel(overdue_books);
        labelBooksBorrowedText_5->setObjectName(QString::fromUtf8("labelBooksBorrowedText_5"));
        labelBooksBorrowedText_5->setGeometry(QRect(40, 500, 129, 22));
        labelBooksBorrowedText_5->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelBooksBorrowedText_5->setAlignment(Qt::AlignCenter);
        labelBooksBorrowedText_6 = new QLabel(overdue_books);
        labelBooksBorrowedText_6->setObjectName(QString::fromUtf8("labelBooksBorrowedText_6"));
        labelBooksBorrowedText_6->setGeometry(QRect(30, 540, 129, 22));
        labelBooksBorrowedText_6->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelBooksBorrowedText_6->setAlignment(Qt::AlignCenter);
        date02 = new QLabel(overdue_books);
        date02->setObjectName(QString::fromUtf8("date02"));
        date02->setGeometry(QRect(350, 540, 121, 21));
        date02->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        date02->setMargin(3);
        title02 = new QLabel(overdue_books);
        title02->setObjectName(QString::fromUtf8("title02"));
        title02->setGeometry(QRect(350, 500, 121, 21));
        title02->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        title02->setMargin(3);
        title03 = new QLabel(overdue_books);
        title03->setObjectName(QString::fromUtf8("title03"));
        title03->setGeometry(QRect(510, 500, 121, 21));
        title03->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        title03->setMargin(3);
        date03 = new QLabel(overdue_books);
        date03->setObjectName(QString::fromUtf8("date03"));
        date03->setGeometry(QRect(510, 540, 121, 21));
        date03->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        date03->setMargin(3);
        labelBoarderReport2->raise();
        labelBoarderReport1->raise();
        ItemMember->raise();
        labelMemberIDText->raise();
        lbName->raise();
        lbMebID->raise();
        lbFees->raise();
        labelOverdueFeesText->raise();
        labelBookOverdueText->raise();
        labelMemberNameText->raise();
        labelBooksBorrowedText->raise();
        title01->raise();
        date01->raise();
        labelBooksBorrowedText_2->raise();
        labelBooksBorrowedText_3->raise();
        labelBooksBorrowedText_4->raise();
        labelBooksBorrowedText_5->raise();
        labelBooksBorrowedText_6->raise();
        date02->raise();
        title02->raise();
        title03->raise();
        date03->raise();

        retranslateUi(overdue_books);

        QMetaObject::connectSlotsByName(overdue_books);
    } // setupUi

    void retranslateUi(QDialog *overdue_books)
    {
        overdue_books->setWindowTitle(QCoreApplication::translate("overdue_books", "Dialog", nullptr));
        labelBoarderReport2->setText(QString());
        labelMemberIDText->setText(QCoreApplication::translate("overdue_books", "Member Id:", nullptr));
        lbName->setText(QCoreApplication::translate("overdue_books", "Member's Name", nullptr));
        lbMebID->setText(QCoreApplication::translate("overdue_books", "ID", nullptr));
        lbFees->setText(QCoreApplication::translate("overdue_books", "$", nullptr));
        labelOverdueFeesText->setText(QCoreApplication::translate("overdue_books", "Overdue Fees:", nullptr));
        labelBookOverdueText->setText(QCoreApplication::translate("overdue_books", "Overdue Books", nullptr));
        labelMemberNameText->setText(QCoreApplication::translate("overdue_books", "Name:", nullptr));
        labelBoarderReport1->setText(QString());
        labelBooksBorrowedText->setText(QCoreApplication::translate("overdue_books", "Books Borrowed:", nullptr));
        title01->setText(QCoreApplication::translate("overdue_books", "Title", nullptr));
        date01->setText(QCoreApplication::translate("overdue_books", "Date", nullptr));
        labelBooksBorrowedText_2->setText(QCoreApplication::translate("overdue_books", "Loan 01", nullptr));
        labelBooksBorrowedText_3->setText(QCoreApplication::translate("overdue_books", "Loan 02", nullptr));
        labelBooksBorrowedText_4->setText(QCoreApplication::translate("overdue_books", "Loan 03", nullptr));
        labelBooksBorrowedText_5->setText(QCoreApplication::translate("overdue_books", "Title:", nullptr));
        labelBooksBorrowedText_6->setText(QCoreApplication::translate("overdue_books", "Due Back:", nullptr));
        date02->setText(QCoreApplication::translate("overdue_books", "Date", nullptr));
        title02->setText(QCoreApplication::translate("overdue_books", "Title", nullptr));
        title03->setText(QCoreApplication::translate("overdue_books", "Title", nullptr));
        date03->setText(QCoreApplication::translate("overdue_books", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class overdue_books: public Ui_overdue_books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERDUE_BOOKS_H
