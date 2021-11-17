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
    QAction *actBR;
    QAction *actOverDue;
    QAction *actPreBook;
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
    QPushButton *pbLoan;
    QPushButton *pbRefreshM;
    QLabel *labBorder7;
    QLabel *lblMemberBook;
    QLineEdit *loanBTitle01;
    QLineEdit *loanBDate01;
    QLineEdit *loanBTitle02;
    QLineEdit *loanBDate02;
    QLineEdit *loanBTitle03;
    QLineEdit *loanBDate03;
    QLabel *lblMemberBook_2;
    QLabel *lblMemberBook_3;
    QLabel *lblMemberBook_4;
    QLabel *lblMemberBook_5;
    QLabel *lblMemberBook_6;
    QLabel *lblMemberBook_7;
    QLabel *labelPublishText_2;
    QLabel *lbDateBack;
    QPushButton *btnReturn1;
    QPushButton *btnReturn2;
    QPushButton *btnReturn3;
    QPushButton *pbPreBook;
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
        actBR = new QAction(MainWindow);
        actBR->setObjectName(QString::fromUtf8("actBR"));
        actOverDue = new QAction(MainWindow);
        actOverDue->setObjectName(QString::fromUtf8("actOverDue"));
        actPreBook = new QAction(MainWindow);
        actPreBook->setObjectName(QString::fromUtf8("actPreBook"));
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
"width: 30px;\n"
"height: 30px;\n"
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
        lbDate->setGeometry(QRect(279, 431, 141, 21));
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
        labBorder5->setGeometry(QRect(728, 70, 500, 270));
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
        btnSearchMember->setGeometry(QRect(1268, 20, 101, 40));
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
        labBorder6->setGeometry(QRect(728, 350, 661, 191));
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
        labBorder4->setGeometry(QRect(728, 20, 500, 41));
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
        lEditSearchMember->setGeometry(QRect(738, 30, 480, 21));
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
        ItemMember->setGeometry(QRect(738, 79, 480, 250));
        ItemMember->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 30px;\n"
