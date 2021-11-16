/********************************************************************************
** Form generated from reading UI file 'edit_memeber.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_MEMEBER_H
#define UI_EDIT_MEMEBER_H

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

class Ui_edit_memeber
{
public:
    QLabel *lbSignUpText;
    QLabel *labelBorder1;
    QLineEdit *txtEditNam;
    QLabel *labelEdMebmberNTitle;
    QLabel *labelEdUserNameText;
    QLineEdit *txtEditUser;
    QLabel *labelEdPasswordText;
    QLineEdit *txtEditPass;
    QLineEdit *txtEditEmail;
    QLabel *labelEdEmailText;
    QLabel *labelEdBirthdayText;
    QLabel *labelEdGenderText;
    QDateEdit *EdtSelectDate;
    QComboBox *cBxEdGen;
    QLabel *labelEdAdressText;
    QLineEdit *txtEdAdd;
    QCheckBox *chB_EditEmails;
    QLabel *labelEDRecieveEmailText;
    QPushButton *btnEditSave;
    QLabel *labelEdPhoneNumberText;
    QLineEdit *txtEdPhNo;

    void setupUi(QDialog *edit_memeber)
    {
        if (edit_memeber->objectName().isEmpty())
            edit_memeber->setObjectName(QString::fromUtf8("edit_memeber"));
        edit_memeber->resize(800, 600);
        lbSignUpText = new QLabel(edit_memeber);
        lbSignUpText->setObjectName(QString::fromUtf8("lbSignUpText"));
        lbSignUpText->setGeometry(QRect(220, 20, 361, 30));
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
        labelBorder1 = new QLabel(edit_memeber);
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
        txtEditNam = new QLineEdit(edit_memeber);
        txtEditNam->setObjectName(QString::fromUtf8("txtEditNam"));
        txtEditNam->setGeometry(QRect(90, 92, 661, 31));
        txtEditNam->setToolTipDuration(-1);
        txtEditNam->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelEdMebmberNTitle = new QLabel(edit_memeber);
        labelEdMebmberNTitle->setObjectName(QString::fromUtf8("labelEdMebmberNTitle"));
        labelEdMebmberNTitle->setGeometry(QRect(28, 92, 61, 31));
        labelEdMebmberNTitle->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdMebmberNTitle->setAlignment(Qt::AlignCenter);
        labelEdUserNameText = new QLabel(edit_memeber);
        labelEdUserNameText->setObjectName(QString::fromUtf8("labelEdUserNameText"));
        labelEdUserNameText->setGeometry(QRect(28, 140, 91, 31));
        labelEdUserNameText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdUserNameText->setAlignment(Qt::AlignCenter);
        txtEditUser = new QLineEdit(edit_memeber);
        txtEditUser->setObjectName(QString::fromUtf8("txtEditUser"));
        txtEditUser->setGeometry(QRect(120, 140, 631, 31));
        txtEditUser->setToolTipDuration(-1);
        txtEditUser->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelEdPasswordText = new QLabel(edit_memeber);
        labelEdPasswordText->setObjectName(QString::fromUtf8("labelEdPasswordText"));
        labelEdPasswordText->setGeometry(QRect(28, 190, 91, 31));
        labelEdPasswordText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdPasswordText->setAlignment(Qt::AlignCenter);
        txtEditPass = new QLineEdit(edit_memeber);
        txtEditPass->setObjectName(QString::fromUtf8("txtEditPass"));
        txtEditPass->setGeometry(QRect(122, 190, 631, 31));
        txtEditPass->setToolTipDuration(-1);
        txtEditPass->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        txtEditEmail = new QLineEdit(edit_memeber);
        txtEditEmail->setObjectName(QString::fromUtf8("txtEditEmail"));
        txtEditEmail->setGeometry(QRect(90, 240, 661, 31));
        txtEditEmail->setToolTipDuration(-1);
        txtEditEmail->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelEdEmailText = new QLabel(edit_memeber);
        labelEdEmailText->setObjectName(QString::fromUtf8("labelEdEmailText"));
        labelEdEmailText->setGeometry(QRect(28, 240, 61, 31));
        labelEdEmailText->setStyleSheet(QString::fromUtf8("/* Name: */\n"
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
        labelEdEmailText->setAlignment(Qt::AlignCenter);
        labelEdBirthdayText = new QLabel(edit_memeber);
        labelEdBirthdayText->setObjectName(QString::fromUtf8("labelEdBirthdayText"));
        labelEdBirthdayText->setGeometry(QRect(122, 290, 81, 31));
        labelEdBirthdayText->setStyleSheet(QString::fromUtf8("/*birthday text*/\n"
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
        labelEdBirthdayText->setAlignment(Qt::AlignCenter);
        labelEdGenderText = new QLabel(edit_memeber);
        labelEdGenderText->setObjectName(QString::fromUtf8("labelEdGenderText"));
        labelEdGenderText->setGeometry(QRect(498, 292, 71, 31));
        labelEdGenderText->setStyleSheet(QString::fromUtf8("/*Gender Text*/\n"
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
        labelEdGenderText->setAlignment(Qt::AlignCenter);
        EdtSelectDate = new QDateEdit(edit_memeber);
        EdtSelectDate->setObjectName(QString::fromUtf8("EdtSelectDate"));
        EdtSelectDate->setGeometry(QRect(210, 290, 131, 31));
        EdtSelectDate->setStyleSheet(QString::fromUtf8("/*boader Date*/\n"
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
        EdtSelectDate->setWrapping(true);
        EdtSelectDate->setFrame(true);
        EdtSelectDate->setAlignment(Qt::AlignCenter);
        EdtSelectDate->setAccelerated(true);
        EdtSelectDate->setKeyboardTracking(true);
        cBxEdGen = new QComboBox(edit_memeber);
        cBxEdGen->setObjectName(QString::fromUtf8("cBxEdGen"));
        cBxEdGen->setGeometry(QRect(572, 292, 131, 31));
        cBxEdGen->setStyleSheet(QString::fromUtf8("/*boader Gender*/\n"
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
        labelEdAdressText = new QLabel(edit_memeber);
        labelEdAdressText->setObjectName(QString::fromUtf8("labelEdAdressText"));
        labelEdAdressText->setGeometry(QRect(28, 344, 81, 31));
        labelEdAdressText->setStyleSheet(QString::fromUtf8("/*Address Text*/\n"
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
        labelEdAdressText->setAlignment(Qt::AlignCenter);
        txtEdAdd = new QLineEdit(edit_memeber);
        txtEdAdd->setObjectName(QString::fromUtf8("txtEdAdd"));
        txtEdAdd->setGeometry(QRect(109, 346, 641, 30));
        txtEdAdd->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
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
        chB_EditEmails = new QCheckBox(edit_memeber);
        chB_EditEmails->setObjectName(QString::fromUtf8("chB_EditEmails"));
        chB_EditEmails->setGeometry(QRect(640, 450, 16, 16));
        chB_EditEmails->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 40px;\n"
"height: 40px;\n"
"left: 627px;\n"
"top: 545px;\n"
""));
        labelEDRecieveEmailText = new QLabel(edit_memeber);
        labelEDRecieveEmailText->setObjectName(QString::fromUtf8("labelEDRecieveEmailText"));
        labelEDRecieveEmailText->setGeometry(QRect(480, 440, 131, 31));
        labelEDRecieveEmailText->setStyleSheet(QString::fromUtf8("/*Address Text*/\n"
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
        labelEDRecieveEmailText->setAlignment(Qt::AlignCenter);
        btnEditSave = new QPushButton(edit_memeber);
        btnEditSave->setObjectName(QString::fromUtf8("btnEditSave"));
        btnEditSave->setGeometry(QRect(630, 490, 121, 41));
        btnEditSave->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
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
        labelEdPhoneNumberText = new QLabel(edit_memeber);
        labelEdPhoneNumberText->setObjectName(QString::fromUtf8("labelEdPhoneNumberText"));
        labelEdPhoneNumberText->setGeometry(QRect(28, 390, 81, 31));
        labelEdPhoneNumberText->setStyleSheet(QString::fromUtf8("/*Address Text*/\n"
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
        labelEdPhoneNumberText->setAlignment(Qt::AlignCenter);
        txtEdPhNo = new QLineEdit(edit_memeber);
        txtEdPhNo->setObjectName(QString::fromUtf8("txtEdPhNo"));
        txtEdPhNo->setGeometry(QRect(109, 390, 641, 30));
        txtEdPhNo->setStyleSheet(QString::fromUtf8("/*Border Sign-up 4 */\n"
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

        retranslateUi(edit_memeber);

        QMetaObject::connectSlotsByName(edit_memeber);
    } // setupUi

    void retranslateUi(QDialog *edit_memeber)
    {
        edit_memeber->setWindowTitle(QApplication::translate("edit_memeber", "Dialog", nullptr));
        lbSignUpText->setText(QApplication::translate("edit_memeber", "Edit Memeber Details", nullptr));
        labelBorder1->setText(QString());
        txtEditNam->setText(QString());
        labelEdMebmberNTitle->setText(QApplication::translate("edit_memeber", "Name:", nullptr));
        labelEdUserNameText->setText(QApplication::translate("edit_memeber", "Username:", nullptr));
        txtEditUser->setText(QString());
        labelEdPasswordText->setText(QApplication::translate("edit_memeber", "Password:", nullptr));
        txtEditPass->setText(QString());
        txtEditEmail->setText(QString());
        labelEdEmailText->setText(QApplication::translate("edit_memeber", "Email:", nullptr));
        labelEdBirthdayText->setText(QApplication::translate("edit_memeber", "Birthday:", nullptr));
        labelEdGenderText->setText(QApplication::translate("edit_memeber", "Gender:", nullptr));
        labelEdAdressText->setText(QApplication::translate("edit_memeber", "Address:", nullptr));
        chB_EditEmails->setText(QString());
        labelEDRecieveEmailText->setText(QApplication::translate("edit_memeber", "Recieve Emails:", nullptr));
        btnEditSave->setText(QApplication::translate("edit_memeber", "Save", nullptr));
        labelEdPhoneNumberText->setText(QApplication::translate("edit_memeber", "Phone:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_memeber: public Ui_edit_memeber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_MEMEBER_H
