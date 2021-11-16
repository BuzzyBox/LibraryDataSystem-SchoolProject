/********************************************************************************
** Form generated from reading UI file 'lognin_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGNIN_MENU_H
#define UI_LOGNIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_lognin_menu
{
public:
    QLabel *lbBorderLogin;
    QLabel *lbLoginText;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnLogin;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;

    void setupUi(QDialog *lognin_menu)
    {
        if (lognin_menu->objectName().isEmpty())
            lognin_menu->setObjectName(QString::fromUtf8("lognin_menu"));
        lognin_menu->resize(800, 600);
        lbBorderLogin = new QLabel(lognin_menu);
        lbBorderLogin->setObjectName(QString::fromUtf8("lbBorderLogin"));
        lbBorderLogin->setGeometry(QRect(30, 90, 741, 461));
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
        lbLoginText = new QLabel(lognin_menu);
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
        label = new QLabel(lognin_menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 180, 91, 20));
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
        label_2 = new QLabel(lognin_menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 305, 91, 20));
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
        btnLogin = new QPushButton(lognin_menu);
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
        txtUsername = new QLineEdit(lognin_menu);
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
        txtPassword = new QLineEdit(lognin_menu);
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

        retranslateUi(lognin_menu);

        QMetaObject::connectSlotsByName(lognin_menu);
    } // setupUi

    void retranslateUi(QDialog *lognin_menu)
    {
        lognin_menu->setWindowTitle(QApplication::translate("lognin_menu", "Dialog", nullptr));
        lbBorderLogin->setText(QString());
        lbLoginText->setText(QApplication::translate("lognin_menu", "Library System Login", nullptr));
        label->setText(QApplication::translate("lognin_menu", "Username:", nullptr));
        label_2->setText(QApplication::translate("lognin_menu", "Password:", nullptr));
        btnLogin->setText(QApplication::translate("lognin_menu", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lognin_menu: public Ui_lognin_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGNIN_MENU_H