"height: 30px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 10px;"));
        labelMemberEmailText = new QLabel(centralwidget);
        labelMemberEmailText->setObjectName(QString::fromUtf8("labelMemberEmailText"));
        labelMemberEmailText->setGeometry(QRect(740, 465, 61, 22));
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
        labelMemberPhoneText->setGeometry(QRect(743, 498, 61, 22));
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
        labelUserNameText->setGeometry(QRect(734, 400, 101, 22));
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
        labelMemberNameTxt->setGeometry(QRect(739, 368, 61, 22));
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
        lableMemberAddressText->setGeometry(QRect(743, 431, 71, 22));
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
        labelFeesText->setGeometry(QRect(1134, 483, 91, 22));
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
        lbUName->setGeometry(QRect(840, 400, 281, 21));
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
        lbmebName->setGeometry(QRect(810, 368, 311, 21));
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
        lbmebBirthdate->setGeometry(QRect(1230, 430, 141, 21));
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
        lbmebEmail->setGeometry(QRect(810, 465, 311, 21));
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
        lbmebPhone->setGeometry(QRect(810, 498, 311, 21));
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
        lbmebFees->setGeometry(QRect(1230, 482, 141, 41));
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
        lbGen->setGeometry(QRect(1230, 370, 141, 21));
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
        labelMemberGenderText->setGeometry(QRect(1140, 370, 71, 22));
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
        lableBritdayDateText_2->setGeometry(QRect(1133, 430, 91, 22));
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
        lbmebAdd->setGeometry(QRect(820, 432, 301, 21));
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
        lbGenreTxt->setGeometry(QRect(510, 430, 141, 20));
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
        labelGenre->setGeometry(QRect(420, 430, 91, 22));
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
        pbLoan = new QPushButton(centralwidget);
        pbLoan->setObjectName(QString::fromUtf8("pbLoan"));
        pbLoan->setGeometry(QRect(550, 76, 151, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pbLoan->setFont(font);
        pbLoan->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
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
        pbRefreshM->setGeometry(QRect(1240, 300, 61, 41));
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
        labBorder7 = new QLabel(centralwidget);
        labBorder7->setObjectName(QString::fromUtf8("labBorder7"));
        labBorder7->setGeometry(QRect(1240, 70, 181, 221));
        labBorder7->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        lblMemberBook = new QLabel(centralwidget);
        lblMemberBook->setObjectName(QString::fromUtf8("lblMemberBook"));
        lblMemberBook->setGeometry(QRect(1260, 80, 141, 22));
        lblMemberBook->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        lblMemberBook->setAlignment(Qt::AlignCenter);
        loanBTitle01 = new QLineEdit(centralwidget);
        loanBTitle01->setObjectName(QString::fromUtf8("loanBTitle01"));
        loanBTitle01->setGeometry(QRect(1300, 110, 113, 20));
        loanBTitle01->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));
        loanBDate01 = new QLineEdit(centralwidget);
        loanBDate01->setObjectName(QString::fromUtf8("loanBDate01"));
        loanBDate01->setGeometry(QRect(1312, 140, 101, 20));
        loanBDate01->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));
        loanBTitle02 = new QLineEdit(centralwidget);
        loanBTitle02->setObjectName(QString::fromUtf8("loanBTitle02"));
        loanBTitle02->setGeometry(QRect(1300, 170, 113, 20));
        loanBTitle02->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));
        loanBDate02 = new QLineEdit(centralwidget);
        loanBDate02->setObjectName(QString::fromUtf8("loanBDate02"));
        loanBDate02->setGeometry(QRect(1312, 200, 101, 20));
        loanBDate02->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));
        loanBTitle03 = new QLineEdit(centralwidget);
        loanBTitle03->setObjectName(QString::fromUtf8("loanBTitle03"));
        loanBTitle03->setGeometry(QRect(1300, 230, 113, 20));
        loanBTitle03->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));
        loanBDate03 = new QLineEdit(centralwidget);
        loanBDate03->setObjectName(QString::fromUtf8("loanBDate03"));
        loanBDate03->setGeometry(QRect(1312, 260, 101, 20));
        loanBDate03->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #605E5E;"));
        lblMemberBook_2 = new QLabel(centralwidget);
        lblMemberBook_2->setObjectName(QString::fromUtf8("lblMemberBook_2"));
        lblMemberBook_2->setGeometry(QRect(1240, 110, 71, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto")});
        font1.setBold(false);
        font1.setItalic(false);
        lblMemberBook_2->setFont(font1);
        lblMemberBook_2->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        lblMemberBook_2->setAlignment(Qt::AlignCenter);
        lblMemberBook_3 = new QLabel(centralwidget);
        lblMemberBook_3->setObjectName(QString::fromUtf8("lblMemberBook_3"));
        lblMemberBook_3->setGeometry(QRect(1240, 140, 71, 22));
        lblMemberBook_3->setFont(font1);
        lblMemberBook_3->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        lblMemberBook_3->setAlignment(Qt::AlignCenter);
        lblMemberBook_4 = new QLabel(centralwidget);
        lblMemberBook_4->setObjectName(QString::fromUtf8("lblMemberBook_4"));
        lblMemberBook_4->setGeometry(QRect(1240, 170, 71, 22));
        lblMemberBook_4->setFont(font1);
        lblMemberBook_4->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        lblMemberBook_4->setAlignment(Qt::AlignCenter);
        lblMemberBook_5 = new QLabel(centralwidget);
        lblMemberBook_5->setObjectName(QString::fromUtf8("lblMemberBook_5"));
        lblMemberBook_5->setGeometry(QRect(1240, 230, 71, 22));
        lblMemberBook_5->setFont(font1);
        lblMemberBook_5->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        lblMemberBook_5->setAlignment(Qt::AlignCenter);
        lblMemberBook_6 = new QLabel(centralwidget);
        lblMemberBook_6->setObjectName(QString::fromUtf8("lblMemberBook_6"));
        lblMemberBook_6->setGeometry(QRect(1240, 200, 71, 22));
        lblMemberBook_6->setFont(font1);
        lblMemberBook_6->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        lblMemberBook_6->setAlignment(Qt::AlignCenter);
        lblMemberBook_7 = new QLabel(centralwidget);
        lblMemberBook_7->setObjectName(QString::fromUtf8("lblMemberBook_7"));
        lblMemberBook_7->setGeometry(QRect(1240, 260, 71, 22));
        lblMemberBook_7->setFont(font1);
        lblMemberBook_7->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
"font-size: 11px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        lblMemberBook_7->setAlignment(Qt::AlignCenter);
        labelPublishText_2 = new QLabel(centralwidget);
        labelPublishText_2->setObjectName(QString::fromUtf8("labelPublishText_2"));
        labelPublishText_2->setGeometry(QRect(390, 500, 111, 22));
        labelPublishText_2->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelPublishText_2->setAlignment(Qt::AlignCenter);
        lbDateBack = new QLabel(centralwidget);
        lbDateBack->setObjectName(QString::fromUtf8("lbDateBack"));
        lbDateBack->setGeometry(QRect(500, 500, 141, 21));
        lbDateBack->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbDateBack->setMargin(3);
        btnReturn1 = new QPushButton(centralwidget);
        btnReturn1->setObjectName(QString::fromUtf8("btnReturn1"));
        btnReturn1->setGeometry(QRect(1443, 72, 130, 60));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        btnReturn1->setFont(font2);
        btnReturn1->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #B7CFDA;\n"
"border-radius: 10px;"));
        btnReturn2 = new QPushButton(centralwidget);
        btnReturn2->setObjectName(QString::fromUtf8("btnReturn2"));
        btnReturn2->setGeometry(QRect(1443, 148, 130, 60));
        btnReturn2->setFont(font2);
        btnReturn2->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #B7CFDA;\n"
