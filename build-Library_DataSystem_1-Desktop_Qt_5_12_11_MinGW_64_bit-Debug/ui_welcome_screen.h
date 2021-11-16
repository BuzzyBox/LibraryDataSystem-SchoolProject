/********************************************************************************
** Form generated from reading UI file 'welcome_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_SCREEN_H
#define UI_WELCOME_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcome_screen
{
public:
    QLabel *lbAboutUs;
    QLabel *lbWelcometoBookNook;
    QLabel *lbBorderSearch;
    QLineEdit *lEditSearchBook1;
    QPushButton *pushButton;
    QPushButton *BtnLogin;

    void setupUi(QDialog *welcome_screen)
    {
        if (welcome_screen->objectName().isEmpty())
            welcome_screen->setObjectName(QString::fromUtf8("welcome_screen"));
        welcome_screen->resize(800, 600);
        lbAboutUs = new QLabel(welcome_screen);
        lbAboutUs->setObjectName(QString::fromUtf8("lbAboutUs"));
        lbAboutUs->setEnabled(true);
        lbAboutUs->setGeometry(QRect(60, 220, 401, 281));
        lbAboutUs->setLayoutDirection(Qt::LeftToRight);
        lbAboutUs->setStyleSheet(QString::fromUtf8("/*Border*/\n"
"\n"
"width: 449px;\n"
"height: 358px;\n"
"left: 36px;\n"
"top: 280px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 10px; \n"
"\n"
"/*Text*/\n"
"\n"
"position: absolute;\n"
"width: 365px;\n"
"height: 295px;\n"
"left: 83px;\n"
"top: 304px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #000000;\n"
""));
        lbAboutUs->setFrameShape(QFrame::NoFrame);
        lbAboutUs->setFrameShadow(QFrame::Plain);
        lbAboutUs->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lbAboutUs->setWordWrap(true);
        lbAboutUs->setMargin(3);
        lbWelcometoBookNook = new QLabel(welcome_screen);
        lbWelcometoBookNook->setObjectName(QString::fromUtf8("lbWelcometoBookNook"));
        lbWelcometoBookNook->setGeometry(QRect(10, 30, 511, 51));
        lbWelcometoBookNook->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 638px;\n"
"height: 74px;\n"
"left: 34px;\n"
"top: 38px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 48px;\n"
"line-height: 56px;"));
        lbWelcometoBookNook->setFrameShape(QFrame::NoFrame);
        lbWelcometoBookNook->setFrameShadow(QFrame::Plain);
        lbWelcometoBookNook->setAlignment(Qt::AlignCenter);
        lbBorderSearch = new QLabel(welcome_screen);
        lbBorderSearch->setObjectName(QString::fromUtf8("lbBorderSearch"));
        lbBorderSearch->setGeometry(QRect(20, 100, 500, 51));
        lbBorderSearch->setStyleSheet(QString::fromUtf8("/*Border 3*/\n"
"\n"
"position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        lEditSearchBook1 = new QLineEdit(welcome_screen);
        lEditSearchBook1->setObjectName(QString::fromUtf8("lEditSearchBook1"));
        lEditSearchBook1->setGeometry(QRect(30, 110, 480, 31));
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
"font-size: 24px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;\n"
""));
        pushButton = new QPushButton(welcome_screen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 250, 171, 61));
        pushButton->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 265px;\n"
"height: 82px;\n"
"left: 572px;\n"
"top: 319px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 15px;\n"
"\n"
"position: absolute;\n"
"width: 169px;\n"
"height: 31px;\n"
"left: 623px;\n"
"top: 345px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 36px;\n"
"line-height: 22px;\n"
"/* or 46% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));
        BtnLogin = new QPushButton(welcome_screen);
        BtnLogin->setObjectName(QString::fromUtf8("BtnLogin"));
        BtnLogin->setGeometry(QRect(550, 400, 171, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(62);
        BtnLogin->setFont(font);
        BtnLogin->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 265px;\n"
"height: 82px;\n"
"left: 572px;\n"
"top: 319px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 15px;\n"
"\n"
"position: absolute;\n"
"width: 169px;\n"
"height: 31px;\n"
"left: 623px;\n"
"top: 345px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 36px;\n"
"line-height: 22px;\n"
"/* or 46% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;"));

        retranslateUi(welcome_screen);

        QMetaObject::connectSlotsByName(welcome_screen);
    } // setupUi

    void retranslateUi(QDialog *welcome_screen)
    {
        welcome_screen->setWindowTitle(QApplication::translate("welcome_screen", "Dialog", nullptr));
        lbAboutUs->setText(QApplication::translate("welcome_screen", "About Us!\n"
"\n"
" Lorem ipsum dolr sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore at dolore magne aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo cnsequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.", nullptr));
        lbWelcometoBookNook->setText(QApplication::translate("welcome_screen", "Welcome to BookNook!", nullptr));
        lbBorderSearch->setText(QString());
        lEditSearchBook1->setText(QApplication::translate("welcome_screen", "Search Books", nullptr));
        pushButton->setText(QApplication::translate("welcome_screen", "Sign-Up", nullptr));
        BtnLogin->setText(QApplication::translate("welcome_screen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome_screen: public Ui_welcome_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_SCREEN_H
