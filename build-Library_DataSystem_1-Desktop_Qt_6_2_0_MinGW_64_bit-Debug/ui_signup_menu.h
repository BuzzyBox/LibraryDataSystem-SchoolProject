/********************************************************************************
** Form generated from reading UI file 'signup_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_MENU_H
#define UI_SIGNUP_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup_menu
{
public:
    QLabel *lbBoarderSignUp;
    QLabel *lbSignUpText;
    QLabel *labelSignUpNameText;
    QLabel *labelEmailText;
    QLabel *labelSignUpPasswordText;
    QLabel *labelBirthdayText;
    QLabel *labelSignUpUsernameText;
    QLineEdit *txtSignUpName;
    QLineEdit *txtSignUpUsername;
    QLineEdit *txtSignUpPassword;
    QLineEdit *txtSignUpEmail;
    QDateEdit *SUSelectDate;
    QComboBox *cBxGender;
    QLabel *labelGenderText;
    QLabel *labelAdressText;
    QLabel *labelPhoneNumberText;
    QLineEdit *txtSignUpAddress;
    QLabel *labelRecieveEmailText;
    QCheckBox *chB_Emails;
    QPushButton *btnSignup;
    QLineEdit *txtSignUpPh;

    void setupUi(QDialog *signup_menu)
    {
        if (signup_menu->objectName().isEmpty())
            signup_menu->setObjectName(QString::fromUtf8("signup_menu"));
        signup_menu->resize(800, 600);
        lbBoarderSignUp = new QLabel(signup_menu);
        lbBoarderSignUp->setObjectName(QString::fromUtf8("lbBoarderSignUp"));
        lbBoarderSignUp->setGeometry(QRect(30, 90, 741, 461));
        lbBoarderSignUp->setStyleSheet(QString::fromUtf8("/* Rectangle 1 */\n"
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
        lbSignUpText = new QLabel(signup_menu);
        lbSignUpText->setObjectName(QString::fromUtf8("lbSignUpText"));
        lbSignUpText->setGeometry(QRect(30, 30, 281, 51));
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
        labelSignUpNameText = new QLabel(signup_menu);
        labelSignUpNameText->setObjectName(QString::fromUtf8("labelSignUpNameText"));
        labelSignUpNameText->setGeometry(QRect(56, 120, 61, 21));
        labelSignUpNameText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelSignUpNameText->setAlignment(Qt::AlignCenter);
        labelEmailText = new QLabel(signup_menu);
        labelEmailText->setObjectName(QString::fromUtf8("labelEmailText"));
        labelEmailText->setGeometry(QRect(60, 243, 55, 16));
        labelEmailText->setStyleSheet(QString::fromUtf8("/*Email Text*/\n"
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
        labelEmailText->setAlignment(Qt::AlignCenter);
        labelSignUpPasswordText = new QLabel(signup_menu);
        labelSignUpPasswordText->setObjectName(QString::fromUtf8("labelSignUpPasswordText"));
        labelSignUpPasswordText->setGeometry(QRect(49, 201, 81, 16));
        labelSignUpPasswordText->setStyleSheet(QString::fromUtf8("/* password text */\n"
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
        labelSignUpPasswordText->setAlignment(Qt::AlignCenter);
        labelBirthdayText = new QLabel(signup_menu);
        labelBirthdayText->setObjectName(QString::fromUtf8("labelBirthdayText"));
        labelBirthdayText->setGeometry(QRect(150, 290, 81, 21));
        labelBirthdayText->setStyleSheet(QString::fromUtf8("/*birthday text*/\n"
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
        labelBirthdayText->setAlignment(Qt::AlignCenter);
        labelSignUpUsernameText = new QLabel(signup_menu);
        labelSignUpUsernameText->setObjectName(QString::fromUtf8("labelSignUpUsernameText"));
        labelSignUpUsernameText->setGeometry(QRect(44, 163, 91, 16));
        labelSignUpUsernameText->setStyleSheet(QString::fromUtf8("/*Username Text*/\n"
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
        labelSignUpUsernameText->setAlignment(Qt::AlignCenter);
        txtSignUpName = new QLineEdit(signup_menu);
        txtSignUpName->setObjectName(QString::fromUtf8("txtSignUpName"));
        txtSignUpName->setGeometry(QRect(140, 120, 591, 25));
        txtSignUpName->setStyleSheet(QString::fromUtf8("/*Border Sign-up 3 */\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
"\n"
"/*Text Password*/ \n"
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
        txtSignUpUsername = new QLineEdit(signup_menu);
        txtSignUpUsername->setObjectName(QString::fromUtf8("txtSignUpUsername"));
        txtSignUpUsername->setGeometry(QRect(140, 158, 591, 25));
        txtSignUpUsername->setStyleSheet(QString::fromUtf8("/*Border Sign-up 2 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
"\n"
"/*Text Username*/ \n"
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
        txtSignUpPassword = new QLineEdit(signup_menu);
        txtSignUpPassword->setObjectName(QString::fromUtf8("txtSignUpPassword"));
        txtSignUpPassword->setGeometry(QRect(140, 197, 591, 25));
        txtSignUpPassword->setStyleSheet(QString::fromUtf8("/*Border Sign-up 1 */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
"\n"
"/*Text Name*/ \n"
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
        txtSignUpPassword->setEchoMode(QLineEdit::Normal);
        txtSignUpEmail = new QLineEdit(signup_menu);
        txtSignUpEmail->setObjectName(QString::fromUtf8("txtSignUpEmail"));
        txtSignUpEmail->setGeometry(QRect(140, 236, 591, 25));
        txtSignUpEmail->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;s"));
        SUSelectDate = new QDateEdit(signup_menu);
        SUSelectDate->setObjectName(QString::fromUtf8("SUSelectDate"));
        SUSelectDate->setGeometry(QRect(238, 288, 131, 25));
        SUSelectDate->setStyleSheet(QString::fromUtf8("/*boader Date*/\n"
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
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;"));
        SUSelectDate->setWrapping(true);
        SUSelectDate->setFrame(true);
        SUSelectDate->setAlignment(Qt::AlignCenter);
        SUSelectDate->setAccelerated(true);
        SUSelectDate->setKeyboardTracking(true);
        cBxGender = new QComboBox(signup_menu);
        cBxGender->setObjectName(QString::fromUtf8("cBxGender"));
        cBxGender->setGeometry(QRect(600, 288, 131, 25));
        cBxGender->setStyleSheet(QString::fromUtf8("/*boader Gender*/\n"
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
        labelGenderText = new QLabel(signup_menu);
        labelGenderText->setObjectName(QString::fromUtf8("labelGenderText"));
        labelGenderText->setGeometry(QRect(526, 290, 71, 20));
        labelGenderText->setStyleSheet(QString::fromUtf8("/*Gender Text*/\n"
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
        labelGenderText->setAlignment(Qt::AlignCenter);
        labelAdressText = new QLabel(signup_menu);
        labelAdressText->setObjectName(QString::fromUtf8("labelAdressText"));
        labelAdressText->setGeometry(QRect(53, 340, 71, 16));
        labelAdressText->setStyleSheet(QString::fromUtf8("/*Address Text*/\n"
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
        labelAdressText->setAlignment(Qt::AlignCenter);
        labelPhoneNumberText = new QLabel(signup_menu);
        labelPhoneNumberText->setObjectName(QString::fromUtf8("labelPhoneNumberText"));
        labelPhoneNumberText->setGeometry(QRect(53, 380, 71, 16));
        labelPhoneNumberText->setStyleSheet(QString::fromUtf8("/*Address Text*/\n"
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
        labelPhoneNumberText->setAlignment(Qt::AlignCenter);
        txtSignUpAddress = new QLineEdit(signup_menu);
        txtSignUpAddress->setObjectName(QString::fromUtf8("txtSignUpAddress"));
        txtSignUpAddress->setGeometry(QRect(140, 336, 591, 25));
        txtSignUpAddress->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;s"));
        labelRecieveEmailText = new QLabel(signup_menu);
        labelRecieveEmailText->setObjectName(QString::fromUtf8("labelRecieveEmailText"));
        labelRecieveEmailText->setGeometry(QRect(500, 435, 131, 21));
        labelRecieveEmailText->setStyleSheet(QString::fromUtf8("/*Address Text*/\n"
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
        labelRecieveEmailText->setAlignment(Qt::AlignCenter);
        chB_Emails = new QCheckBox(signup_menu);
        chB_Emails->setObjectName(QString::fromUtf8("chB_Emails"));
        chB_Emails->setGeometry(QRect(630, 440, 16, 16));
        chB_Emails->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 40px;\n"
"height: 40px;\n"
"left: 627px;\n"
"top: 545px;\n"
""));
        btnSignup = new QPushButton(signup_menu);
        btnSignup->setObjectName(QString::fromUtf8("btnSignup"));
        btnSignup->setGeometry(QRect(620, 490, 121, 41));
        btnSignup->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
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
"letter-spacing: -0.408px;\n"
""));
        txtSignUpPh = new QLineEdit(signup_menu);
        txtSignUpPh->setObjectName(QString::fromUtf8("txtSignUpPh"));
        txtSignUpPh->setGeometry(QRect(140, 376, 591, 25));
        txtSignUpPh->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
"\n"
"position: absolute;\n"
"width: 548px;\n"
"height: 37px;\n"
"left: 202px;\n"
"top: 128px;\n"
"\n"
"background: #EDEDED;\n"
"border-radius: 8px; \n"
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
"font-size: 18px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"letter-spacing: -0.408px;\n"
"\n"
"color: #868181;s"));
        lbBoarderSignUp->raise();
        lbSignUpText->raise();
        labelSignUpNameText->raise();
        labelEmailText->raise();
        labelSignUpPasswordText->raise();
        labelBirthdayText->raise();
        labelSignUpUsernameText->raise();
        txtSignUpName->raise();
        txtSignUpUsername->raise();
        txtSignUpPassword->raise();
        txtSignUpEmail->raise();
        SUSelectDate->raise();
        cBxGender->raise();
        labelGenderText->raise();
        labelAdressText->raise();
        labelPhoneNumberText->raise();
        labelRecieveEmailText->raise();
        chB_Emails->raise();
        btnSignup->raise();
        txtSignUpAddress->raise();
        txtSignUpPh->raise();

        retranslateUi(signup_menu);

        QMetaObject::connectSlotsByName(signup_menu);
    } // setupUi

    void retranslateUi(QDialog *signup_menu)
    {
        signup_menu->setWindowTitle(QCoreApplication::translate("signup_menu", "Dialog", nullptr));
        lbBoarderSignUp->setText(QString());
        lbSignUpText->setText(QCoreApplication::translate("signup_menu", "Member Sign Up", nullptr));
        labelSignUpNameText->setText(QCoreApplication::translate("signup_menu", "Name:", nullptr));
        labelEmailText->setText(QCoreApplication::translate("signup_menu", "Email:", nullptr));
        labelSignUpPasswordText->setText(QCoreApplication::translate("signup_menu", "Password:", nullptr));
        labelBirthdayText->setText(QCoreApplication::translate("signup_menu", "Birthday:", nullptr));
        labelSignUpUsernameText->setText(QCoreApplication::translate("signup_menu", "Username:", nullptr));
        labelGenderText->setText(QCoreApplication::translate("signup_menu", "Gender:", nullptr));
        labelAdressText->setText(QCoreApplication::translate("signup_menu", "Address:", nullptr));
        labelPhoneNumberText->setText(QCoreApplication::translate("signup_menu", "Phone:", nullptr));
        labelRecieveEmailText->setText(QCoreApplication::translate("signup_menu", "Recieve Emails:", nullptr));
        chB_Emails->setText(QString());
        btnSignup->setText(QCoreApplication::translate("signup_menu", "Sign-Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup_menu: public Ui_signup_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_MENU_H
