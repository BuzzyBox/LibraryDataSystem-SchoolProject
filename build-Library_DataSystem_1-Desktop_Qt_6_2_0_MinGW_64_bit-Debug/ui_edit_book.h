/********************************************************************************
** Form generated from reading UI file 'edit_book.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_BOOK_H
#define UI_EDIT_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_edit_book
{
public:
    QLabel *labelBorder1;
    QLabel *labelEditBook;
    QLabel *labelEdGenresText;
    QLabel *labelEdAuthorText;
    QLabel *labelEdBookDesText;
    QLabel *labelEdBookTitleText;
    QLabel *labelEdNoOfBookText;
    QLabel *labelEdPublishDateText;
    QLabel *labelEdIDNumText;
    QLineEdit *txtEditA;
    QPushButton *btnSaveEditBook;
    QSpinBox *sBEditNB;
    QComboBox *cBgenre;
    QDateEdit *dEeditPD;
    QLineEdit *txtEditBT;
    QLineEdit *txtEditIDno;
    QTextEdit *txtEditBD;
    QLabel *lblAvail;
    QComboBox *cBavailability;

    void setupUi(QDialog *edit_book)
    {
        if (edit_book->objectName().isEmpty())
            edit_book->setObjectName(QString::fromUtf8("edit_book"));
        edit_book->resize(800, 600);
        labelBorder1 = new QLabel(edit_book);
        labelBorder1->setObjectName(QString::fromUtf8("labelBorder1"));
        labelBorder1->setGeometry(QRect(25, 70, 741, 481));
        labelBorder1->setStyleSheet(QString::fromUtf8("/* Rectangle 1 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 794px;\n"
"height: 491px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 8px;"));
        labelEditBook = new QLabel(edit_book);
        labelEditBook->setObjectName(QString::fromUtf8("labelEditBook"));
        labelEditBook->setGeometry(QRect(240, 20, 300, 30));
        labelEditBook->setStyleSheet(QString::fromUtf8("/*Text*/\n"
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
        labelEditBook->setAlignment(Qt::AlignCenter);
        labelEdGenresText = new QLabel(edit_book);
        labelEdGenresText->setObjectName(QString::fromUtf8("labelEdGenresText"));
        labelEdGenresText->setGeometry(QRect(35, 225, 121, 31));
        labelEdGenresText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdGenresText->setAlignment(Qt::AlignCenter);
        labelEdAuthorText = new QLabel(edit_book);
        labelEdAuthorText->setObjectName(QString::fromUtf8("labelEdAuthorText"));
        labelEdAuthorText->setGeometry(QRect(35, 135, 71, 31));
        labelEdAuthorText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdAuthorText->setAlignment(Qt::AlignCenter);
        labelEdBookDesText = new QLabel(edit_book);
        labelEdBookDesText->setObjectName(QString::fromUtf8("labelEdBookDesText"));
        labelEdBookDesText->setGeometry(QRect(35, 270, 151, 31));
        labelEdBookDesText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdBookDesText->setAlignment(Qt::AlignCenter);
        labelEdBookTitleText = new QLabel(edit_book);
        labelEdBookTitleText->setObjectName(QString::fromUtf8("labelEdBookTitleText"));
        labelEdBookTitleText->setGeometry(QRect(35, 90, 51, 31));
        labelEdBookTitleText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdBookTitleText->setAlignment(Qt::AlignCenter);
        labelEdNoOfBookText = new QLabel(edit_book);
        labelEdNoOfBookText->setObjectName(QString::fromUtf8("labelEdNoOfBookText"));
        labelEdNoOfBookText->setGeometry(QRect(40, 400, 121, 31));
        labelEdNoOfBookText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdNoOfBookText->setAlignment(Qt::AlignCenter);
        labelEdPublishDateText = new QLabel(edit_book);
        labelEdPublishDateText->setObjectName(QString::fromUtf8("labelEdPublishDateText"));
        labelEdPublishDateText->setGeometry(QRect(425, 180, 121, 31));
        labelEdPublishDateText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdPublishDateText->setAlignment(Qt::AlignCenter);
        labelEdIDNumText = new QLabel(edit_book);
        labelEdIDNumText->setObjectName(QString::fromUtf8("labelEdIDNumText"));
        labelEdIDNumText->setGeometry(QRect(35, 180, 71, 31));
        labelEdIDNumText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdIDNumText->setAlignment(Qt::AlignCenter);
        txtEditA = new QLineEdit(edit_book);
        txtEditA->setObjectName(QString::fromUtf8("txtEditA"));
        txtEditA->setGeometry(QRect(105, 135, 641, 31));
        txtEditA->setToolTipDuration(-1);
        txtEditA->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px;\n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;\n"
