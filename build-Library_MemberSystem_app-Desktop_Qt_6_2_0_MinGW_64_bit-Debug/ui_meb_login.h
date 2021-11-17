/********************************************************************************
** Form generated from reading UI file 'meb_login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEB_LOGIN_H
#define UI_MEB_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_meb_login
{
public:
    QPushButton *btnLogin;
    QLabel *lbBorderLogin;
    QLabel *label;
    QLineEdit *txtUsername;
    QLineEdit *txtID;
    QLabel *label_2;
    QLabel *lbLoginText;
    QLineEdit *txtPassword;
    QLabel *label_4;

    void setupUi(QDialog *meb_login)
    {
        if (meb_login->objectName().isEmpty())
            meb_login->setObjectName(QString::fromUtf8("meb_login"));
        meb_login->resize(800, 600);
        btnLogin = new QPushButton(meb_login);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(620, 490, 120, 40));
        btnLogin->setStyleSheet(QString::fromUtf8("/*Login btn*/\n"
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
        lbBorderLogin = new QLabel(meb_login);
        lbBorderLogin->setObjectName(QString::fromUtf8("lbBorderLogin"));
        lbBorderLogin->setGeometry(QRect(20, 90, 741, 461));
        lbBorderLogin->setStyleSheet(QString::fromUtf8("/* Rectangle 1 */\n"
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
        label = new QLabel(meb_login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 182, 91, 20));
        label->setStyleSheet(QString::fromUtf8("/*login Username Text*/\n"
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
        label->setAlignment(Qt::AlignCenter);
        txtUsername = new QLineEdit(meb_login);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(140, 180, 591, 25));
        txtUsername->setStyleSheet(QString::fromUtf8("/*Border Sign-up 3 */\n"
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
        txtID = new QLineEdit(meb_login);
        txtID->setObjectName(QString::fromUtf8("txtID"));
        txtID->setGeometry(QRect(140, 240, 591, 25));
        txtID->setStyleSheet(QString::fromUtf8("/*Border Sign-up 2 */\n"
"\n"
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
        txtID->setEchoMode(QLineEdit::Normal);
        label_2 = new QLabel(meb_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 302, 91, 20));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"/*Login Password Text*/\n"
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
        label_2->setAlignment(Qt::AlignCenter);
        lbLoginText = new QLabel(meb_login);
        lbLoginText->setObjectName(QString::fromUtf8("lbLoginText"));
        lbLoginText->setGeometry(QRect(30, 30, 341, 51));
        lbLoginText->setStyleSheet(QString::fromUtf8("/*Text*/\n"
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
        lbLoginText->setAlignment(Qt::AlignCenter);
        txtPassword = new QLineEdit(meb_login);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(140, 300, 591, 25));
        txtPassword->setStyleSheet(QString::fromUtf8("/*Border Sign-up 2 */\n"
"\n"
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
        txtPassword->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(meb_login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 243, 91, 20));
        label_4->setStyleSheet(QString::fromUtf8("/*login Username Text*/\n"
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
        label_4->setAlignment(Qt::AlignCenter);
        lbBorderLogin->raise();
        btnLogin->raise();
        label->raise();
        txtUsername->raise();
        txtID->raise();
        label_2->raise();
        lbLoginText->raise();
        txtPassword->raise();
        label_4->raise();

        retranslateUi(meb_login);

        QMetaObject::connectSlotsByName(meb_login);
    } // setupUi

    void retranslateUi(QDialog *meb_login)
    {
        meb_login->setWindowTitle(QCoreApplication::translate("meb_login", "Dialog", nullptr));
        btnLogin->setText(QCoreApplication::translate("meb_login", "Login", nullptr));
        lbBorderLogin->setText(QString());
        label->setText(QCoreApplication::translate("meb_login", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("meb_login", "Password:", nullptr));
        lbLoginText->setText(QCoreApplication::translate("meb_login", "Library System Login", nullptr));
        label_4->setText(QCoreApplication::translate("meb_login", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class meb_login: public Ui_meb_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEB_LOGIN_H
