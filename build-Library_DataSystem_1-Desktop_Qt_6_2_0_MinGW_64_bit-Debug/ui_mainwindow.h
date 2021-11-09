/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Member;
    QAction *actionEdit_Existing_Member;
    QAction *actionLoad_Members;
    QAction *actionSave_Members;
    QAction *actionExit;
    QAction *actionAdd_Book;
    QAction *actionEdit_Existing_Book;
    QAction *actionLoad_Books;
    QAction *actionSave_Books;
    QWidget *centralwidget;
    QLabel *labBorder1;
    QLineEdit *lEditSearchBook1;
    QListWidget *ItemBook;
    QPushButton *btnSearchBook;
    QLabel *labBorder3;
    QLabel *labBorder2;
    QLabel *labBookCover;
    QLabel *labelBookTitleText;
    QLabel *labelAuthorText;
    QLabel *labelPublishText;
    QLabel *labelIDnoText;
    QLabel *labelAvailabilityText;
    QLabel *lbTitle;
    QLabel *lbAuthor;
    QLabel *lbDate;
    QLabel *lbIDNum;
    QLabel *lbAvailability;
    QLabel *labBorder5;
    QPushButton *btnSearchMember;
    QLabel *labBorder6;
    QLabel *labBorder4;
    QLineEdit *lEditSearchMember;
    QListWidget *ItemMember;
    QLabel *labelMemberEmailText;
    QLabel *labelMemberPhoneText;
    QLabel *labelUserNameText;
    QLabel *labelMemberNameTxt;
    QLabel *lableMemberAddressText;
    QLabel *labelFeesText;
    QLabel *lbUName;
    QLabel *lbmebName;
    QLabel *lbmebBirthdate;
    QLabel *lbmebEmail;
    QLabel *lbmebPhone;
    QLabel *lbmebFees;
    QLabel *lbGen;
    QLabel *labelMemberGenderText;
    QLabel *lableBritdayDateText_2;
    QLabel *lbmebAdd;
    QLabel *lbGenreTxt;
    QLabel *labelGenre;
    QPushButton *pbRefresh;
    QPushButton *pushButton;
    QPushButton *pbRefreshM;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuBooks;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1600, 600);
        actionNew_Member = new QAction(MainWindow);
        actionNew_Member->setObjectName(QString::fromUtf8("actionNew_Member"));
        actionEdit_Existing_Member = new QAction(MainWindow);
        actionEdit_Existing_Member->setObjectName(QString::fromUtf8("actionEdit_Existing_Member"));
        actionLoad_Members = new QAction(MainWindow);
        actionLoad_Members->setObjectName(QString::fromUtf8("actionLoad_Members"));
        actionSave_Members = new QAction(MainWindow);
        actionSave_Members->setObjectName(QString::fromUtf8("actionSave_Members"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAdd_Book = new QAction(MainWindow);
        actionAdd_Book->setObjectName(QString::fromUtf8("actionAdd_Book"));
        actionEdit_Existing_Book = new QAction(MainWindow);
        actionEdit_Existing_Book->setObjectName(QString::fromUtf8("actionEdit_Existing_Book"));
        actionLoad_Books = new QAction(MainWindow);
        actionLoad_Books->setObjectName(QString::fromUtf8("actionLoad_Books"));
        actionSave_Books = new QAction(MainWindow);
        actionSave_Books->setObjectName(QString::fromUtf8("actionSave_Books"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labBorder1 = new QLabel(centralwidget);
        labBorder1->setObjectName(QString::fromUtf8("labBorder1"));
        labBorder1->setGeometry(QRect(10, 20, 500, 41));
        labBorder1->setStyleSheet(QString::fromUtf8("/*Border 3*/\n"
"\n"
"position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        lEditSearchBook1 = new QLineEdit(centralwidget);
        lEditSearchBook1->setObjectName(QString::fromUtf8("lEditSearchBook1"));
        lEditSearchBook1->setGeometry(QRect(20, 30, 480, 21));
        lEditSearchBook1->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px;\n"
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
        ItemBook = new QListWidget(centralwidget);
        ItemBook->setObjectName(QString::fromUtf8("ItemBook"));
        ItemBook->setGeometry(QRect(21, 79, 480, 250));
        ItemBook->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px;"));
        btnSearchBook = new QPushButton(centralwidget);
        btnSearchBook->setObjectName(QString::fromUtf8("btnSearchBook"));
        btnSearchBook->setGeometry(QRect(550, 20, 101, 40));
        btnSearchBook->setStyleSheet(QString::fromUtf8("/*Search Book Button*/\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #C4C4C4;\n"
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
        labBorder3 = new QLabel(centralwidget);
        labBorder3->setObjectName(QString::fromUtf8("labBorder3"));
        labBorder3->setGeometry(QRect(10, 350, 661, 191));
        labBorder3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labBorder2 = new QLabel(centralwidget);
        labBorder2->setObjectName(QString::fromUtf8("labBorder2"));
        labBorder2->setGeometry(QRect(10, 70, 500, 270));
        labBorder2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labBorder2->setAlignment(Qt::AlignCenter);
        labBookCover = new QLabel(centralwidget);
        labBookCover->setObjectName(QString::fromUtf8("labBookCover"));
        labBookCover->setGeometry(QRect(20, 360, 121, 171));
        labBookCover->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        labBookCover->setFrameShape(QFrame::NoFrame);
        labBookCover->setFrameShadow(QFrame::Plain);
        labelBookTitleText = new QLabel(centralwidget);
        labelBookTitleText->setObjectName(QString::fromUtf8("labelBookTitleText"));
        labelBookTitleText->setGeometry(QRect(158, 361, 51, 22));
        labelBookTitleText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelBookTitleText->setAlignment(Qt::AlignCenter);
        labelAuthorText = new QLabel(centralwidget);
        labelAuthorText->setObjectName(QString::fromUtf8("labelAuthorText"));
        labelAuthorText->setGeometry(QRect(157, 396, 71, 22));
        labelAuthorText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelAuthorText->setAlignment(Qt::AlignCenter);
        labelPublishText = new QLabel(centralwidget);
        labelPublishText->setObjectName(QString::fromUtf8("labelPublishText"));
        labelPublishText->setGeometry(QRect(159, 431, 111, 22));
        labelPublishText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelPublishText->setAlignment(Qt::AlignCenter);
        labelIDnoText = new QLabel(centralwidget);
        labelIDnoText->setObjectName(QString::fromUtf8("labelIDnoText"));
        labelIDnoText->setGeometry(QRect(159, 466, 101, 22));
        labelIDnoText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelIDnoText->setAlignment(Qt::AlignCenter);
        labelAvailabilityText = new QLabel(centralwidget);
        labelAvailabilityText->setObjectName(QString::fromUtf8("labelAvailabilityText"));
        labelAvailabilityText->setGeometry(QRect(164, 501, 91, 22));
        labelAvailabilityText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelAvailabilityText->setAlignment(Qt::AlignCenter);
        lbTitle = new QLabel(centralwidget);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(220, 362, 430, 21));
        lbTitle->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbTitle->setMargin(3);
        lbAuthor = new QLabel(centralwidget);
        lbAuthor->setObjectName(QString::fromUtf8("lbAuthor"));
        lbAuthor->setGeometry(QRect(239, 396, 411, 21));
        lbAuthor->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbAuthor->setMargin(3);
        lbDate = new QLabel(centralwidget);
        lbDate->setObjectName(QString::fromUtf8("lbDate"));
        lbDate->setGeometry(QRect(279, 431, 371, 21));
        lbDate->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbDate->setMargin(3);
        lbIDNum = new QLabel(centralwidget);
        lbIDNum->setObjectName(QString::fromUtf8("lbIDNum"));
        lbIDNum->setGeometry(QRect(269, 466, 381, 21));
        lbIDNum->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbIDNum->setMargin(3);
        lbAvailability = new QLabel(centralwidget);
        lbAvailability->setObjectName(QString::fromUtf8("lbAvailability"));
        lbAvailability->setGeometry(QRect(269, 501, 111, 21));
        lbAvailability->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbAvailability->setWordWrap(false);
        lbAvailability->setMargin(3);
        lbAvailability->setIndent(-1);
        labBorder5 = new QLabel(centralwidget);
        labBorder5->setObjectName(QString::fromUtf8("labBorder5"));
        labBorder5->setGeometry(QRect(888, 70, 500, 270));
        labBorder5->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labBorder5->setAlignment(Qt::AlignCenter);
        btnSearchMember = new QPushButton(centralwidget);
        btnSearchMember->setObjectName(QString::fromUtf8("btnSearchMember"));
        btnSearchMember->setGeometry(QRect(1428, 20, 101, 40));
        btnSearchMember->setStyleSheet(QString::fromUtf8("/*Search Book Button*/\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #C4C4C4;\n"
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
        labBorder6 = new QLabel(centralwidget);
        labBorder6->setObjectName(QString::fromUtf8("labBorder6"));
        labBorder6->setGeometry(QRect(888, 350, 661, 191));
        labBorder6->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labBorder4 = new QLabel(centralwidget);
        labBorder4->setObjectName(QString::fromUtf8("labBorder4"));
        labBorder4->setGeometry(QRect(888, 20, 500, 41));
        labBorder4->setStyleSheet(QString::fromUtf8("/*Border 3*/\n"
"\n"
"position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        lEditSearchMember = new QLineEdit(centralwidget);
        lEditSearchMember->setObjectName(QString::fromUtf8("lEditSearchMember"));
        lEditSearchMember->setGeometry(QRect(898, 30, 480, 21));
        lEditSearchMember->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 560px;\n"
"height: 45px;\n"
"left: 53px;\n"
"top: 142px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px;\n"
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
        ItemMember = new QListWidget(centralwidget);
        ItemMember->setObjectName(QString::fromUtf8("ItemMember"));
        ItemMember->setGeometry(QRect(898, 79, 480, 250));
        ItemMember->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px;"));
        labelMemberEmailText = new QLabel(centralwidget);
        labelMemberEmailText->setObjectName(QString::fromUtf8("labelMemberEmailText"));
        labelMemberEmailText->setGeometry(QRect(900, 465, 61, 22));
        labelMemberEmailText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelMemberEmailText->setAlignment(Qt::AlignCenter);
        labelMemberPhoneText = new QLabel(centralwidget);
        labelMemberPhoneText->setObjectName(QString::fromUtf8("labelMemberPhoneText"));
        labelMemberPhoneText->setGeometry(QRect(903, 498, 61, 22));
        labelMemberPhoneText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelMemberPhoneText->setAlignment(Qt::AlignCenter);
        labelUserNameText = new QLabel(centralwidget);
        labelUserNameText->setObjectName(QString::fromUtf8("labelUserNameText"));
        labelUserNameText->setGeometry(QRect(894, 400, 101, 22));
        labelUserNameText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelUserNameText->setAlignment(Qt::AlignCenter);
        labelMemberNameTxt = new QLabel(centralwidget);
        labelMemberNameTxt->setObjectName(QString::fromUtf8("labelMemberNameTxt"));
        labelMemberNameTxt->setGeometry(QRect(899, 368, 61, 22));
        labelMemberNameTxt->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelMemberNameTxt->setAlignment(Qt::AlignCenter);
        lableMemberAddressText = new QLabel(centralwidget);
        lableMemberAddressText->setObjectName(QString::fromUtf8("lableMemberAddressText"));
        lableMemberAddressText->setGeometry(QRect(903, 431, 71, 22));
        lableMemberAddressText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        lableMemberAddressText->setAlignment(Qt::AlignCenter);
        labelFeesText = new QLabel(centralwidget);
        labelFeesText->setObjectName(QString::fromUtf8("labelFeesText"));
        labelFeesText->setGeometry(QRect(1294, 483, 91, 22));
        labelFeesText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelFeesText->setAlignment(Qt::AlignCenter);
        lbUName = new QLabel(centralwidget);
        lbUName->setObjectName(QString::fromUtf8("lbUName"));
        lbUName->setGeometry(QRect(1000, 400, 281, 21));
        lbUName->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbUName->setMargin(3);
        lbmebName = new QLabel(centralwidget);
        lbmebName->setObjectName(QString::fromUtf8("lbmebName"));
        lbmebName->setGeometry(QRect(970, 368, 311, 21));
        lbmebName->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebName->setMargin(3);
        lbmebBirthdate = new QLabel(centralwidget);
        lbmebBirthdate->setObjectName(QString::fromUtf8("lbmebBirthdate"));
        lbmebBirthdate->setGeometry(QRect(1390, 430, 141, 21));
        lbmebBirthdate->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebBirthdate->setMargin(3);
        lbmebEmail = new QLabel(centralwidget);
        lbmebEmail->setObjectName(QString::fromUtf8("lbmebEmail"));
        lbmebEmail->setGeometry(QRect(970, 465, 311, 21));
        lbmebEmail->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebEmail->setMargin(3);
        lbmebPhone = new QLabel(centralwidget);
        lbmebPhone->setObjectName(QString::fromUtf8("lbmebPhone"));
        lbmebPhone->setGeometry(QRect(970, 498, 311, 21));
        lbmebPhone->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebPhone->setMargin(3);
        lbmebFees = new QLabel(centralwidget);
        lbmebFees->setObjectName(QString::fromUtf8("lbmebFees"));
        lbmebFees->setGeometry(QRect(1390, 482, 141, 41));
        lbmebFees->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebFees->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbmebFees->setMargin(3);
        lbGen = new QLabel(centralwidget);
        lbGen->setObjectName(QString::fromUtf8("lbGen"));
        lbGen->setGeometry(QRect(1390, 370, 141, 21));
        lbGen->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbGen->setMargin(3);
        labelMemberGenderText = new QLabel(centralwidget);
        labelMemberGenderText->setObjectName(QString::fromUtf8("labelMemberGenderText"));
        labelMemberGenderText->setGeometry(QRect(1300, 370, 71, 22));
        labelMemberGenderText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelMemberGenderText->setAlignment(Qt::AlignCenter);
        lableBritdayDateText_2 = new QLabel(centralwidget);
        lableBritdayDateText_2->setObjectName(QString::fromUtf8("lableBritdayDateText_2"));
        lableBritdayDateText_2->setGeometry(QRect(1293, 430, 91, 22));
        lableBritdayDateText_2->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        lableBritdayDateText_2->setAlignment(Qt::AlignCenter);
        lbmebAdd = new QLabel(centralwidget);
        lbmebAdd->setObjectName(QString::fromUtf8("lbmebAdd"));
        lbmebAdd->setGeometry(QRect(980, 432, 301, 21));
        lbmebAdd->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebAdd->setMargin(3);
        lbGenreTxt = new QLabel(centralwidget);
        lbGenreTxt->setObjectName(QString::fromUtf8("lbGenreTxt"));
        lbGenreTxt->setGeometry(QRect(510, 500, 141, 20));
        lbGenreTxt->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"color: #605E5E;\n"
""));
        labelGenre = new QLabel(centralwidget);
        labelGenre->setObjectName(QString::fromUtf8("labelGenre"));
        labelGenre->setGeometry(QRect(430, 500, 91, 22));
        labelGenre->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelGenre->setAlignment(Qt::AlignCenter);
        pbRefresh = new QPushButton(centralwidget);
        pbRefresh->setObjectName(QString::fromUtf8("pbRefresh"));
        pbRefresh->setGeometry(QRect(520, 300, 61, 41));
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 72, 320, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #A7BFB1;\n"
"border-radius: 10px;"));
        pbRefreshM = new QPushButton(centralwidget);
        pbRefreshM->setObjectName(QString::fromUtf8("pbRefreshM"));
        pbRefreshM->setGeometry(QRect(1400, 300, 61, 41));
        pbRefreshM->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        MainWindow->setCentralWidget(centralwidget);
        labBorder2->raise();
        labBorder1->raise();
        lEditSearchBook1->raise();
        ItemBook->raise();
        btnSearchBook->raise();
        labBorder3->raise();
        labBookCover->raise();
        labelBookTitleText->raise();
        labelAuthorText->raise();
        labelPublishText->raise();
        labelIDnoText->raise();
        labelAvailabilityText->raise();
        lbTitle->raise();
        lbAuthor->raise();
        lbDate->raise();
        lbIDNum->raise();
        lbAvailability->raise();
        labBorder5->raise();
        btnSearchMember->raise();
        labBorder6->raise();
        labBorder4->raise();
        lEditSearchMember->raise();
        ItemMember->raise();
        labelMemberEmailText->raise();
        labelMemberPhoneText->raise();
        labelUserNameText->raise();
        labelMemberNameTxt->raise();
        lableMemberAddressText->raise();
        labelFeesText->raise();
        lbUName->raise();
        lbmebName->raise();
        lbmebBirthdate->raise();
        lbmebEmail->raise();
        lbmebPhone->raise();
        lbmebFees->raise();
        lbGen->raise();
        labelMemberGenderText->raise();
        lableBritdayDateText_2->raise();
        lbmebAdd->raise();
        lbGenreTxt->raise();
        labelGenre->raise();
        pbRefresh->raise();
        pushButton->raise();
        pbRefreshM->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuBooks = new QMenu(menubar);
        menuBooks->setObjectName(QString::fromUtf8("menuBooks"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuBooks->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionNew_Member);
        menuFile->addAction(actionEdit_Existing_Member);
        menuFile->addAction(actionSave_Members);
        menuFile->addAction(actionLoad_Members);
        menuFile->addAction(actionExit);
        menuBooks->addAction(actionAdd_Book);
        menuBooks->addAction(actionEdit_Existing_Book);
        menuBooks->addAction(actionLoad_Books);
        menuBooks->addAction(actionSave_Books);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Member->setText(QCoreApplication::translate("MainWindow", "New Member", nullptr));
        actionEdit_Existing_Member->setText(QCoreApplication::translate("MainWindow", "Edit Existing Member", nullptr));
        actionLoad_Members->setText(QCoreApplication::translate("MainWindow", "Load Members", nullptr));
        actionSave_Members->setText(QCoreApplication::translate("MainWindow", "Save Members", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAdd_Book->setText(QCoreApplication::translate("MainWindow", "Add Book", nullptr));
        actionEdit_Existing_Book->setText(QCoreApplication::translate("MainWindow", "Edit Existing Book", nullptr));
        actionLoad_Books->setText(QCoreApplication::translate("MainWindow", "Load Books", nullptr));
        actionSave_Books->setText(QCoreApplication::translate("MainWindow", "Save Books", nullptr));
        labBorder1->setText(QString());
        lEditSearchBook1->setText(QCoreApplication::translate("MainWindow", "Search Books", nullptr));
        btnSearchBook->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        labBorder3->setText(QString());
        labBorder2->setText(QString());
        labBookCover->setText(QString());
        labelBookTitleText->setText(QCoreApplication::translate("MainWindow", "Title:", nullptr));
        labelAuthorText->setText(QCoreApplication::translate("MainWindow", "Author:", nullptr));
        labelPublishText->setText(QCoreApplication::translate("MainWindow", "Publish Date:", nullptr));
        labelIDnoText->setText(QCoreApplication::translate("MainWindow", "ID Number:", nullptr));
        labelAvailabilityText->setText(QCoreApplication::translate("MainWindow", "Availability:", nullptr));
        lbTitle->setText(QCoreApplication::translate("MainWindow", "Title of Book", nullptr));
        lbAuthor->setText(QCoreApplication::translate("MainWindow", "Author of Book", nullptr));
        lbDate->setText(QCoreApplication::translate("MainWindow", "Date of Book", nullptr));
        lbIDNum->setText(QCoreApplication::translate("MainWindow", "ID Number", nullptr));
        lbAvailability->setText(QCoreApplication::translate("MainWindow", "Book Availability", nullptr));
        labBorder5->setText(QString());
        btnSearchMember->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        labBorder6->setText(QString());
        labBorder4->setText(QString());
        lEditSearchMember->setText(QCoreApplication::translate("MainWindow", "Search Members", nullptr));
        labelMemberEmailText->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        labelMemberPhoneText->setText(QCoreApplication::translate("MainWindow", "Phone:", nullptr));
        labelUserNameText->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        labelMemberNameTxt->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        lableMemberAddressText->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        labelFeesText->setText(QCoreApplication::translate("MainWindow", "Book Fees:", nullptr));
        lbUName->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lbmebName->setText(QCoreApplication::translate("MainWindow", "Member's Name", nullptr));
        lbmebBirthdate->setText(QCoreApplication::translate("MainWindow", "Date of Birth", nullptr));
        lbmebEmail->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        lbmebPhone->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        lbmebFees->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        lbGen->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        labelMemberGenderText->setText(QCoreApplication::translate("MainWindow", "Gender:", nullptr));
        lableBritdayDateText_2->setText(QCoreApplication::translate("MainWindow", "Birth Date:", nullptr));
        lbmebAdd->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        lbGenreTxt->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        labelGenre->setText(QCoreApplication::translate("MainWindow", "Genre:", nullptr));
        pbRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Loan", nullptr));
        pbRefreshM->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Members", nullptr));
        menuBooks->setTitle(QCoreApplication::translate("MainWindow", "Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