"border-radius: 10px;"));
        btnReturn3 = new QPushButton(centralwidget);
        btnReturn3->setObjectName(QString::fromUtf8("btnReturn3"));
        btnReturn3->setGeometry(QRect(1443, 226, 130, 60));
        btnReturn3->setFont(font2);
        btnReturn3->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"/*background: #AFD6E7;*/\n"
"background: #B7CFDA;\n"
"border-radius: 10px;"));
        pbPreBook = new QPushButton(centralwidget);
        pbPreBook->setObjectName(QString::fromUtf8("pbPreBook"));
        pbPreBook->setGeometry(QRect(550, 70, 151, 71));
        pbPreBook->setFont(font);
        pbPreBook->setStyleSheet(QString::fromUtf8("/*Widget Book Style Sheet*/\n"
"\n"
"position: absolute;\n"
"width: 328.88px;\n"
"height: 258.34px;\n"
"left: 25.53px;\n"
"top: 154.21px;\n"
"\n"
"background: #FF9999;\n"
"border-radius: 10px;"));
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
        pbLoan->raise();
        pbRefreshM->raise();
        labBorder7->raise();
        lblMemberBook->raise();
        loanBTitle01->raise();
        loanBDate01->raise();
        loanBTitle02->raise();
        loanBDate02->raise();
        loanBTitle03->raise();
        loanBDate03->raise();
        lblMemberBook_2->raise();
        lblMemberBook_3->raise();
        lblMemberBook_4->raise();
        lblMemberBook_5->raise();
        lblMemberBook_6->raise();
        lblMemberBook_7->raise();
        labelPublishText_2->raise();
        lbDateBack->raise();
        btnReturn1->raise();
        btnReturn2->raise();
        btnReturn3->raise();
        pbPreBook->raise();
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
        menuBooks->addAction(actBR);
        menuBooks->addAction(actOverDue);
        menuBooks->addAction(actPreBook);

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
        actBR->setText(QCoreApplication::translate("MainWindow", "Book Report", nullptr));
        actOverDue->setText(QCoreApplication::translate("MainWindow", "Over Due Books", nullptr));
        actPreBook->setText(QCoreApplication::translate("MainWindow", "Pre Book List", nullptr));
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
        pbLoan->setText(QCoreApplication::translate("MainWindow", "Loan \n"
"Book", nullptr));
        pbRefreshM->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        labBorder7->setText(QString());
        lblMemberBook->setText(QCoreApplication::translate("MainWindow", "Member Loans:", nullptr));
        lblMemberBook_2->setText(QCoreApplication::translate("MainWindow", "Book Title", nullptr));
        lblMemberBook_3->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        lblMemberBook_4->setText(QCoreApplication::translate("MainWindow", "Book Title", nullptr));
        lblMemberBook_5->setText(QCoreApplication::translate("MainWindow", "Book Title", nullptr));
        lblMemberBook_6->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        lblMemberBook_7->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        labelPublishText_2->setText(QCoreApplication::translate("MainWindow", "Due Back:", nullptr));
        lbDateBack->setText(QCoreApplication::translate("MainWindow", "Due Back Date", nullptr));
        btnReturn1->setText(QCoreApplication::translate("MainWindow", "Return \n"
" Book 1", nullptr));
        btnReturn2->setText(QCoreApplication::translate("MainWindow", "Return\n"
" Book 2", nullptr));
        btnReturn3->setText(QCoreApplication::translate("MainWindow", "Return\n"
" Book 3", nullptr));
        pbPreBook->setText(QCoreApplication::translate("MainWindow", "Pre Book", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Members", nullptr));
        menuBooks->setTitle(QCoreApplication::translate("MainWindow", "Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
