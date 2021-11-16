/********************************************************************************
** Form generated from reading UI file 'overdue_books.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
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
    QLabel *labelDateOverdueText;
    QLabel *labelBoarderReport2;
    QListWidget *ItemOverdueList;
    QLabel *labelMemberIDText;
    QLabel *labelDateDateText;
    QLabel *lbOdDue;
    QLabel *lbOddateBorrowed;
    QLabel *lbOdbooksBorrowed;
    QLabel *lbOdName;
    QLabel *lbOdmebID;
    QLabel *lbOdFees;
    QLabel *lbOdoverdue;
    QLabel *labelOverdueFeesText;
    QLabel *labelBookOverdueText;
    QLabel *labelMemberNameText;
    QLabel *labelBoarderReport1;
    QLabel *labelBooksBorrowedText;
    QLabel *labelDateBorrowedText;

    void setupUi(QDialog *overdue_books)
    {
        if (overdue_books->objectName().isEmpty())
            overdue_books->setObjectName(QString::fromUtf8("overdue_books"));
        overdue_books->resize(800, 600);
        labelDateOverdueText = new QLabel(overdue_books);
        labelDateOverdueText->setObjectName(QString::fromUtf8("labelDateOverdueText"));
        labelDateOverdueText->setGeometry(QRect(27, 543, 110, 22));
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
        labelBoarderReport2 = new QLabel(overdue_books);
        labelBoarderReport2->setObjectName(QString::fromUtf8("labelBoarderReport2"));
        labelBoarderReport2->setGeometry(QRect(15, 369, 761, 210));
        labelBoarderReport2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        ItemOverdueList = new QListWidget(overdue_books);
        ItemOverdueList->setObjectName(QString::fromUtf8("ItemOverdueList"));
        ItemOverdueList->setGeometry(QRect(22, 79, 751, 270));
        ItemOverdueList->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
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
        labelDateDateText = new QLabel(overdue_books);
        labelDateDateText->setObjectName(QString::fromUtf8("labelDateDateText"));
        labelDateDateText->setGeometry(QRect(28, 510, 76, 22));
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
        lbOdDue = new QLabel(overdue_books);
        lbOdDue->setObjectName(QString::fromUtf8("lbOdDue"));
        lbOdDue->setGeometry(QRect(167, 510, 141, 21));
        lbOdDue->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOdDue->setMargin(3);
        lbOddateBorrowed = new QLabel(overdue_books);
        lbOddateBorrowed->setObjectName(QString::fromUtf8("lbOddateBorrowed"));
        lbOddateBorrowed->setGeometry(QRect(167, 478, 141, 21));
        lbOddateBorrowed->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOddateBorrowed->setMargin(3);
        lbOdbooksBorrowed = new QLabel(overdue_books);
        lbOdbooksBorrowed->setObjectName(QString::fromUtf8("lbOdbooksBorrowed"));
        lbOdbooksBorrowed->setGeometry(QRect(167, 414, 591, 55));
        lbOdbooksBorrowed->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOdbooksBorrowed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbOdbooksBorrowed->setMargin(3);
        lbOdName = new QLabel(overdue_books);
        lbOdName->setObjectName(QString::fromUtf8("lbOdName"));
        lbOdName->setGeometry(QRect(337, 384, 421, 21));
        lbOdName->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOdName->setMargin(3);
        lbOdmebID = new QLabel(overdue_books);
        lbOdmebID->setObjectName(QString::fromUtf8("lbOdmebID"));
        lbOdmebID->setGeometry(QRect(167, 384, 101, 21));
        lbOdmebID->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOdmebID->setMargin(3);
        lbOdFees = new QLabel(overdue_books);
        lbOdFees->setObjectName(QString::fromUtf8("lbOdFees"));
        lbOdFees->setGeometry(QRect(437, 480, 321, 85));
        lbOdFees->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOdFees->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbOdFees->setMargin(3);
        lbOdoverdue = new QLabel(overdue_books);
        lbOdoverdue->setObjectName(QString::fromUtf8("lbOdoverdue"));
        lbOdoverdue->setGeometry(QRect(167, 544, 141, 21));
        lbOdoverdue->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbOdoverdue->setMargin(3);
        labelOverdueFeesText = new QLabel(overdue_books);
        labelOverdueFeesText->setObjectName(QString::fromUtf8("labelOverdueFeesText"));
        labelOverdueFeesText->setGeometry(QRect(317, 479, 121, 22));
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
        labelBooksBorrowedText->setGeometry(QRect(27, 414, 129, 22));
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
        labelDateBorrowedText = new QLabel(overdue_books);
        labelDateBorrowedText->setObjectName(QString::fromUtf8("labelDateBorrowedText"));
        labelDateBorrowedText->setGeometry(QRect(27, 477, 118, 22));
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
        labelBoarderReport2->raise();
        labelBoarderReport1->raise();
        labelDateOverdueText->raise();
        ItemOverdueList->raise();
        labelMemberIDText->raise();
        labelDateDateText->raise();
        lbOdDue->raise();
        lbOddateBorrowed->raise();
        lbOdbooksBorrowed->raise();
        lbOdName->raise();
        lbOdmebID->raise();
        lbOdFees->raise();
        lbOdoverdue->raise();
        labelOverdueFeesText->raise();
        labelBookOverdueText->raise();
        labelMemberNameText->raise();
        labelBooksBorrowedText->raise();
        labelDateBorrowedText->raise();

        retranslateUi(overdue_books);

        QMetaObject::connectSlotsByName(overdue_books);
    } // setupUi

    void retranslateUi(QDialog *overdue_books)
    {
        overdue_books->setWindowTitle(QApplication::translate("overdue_books", "Dialog", nullptr));
        labelDateOverdueText->setText(QApplication::translate("overdue_books", "Date-Overdue:", nullptr));
        labelBoarderReport2->setText(QString());
        labelMemberIDText->setText(QApplication::translate("overdue_books", "Member Id:", nullptr));
        labelDateDateText->setText(QApplication::translate("overdue_books", "Date Due:", nullptr));
        lbOdDue->setText(QApplication::translate("overdue_books", "Date Due", nullptr));
        lbOddateBorrowed->setText(QApplication::translate("overdue_books", "Borrowed", nullptr));
        lbOdbooksBorrowed->setText(QApplication::translate("overdue_books", "Books \n"
"Books \n"
"Books", nullptr));
        lbOdName->setText(QApplication::translate("overdue_books", "Member's Name", nullptr));
        lbOdmebID->setText(QApplication::translate("overdue_books", "ID", nullptr));
        lbOdFees->setText(QApplication::translate("overdue_books", "$", nullptr));
        lbOdoverdue->setText(QApplication::translate("overdue_books", "Date Overdue", nullptr));
        labelOverdueFeesText->setText(QApplication::translate("overdue_books", "Overdue Fees:", nullptr));
        labelBookOverdueText->setText(QApplication::translate("overdue_books", "Overdue Books", nullptr));
        labelMemberNameText->setText(QApplication::translate("overdue_books", "Name:", nullptr));
        labelBoarderReport1->setText(QString());
        labelBooksBorrowedText->setText(QApplication::translate("overdue_books", "Books Borrowed:", nullptr));
        labelDateBorrowedText->setText(QApplication::translate("overdue_books", "Date Borrowed:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class overdue_books: public Ui_overdue_books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERDUE_BOOKS_H
