/********************************************************************************
** Form generated from reading UI file 'add_newbook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_NEWBOOK_H
#define UI_ADD_NEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_add_newbook
{
public:
    QLabel *labelBorder1;
    QLabel *lbSignUpText;
    QLineEdit *txtNewBookTitle;
    QLabel *labelNewBookTitleText;
    QLabel *labelNewAuthorText;
    QLineEdit *txtNewAuthor;
    QLabel *labelNewIDNumText;
    QLineEdit *txtNewIDnum;
    QLabel *labelPublishDateText;
    QDateEdit *dEpublishDate;
    QLabel *labelNewGenresText;
    QComboBox *cBxGenres;
    QLabel *labelNewBookDesText;
    QSpinBox *sBNumberofBooks;
    QLabel *labelNoOfBookText;
    QPushButton *btnEntrNewBook;
    QLabel *labelNewBookDesText_2;
    QLabel *imageBox01;
    QPushButton *btnAddImage;
    QLineEdit *txtDescription;

    void setupUi(QDialog *add_newbook)
    {
        if (add_newbook->objectName().isEmpty())
            add_newbook->setObjectName(QString::fromUtf8("add_newbook"));
        add_newbook->resize(800, 600);
        labelBorder1 = new QLabel(add_newbook);
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
        lbSignUpText = new QLabel(add_newbook);
        lbSignUpText->setObjectName(QString::fromUtf8("lbSignUpText"));
        lbSignUpText->setGeometry(QRect(240, 20, 300, 30));
        lbSignUpText->setStyleSheet(QString::fromUtf8("/*Text*/\n"
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
        lbSignUpText->setAlignment(Qt::AlignCenter);
        txtNewBookTitle = new QLineEdit(add_newbook);
        txtNewBookTitle->setObjectName(QString::fromUtf8("txtNewBookTitle"));
        txtNewBookTitle->setGeometry(QRect(85, 90, 661, 31));
        txtNewBookTitle->setToolTipDuration(-1);
        txtNewBookTitle->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelNewBookTitleText = new QLabel(add_newbook);
        labelNewBookTitleText->setObjectName(QString::fromUtf8("labelNewBookTitleText"));
        labelNewBookTitleText->setGeometry(QRect(35, 90, 51, 31));
        labelNewBookTitleText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNewBookTitleText->setAlignment(Qt::AlignCenter);
        labelNewAuthorText = new QLabel(add_newbook);
        labelNewAuthorText->setObjectName(QString::fromUtf8("labelNewAuthorText"));
        labelNewAuthorText->setGeometry(QRect(35, 135, 71, 31));
        labelNewAuthorText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNewAuthorText->setAlignment(Qt::AlignCenter);
        txtNewAuthor = new QLineEdit(add_newbook);
        txtNewAuthor->setObjectName(QString::fromUtf8("txtNewAuthor"));
        txtNewAuthor->setGeometry(QRect(105, 135, 641, 31));
        txtNewAuthor->setToolTipDuration(-1);
        txtNewAuthor->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelNewIDNumText = new QLabel(add_newbook);
        labelNewIDNumText->setObjectName(QString::fromUtf8("labelNewIDNumText"));
        labelNewIDNumText->setGeometry(QRect(35, 180, 71, 31));
        labelNewIDNumText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNewIDNumText->setAlignment(Qt::AlignCenter);
        txtNewIDnum = new QLineEdit(add_newbook);
        txtNewIDnum->setObjectName(QString::fromUtf8("txtNewIDnum"));
        txtNewIDnum->setGeometry(QRect(105, 180, 311, 31));
        txtNewIDnum->setToolTipDuration(-1);
        txtNewIDnum->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelPublishDateText = new QLabel(add_newbook);
        labelPublishDateText->setObjectName(QString::fromUtf8("labelPublishDateText"));
        labelPublishDateText->setGeometry(QRect(425, 180, 121, 31));
        labelPublishDateText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelPublishDateText->setAlignment(Qt::AlignCenter);
        dEpublishDate = new QDateEdit(add_newbook);
        dEpublishDate->setObjectName(QString::fromUtf8("dEpublishDate"));
        dEpublishDate->setGeometry(QRect(544, 180, 201, 31));
        dEpublishDate->setStyleSheet(QString::fromUtf8("/*boader Date*/\n"
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
        dEpublishDate->setAlignment(Qt::AlignCenter);
        labelNewGenresText = new QLabel(add_newbook);
        labelNewGenresText->setObjectName(QString::fromUtf8("labelNewGenresText"));
        labelNewGenresText->setGeometry(QRect(35, 225, 121, 31));
        labelNewGenresText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNewGenresText->setAlignment(Qt::AlignCenter);
        cBxGenres = new QComboBox(add_newbook);
        cBxGenres->setObjectName(QString::fromUtf8("cBxGenres"));
        cBxGenres->setGeometry(QRect(155, 225, 591, 31));
        cBxGenres->setStyleSheet(QString::fromUtf8("/*boader Gender*/\n"
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
        labelNewBookDesText = new QLabel(add_newbook);
        labelNewBookDesText->setObjectName(QString::fromUtf8("labelNewBookDesText"));
        labelNewBookDesText->setGeometry(QRect(35, 270, 151, 31));
        labelNewBookDesText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNewBookDesText->setAlignment(Qt::AlignCenter);
        sBNumberofBooks = new QSpinBox(add_newbook);
        sBNumberofBooks->setObjectName(QString::fromUtf8("sBNumberofBooks"));
        sBNumberofBooks->setGeometry(QRect(165, 450, 581, 31));
        sBNumberofBooks->setStyleSheet(QString::fromUtf8("/*boader Date*/\n"
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
        sBNumberofBooks->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sBNumberofBooks->setMinimum(1);
        labelNoOfBookText = new QLabel(add_newbook);
        labelNoOfBookText->setObjectName(QString::fromUtf8("labelNoOfBookText"));
        labelNoOfBookText->setGeometry(QRect(35, 450, 121, 31));
        labelNoOfBookText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNoOfBookText->setAlignment(Qt::AlignCenter);
        btnEntrNewBook = new QPushButton(add_newbook);
        btnEntrNewBook->setObjectName(QString::fromUtf8("btnEntrNewBook"));
        btnEntrNewBook->setGeometry(QRect(655, 500, 101, 40));
        btnEntrNewBook->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
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
        labelNewBookDesText_2 = new QLabel(add_newbook);
        labelNewBookDesText_2->setObjectName(QString::fromUtf8("labelNewBookDesText_2"));
        labelNewBookDesText_2->setGeometry(QRect(470, 270, 151, 31));
        labelNewBookDesText_2->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelNewBookDesText_2->setAlignment(Qt::AlignCenter);
        imageBox01 = new QLabel(add_newbook);
        imageBox01->setObjectName(QString::fromUtf8("imageBox01"));
        imageBox01->setGeometry(QRect(610, 270, 131, 161));
        imageBox01->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        btnAddImage = new QPushButton(add_newbook);
        btnAddImage->setObjectName(QString::fromUtf8("btnAddImage"));
        btnAddImage->setGeometry(QRect(504, 310, 81, 23));
        btnAddImage->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 12px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
""));
        txtDescription = new QLineEdit(add_newbook);
        txtDescription->setObjectName(QString::fromUtf8("txtDescription"));
        txtDescription->setGeometry(QRect(180, 270, 301, 151));
        txtDescription->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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

        retranslateUi(add_newbook);

        QMetaObject::connectSlotsByName(add_newbook);
    } // setupUi

    void retranslateUi(QDialog *add_newbook)
    {
        add_newbook->setWindowTitle(QCoreApplication::translate("add_newbook", "Dialog", nullptr));
        labelBorder1->setText(QString());
        lbSignUpText->setText(QCoreApplication::translate("add_newbook", "Add New Books", nullptr));
        txtNewBookTitle->setText(QString());
        labelNewBookTitleText->setText(QCoreApplication::translate("add_newbook", "Title:", nullptr));
        labelNewAuthorText->setText(QCoreApplication::translate("add_newbook", "Author:", nullptr));
        txtNewAuthor->setText(QString());
        labelNewIDNumText->setText(QCoreApplication::translate("add_newbook", "ID No: ", nullptr));
        txtNewIDnum->setText(QString());
        labelPublishDateText->setText(QCoreApplication::translate("add_newbook", "Publish Date:", nullptr));
        labelNewGenresText->setText(QCoreApplication::translate("add_newbook", "Book Genres:", nullptr));
        labelNewBookDesText->setText(QCoreApplication::translate("add_newbook", "Book Description:", nullptr));
        labelNoOfBookText->setText(QCoreApplication::translate("add_newbook", "No of Books:", nullptr));
        btnEntrNewBook->setText(QCoreApplication::translate("add_newbook", "Enter", nullptr));
        labelNewBookDesText_2->setText(QCoreApplication::translate("add_newbook", "Cover Image:", nullptr));
        imageBox01->setText(QString());
        btnAddImage->setText(QCoreApplication::translate("add_newbook", "Add Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_newbook: public Ui_add_newbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_NEWBOOK_H
