/********************************************************************************
** Form generated from reading UI file 'mainwindowmeb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWMEB_H
#define UI_MAINWINDOWMEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowMeb
{
public:
    QAction *actionProfile;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *labBorder3;
    QLabel *lbWelcometoBookNook;
    QLabel *labelMemberGenderText;
    QLabel *lbmebEmail;
    QLabel *lableMemberAddressText;
    QLabel *lbGen;
    QLabel *lableBritdayDateText_2;
    QLabel *labelMemberEmailText;
    QLabel *lbmebName;
    QLabel *labelMemberPhoneText;
    QLabel *lbmebPhone;
    QLabel *lbmebBirthdate;
    QLabel *lbUName;
    QLabel *labelUserNameText;
    QLabel *lbmebAdd;
    QLabel *labelFeesText;
    QLabel *labelMemberNameTxt;
    QLabel *lbmebFees;
    QLabel *labelFeesText_2;
    QLabel *lbmebFees_3;
    QLabel *labelMembweIDText;
    QLabel *lbID;
    QPushButton *bntInfoClick;
    QMenuBar *menubar;
    QMenu *menuProfile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowMeb)
    {
        if (MainWindowMeb->objectName().isEmpty())
            MainWindowMeb->setObjectName(QString::fromUtf8("MainWindowMeb"));
        MainWindowMeb->resize(800, 600);
        actionProfile = new QAction(MainWindowMeb);
        actionProfile->setObjectName(QString::fromUtf8("actionProfile"));
        actionExit = new QAction(MainWindowMeb);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindowMeb);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labBorder3 = new QLabel(centralwidget);
        labBorder3->setObjectName(QString::fromUtf8("labBorder3"));
        labBorder3->setGeometry(QRect(60, 100, 661, 401));
        labBorder3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        lbWelcometoBookNook = new QLabel(centralwidget);
        lbWelcometoBookNook->setObjectName(QString::fromUtf8("lbWelcometoBookNook"));
        lbWelcometoBookNook->setGeometry(QRect(60, 6, 391, 51));
        lbWelcometoBookNook->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        lbWelcometoBookNook->setFrameShape(QFrame::NoFrame);
        lbWelcometoBookNook->setFrameShadow(QFrame::Plain);
        lbWelcometoBookNook->setAlignment(Qt::AlignCenter);
        labelMemberGenderText = new QLabel(centralwidget);
        labelMemberGenderText->setObjectName(QString::fromUtf8("labelMemberGenderText"));
        labelMemberGenderText->setGeometry(QRect(160, 214, 71, 22));
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
        lbmebEmail = new QLabel(centralwidget);
        lbmebEmail->setObjectName(QString::fromUtf8("lbmebEmail"));
        lbmebEmail->setGeometry(QRect(140, 256, 561, 31));
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
        lableMemberAddressText = new QLabel(centralwidget);
        lableMemberAddressText->setObjectName(QString::fromUtf8("lableMemberAddressText"));
        lableMemberAddressText->setGeometry(QRect(68, 310, 71, 22));
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
        lbGen = new QLabel(centralwidget);
        lbGen->setObjectName(QString::fromUtf8("lbGen"));
        lbGen->setGeometry(QRect(230, 210, 171, 31));
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
        lableBritdayDateText_2 = new QLabel(centralwidget);
        lableBritdayDateText_2->setObjectName(QString::fromUtf8("lableBritdayDateText_2"));
        lableBritdayDateText_2->setGeometry(QRect(430, 215, 91, 22));
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
        labelMemberEmailText = new QLabel(centralwidget);
        labelMemberEmailText->setObjectName(QString::fromUtf8("labelMemberEmailText"));
        labelMemberEmailText->setGeometry(QRect(71, 261, 61, 22));
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
        lbmebName = new QLabel(centralwidget);
        lbmebName->setObjectName(QString::fromUtf8("lbmebName"));
        lbmebName->setGeometry(QRect(140, 118, 561, 31));
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
        labelMemberPhoneText = new QLabel(centralwidget);
        labelMemberPhoneText->setObjectName(QString::fromUtf8("labelMemberPhoneText"));
        labelMemberPhoneText->setGeometry(QRect(72, 360, 61, 22));
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
        lbmebPhone = new QLabel(centralwidget);
        lbmebPhone->setObjectName(QString::fromUtf8("lbmebPhone"));
        lbmebPhone->setGeometry(QRect(140, 355, 561, 31));
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
        lbmebBirthdate = new QLabel(centralwidget);
        lbmebBirthdate->setObjectName(QString::fromUtf8("lbmebBirthdate"));
        lbmebBirthdate->setGeometry(QRect(530, 210, 171, 31));
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
        lbUName = new QLabel(centralwidget);
        lbUName->setObjectName(QString::fromUtf8("lbUName"));
        lbUName->setGeometry(QRect(150, 166, 551, 30));
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
        labelUserNameText = new QLabel(centralwidget);
        labelUserNameText->setObjectName(QString::fromUtf8("labelUserNameText"));
        labelUserNameText->setGeometry(QRect(60, 170, 91, 22));
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
        lbmebAdd = new QLabel(centralwidget);
        lbmebAdd->setObjectName(QString::fromUtf8("lbmebAdd"));
        lbmebAdd->setGeometry(QRect(140, 305, 561, 31));
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
        labelFeesText = new QLabel(centralwidget);
        labelFeesText->setObjectName(QString::fromUtf8("labelFeesText"));
        labelFeesText->setGeometry(QRect(403, 411, 91, 22));
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
        labelMemberNameTxt = new QLabel(centralwidget);
        labelMemberNameTxt->setObjectName(QString::fromUtf8("labelMemberNameTxt"));
        labelMemberNameTxt->setGeometry(QRect(69, 122, 61, 22));
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
        lbmebFees = new QLabel(centralwidget);
        lbmebFees->setObjectName(QString::fromUtf8("lbmebFees"));
        lbmebFees->setGeometry(QRect(499, 410, 201, 51));
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
        labelFeesText_2 = new QLabel(centralwidget);
        labelFeesText_2->setObjectName(QString::fromUtf8("labelFeesText_2"));
        labelFeesText_2->setGeometry(QRect(70, 410, 101, 22));
        labelFeesText_2->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelFeesText_2->setAlignment(Qt::AlignCenter);
        lbmebFees_3 = new QLabel(centralwidget);
        lbmebFees_3->setObjectName(QString::fromUtf8("lbmebFees_3"));
        lbmebFees_3->setGeometry(QRect(180, 410, 201, 51));
        lbmebFees_3->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        lbmebFees_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbmebFees_3->setMargin(3);
        labelMembweIDText = new QLabel(centralwidget);
        labelMembweIDText->setObjectName(QString::fromUtf8("labelMembweIDText"));
        labelMembweIDText->setGeometry(QRect(480, 61, 61, 22));
        labelMembweIDText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelMembweIDText->setAlignment(Qt::AlignCenter);
        lbID = new QLabel(centralwidget);
        lbID->setObjectName(QString::fromUtf8("lbID"));
        lbID->setGeometry(QRect(543, 61, 161, 22));
        lbID->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        lbID->setAlignment(Qt::AlignCenter);
        bntInfoClick = new QPushButton(centralwidget);
        bntInfoClick->setObjectName(QString::fromUtf8("bntInfoClick"));
        bntInfoClick->setGeometry(QRect(60, 60, 231, 31));
        bntInfoClick->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 10px; \n"
"\n"
"/*Text*/ \n"
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
"line-height: 22px;"));
        MainWindowMeb->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowMeb);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuProfile = new QMenu(menubar);
        menuProfile->setObjectName(QString::fromUtf8("menuProfile"));
        MainWindowMeb->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowMeb);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowMeb->setStatusBar(statusbar);

        menubar->addAction(menuProfile->menuAction());
        menuProfile->addAction(actionExit);

        retranslateUi(MainWindowMeb);

        QMetaObject::connectSlotsByName(MainWindowMeb);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowMeb)
    {
        MainWindowMeb->setWindowTitle(QApplication::translate("MainWindowMeb", "MainWindowMeb", nullptr));
        actionProfile->setText(QApplication::translate("MainWindowMeb", "Profile", nullptr));
        actionExit->setText(QApplication::translate("MainWindowMeb", "Exit", nullptr));
        labBorder3->setText(QString());
        lbWelcometoBookNook->setText(QApplication::translate("MainWindowMeb", "Welcome to Book Nook!", nullptr));
        labelMemberGenderText->setText(QApplication::translate("MainWindowMeb", "Gender:", nullptr));
        lbmebEmail->setText(QApplication::translate("MainWindowMeb", "Email", nullptr));
        lableMemberAddressText->setText(QApplication::translate("MainWindowMeb", "Address:", nullptr));
        lbGen->setText(QApplication::translate("MainWindowMeb", "Gender", nullptr));
        lableBritdayDateText_2->setText(QApplication::translate("MainWindowMeb", "Birth Date:", nullptr));
        labelMemberEmailText->setText(QApplication::translate("MainWindowMeb", "Email:", nullptr));
        lbmebName->setText(QApplication::translate("MainWindowMeb", "Member's Name", nullptr));
        labelMemberPhoneText->setText(QApplication::translate("MainWindowMeb", "Phone:", nullptr));
        lbmebPhone->setText(QApplication::translate("MainWindowMeb", "Phone Number", nullptr));
        lbmebBirthdate->setText(QApplication::translate("MainWindowMeb", "Date of Birth", nullptr));
        lbUName->setText(QApplication::translate("MainWindowMeb", "Username", nullptr));
        labelUserNameText->setText(QApplication::translate("MainWindowMeb", "Username:", nullptr));
        lbmebAdd->setText(QApplication::translate("MainWindowMeb", "Address", nullptr));
        labelFeesText->setText(QApplication::translate("MainWindowMeb", "Book Fees:", nullptr));
        labelMemberNameTxt->setText(QApplication::translate("MainWindowMeb", "Name:", nullptr));
        lbmebFees->setText(QApplication::translate("MainWindowMeb", "$", nullptr));
        labelFeesText_2->setText(QApplication::translate("MainWindowMeb", "Books Out:", nullptr));
        lbmebFees_3->setText(QString());
        labelMembweIDText->setText(QApplication::translate("MainWindowMeb", "ID:", nullptr));
        lbID->setText(QString());
        bntInfoClick->setText(QApplication::translate("MainWindowMeb", "Click Here to Display Info", nullptr));
        menuProfile->setTitle(QApplication::translate("MainWindowMeb", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowMeb: public Ui_MainWindowMeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWMEB_H