""));
        btnSaveEditBook = new QPushButton(edit_book);
        btnSaveEditBook->setObjectName(QString::fromUtf8("btnSaveEditBook"));
        btnSaveEditBook->setGeometry(QRect(655, 500, 101, 40));
        btnSaveEditBook->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px; \n"
"\n"
"/*Text Email*/ \n"
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
"font-size: 20px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;"));
        sBEditNB = new QSpinBox(edit_book);
        sBEditNB->setObjectName(QString::fromUtf8("sBEditNB"));
        sBEditNB->setGeometry(QRect(170, 400, 581, 31));
        sBEditNB->setStyleSheet(QString::fromUtf8("/*boader Date*/\n"
"position: absolute;\n"
"width: 156px;\n"
"height: 37px;\n"
"left: 239px;\n"
"top: 352px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
"\n"
"/*Text Date*/ \n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"color: #868181;"));
        sBEditNB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sBEditNB->setMinimum(1);
        cBgenre = new QComboBox(edit_book);
        cBgenre->setObjectName(QString::fromUtf8("cBgenre"));
        cBgenre->setGeometry(QRect(155, 225, 591, 31));
        cBgenre->setStyleSheet(QString::fromUtf8("/*boader Gender*/\n"
"position: absolute;\n"
"width: 156px;\n"
"height: 37px;\n"
"left: 239px;\n"
"top: 352px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
"\n"
"/*Text Gender*/ \n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;"));
        dEeditPD = new QDateEdit(edit_book);
        dEeditPD->setObjectName(QString::fromUtf8("dEeditPD"));
        dEeditPD->setGeometry(QRect(544, 180, 201, 31));
        dEeditPD->setStyleSheet(QString::fromUtf8("/*boader Date*/\n"
"position: absolute;\n"
"width: 156px;\n"
"height: 37px;\n"
"left: 239px;\n"
"top: 352px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
"\n"
"/*Text Date*/ \n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"color: #868181;"));
        dEeditPD->setAlignment(Qt::AlignCenter);
        txtEditBT = new QLineEdit(edit_book);
        txtEditBT->setObjectName(QString::fromUtf8("txtEditBT"));
        txtEditBT->setGeometry(QRect(85, 90, 661, 31));
        txtEditBT->setToolTipDuration(-1);
        txtEditBT->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px;\n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;\n"
""));
        txtEditIDno = new QLineEdit(edit_book);
        txtEditIDno->setObjectName(QString::fromUtf8("txtEditIDno"));
        txtEditIDno->setGeometry(QRect(105, 180, 311, 31));
        txtEditIDno->setToolTipDuration(-1);
        txtEditIDno->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px;\n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;\n"
""));
        txtEditBD = new QTextEdit(edit_book);
        txtEditBD->setObjectName(QString::fromUtf8("txtEditBD"));
        txtEditBD->setGeometry(QRect(185, 270, 561, 111));
        txtEditBD->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px;\n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;"));
        lblAvail = new QLabel(edit_book);
        lblAvail->setObjectName(QString::fromUtf8("lblAvail"));
        lblAvail->setGeometry(QRect(50, 450, 121, 31));
        lblAvail->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        lblAvail->setAlignment(Qt::AlignCenter);
        cBavailability = new QComboBox(edit_book);
        cBavailability->setObjectName(QString::fromUtf8("cBavailability"));
        cBavailability->setGeometry(QRect(160, 460, 201, 22));

        retranslateUi(edit_book);

        QMetaObject::connectSlotsByName(edit_book);
    } // setupUi

    void retranslateUi(QDialog *edit_book)
    {
        edit_book->setWindowTitle(QCoreApplication::translate("edit_book", "Dialog", nullptr));
        labelBorder1->setText(QString());
        labelEditBook->setText(QCoreApplication::translate("edit_book", "Edit Books", nullptr));
        labelEdGenresText->setText(QCoreApplication::translate("edit_book", "Book Genres:", nullptr));
        labelEdAuthorText->setText(QCoreApplication::translate("edit_book", "Author:", nullptr));
        labelEdBookDesText->setText(QCoreApplication::translate("edit_book", "Book Description:", nullptr));
        labelEdBookTitleText->setText(QCoreApplication::translate("edit_book", "Title:", nullptr));
        labelEdNoOfBookText->setText(QCoreApplication::translate("edit_book", "No of Books:", nullptr));
        labelEdPublishDateText->setText(QCoreApplication::translate("edit_book", "Publish Date:", nullptr));
        labelEdIDNumText->setText(QCoreApplication::translate("edit_book", "ID No: ", nullptr));
        txtEditA->setText(QString());
        btnSaveEditBook->setText(QCoreApplication::translate("edit_book", "Save", nullptr));
        txtEditBT->setText(QString());
        txtEditIDno->setText(QString());
        lblAvail->setText(QCoreApplication::translate("edit_book", "Availability: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_book: public Ui_edit_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_BOOK_H
