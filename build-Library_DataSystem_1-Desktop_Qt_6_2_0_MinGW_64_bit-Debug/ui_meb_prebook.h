/********************************************************************************
** Form generated from reading UI file 'meb_prebook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEB_PREBOOK_H
#define UI_MEB_PREBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_meb_prebook
{
public:
    QLabel *labelPrebookListText;
    QListWidget *ItemPrebook;
    QLabel *labelGreyBorderPB;
    QLabel *labelGreyBorderPB_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *lbName;
    QLabel *label_4;
    QLabel *lbMID;
    QLabel *label_6;
    QLabel *lbTitle;
    QLabel *label_8;
    QLabel *lbBID;
    QLabel *label_10;
    QLabel *lbDB;
    QLabel *label_12;
    QLabel *lbRD;

    void setupUi(QDialog *meb_prebook)
    {
        if (meb_prebook->objectName().isEmpty())
            meb_prebook->setObjectName(QString::fromUtf8("meb_prebook"));
        meb_prebook->resize(800, 600);
        labelPrebookListText = new QLabel(meb_prebook);
        labelPrebookListText->setObjectName(QString::fromUtf8("labelPrebookListText"));
        labelPrebookListText->setGeometry(QRect(197, 20, 360, 30));
        labelPrebookListText->setStyleSheet(QString::fromUtf8("/*Text*/\n"
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
        labelPrebookListText->setAlignment(Qt::AlignCenter);
        ItemPrebook = new QListWidget(meb_prebook);
        ItemPrebook->setObjectName(QString::fromUtf8("ItemPrebook"));
        ItemPrebook->setGeometry(QRect(20, 110, 521, 451));
        ItemPrebook->setStyleSheet(QString::fromUtf8("/*Border 2 */\n"
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
        labelGreyBorderPB = new QLabel(meb_prebook);
        labelGreyBorderPB->setObjectName(QString::fromUtf8("labelGreyBorderPB"));
        labelGreyBorderPB->setGeometry(QRect(10, 100, 541, 471));
        labelGreyBorderPB->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labelGreyBorderPB_2 = new QLabel(meb_prebook);
        labelGreyBorderPB_2->setObjectName(QString::fromUtf8("labelGreyBorderPB_2"));
        labelGreyBorderPB_2->setGeometry(QRect(570, 100, 211, 471));
        labelGreyBorderPB_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        label = new QLabel(meb_prebook);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 631, 31));
        label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        label_2 = new QLabel(meb_prebook);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 120, 101, 20));
        label_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        lbName = new QLabel(meb_prebook);
        lbName->setObjectName(QString::fromUtf8("lbName"));
        lbName->setGeometry(QRect(590, 150, 171, 20));
        lbName->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_4 = new QLabel(meb_prebook);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(640, 180, 101, 20));
        label_4->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        lbMID = new QLabel(meb_prebook);
        lbMID->setObjectName(QString::fromUtf8("lbMID"));
        lbMID->setGeometry(QRect(590, 210, 171, 20));
        lbMID->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_6 = new QLabel(meb_prebook);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(650, 240, 101, 20));
        label_6->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        lbTitle = new QLabel(meb_prebook);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(590, 270, 171, 20));
        lbTitle->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_8 = new QLabel(meb_prebook);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(650, 300, 101, 20));
        label_8->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        lbBID = new QLabel(meb_prebook);
        lbBID->setObjectName(QString::fromUtf8("lbBID"));
        lbBID->setGeometry(QRect(590, 330, 171, 20));
        lbBID->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_10 = new QLabel(meb_prebook);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(640, 360, 101, 20));
        label_10->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        lbDB = new QLabel(meb_prebook);
        lbDB->setObjectName(QString::fromUtf8("lbDB"));
        lbDB->setGeometry(QRect(590, 390, 171, 20));
        lbDB->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        label_12 = new QLabel(meb_prebook);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(590, 470, 191, 31));
        label_12->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 104px;\n"
"height: 28px;\n"
"left: 65px;\n"
"top: 136px;\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: normal;\n"
"font-size: 14px;\n"
"line-height: 22px;\n"
"/* or 92% */\n"
"\n"
"text-align: center;\n"
"letter-spacing: -0.408px;\n"
""));
        lbRD = new QLabel(meb_prebook);
        lbRD->setObjectName(QString::fromUtf8("lbRD"));
        lbRD->setGeometry(QRect(590, 510, 171, 20));
        lbRD->setStyleSheet(QString::fromUtf8("position: absolute;\n"
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
        labelGreyBorderPB->raise();
        labelPrebookListText->raise();
        ItemPrebook->raise();
        labelGreyBorderPB_2->raise();
        label->raise();
        label_2->raise();
        lbName->raise();
        label_4->raise();
        lbMID->raise();
        label_6->raise();
        lbTitle->raise();
        label_8->raise();
        lbBID->raise();
        label_10->raise();
        lbDB->raise();
        label_12->raise();
        lbRD->raise();

        retranslateUi(meb_prebook);

        QMetaObject::connectSlotsByName(meb_prebook);
    } // setupUi

    void retranslateUi(QDialog *meb_prebook)
    {
        meb_prebook->setWindowTitle(QCoreApplication::translate("meb_prebook", "Dialog", nullptr));
        labelPrebookListText->setText(QCoreApplication::translate("meb_prebook", "Prebooks List", nullptr));
        labelGreyBorderPB->setText(QString());
        labelGreyBorderPB_2->setText(QString());
        label->setText(QCoreApplication::translate("meb_prebook", "This is a list of members who have requested to prebook a currently un-available book from the library.", nullptr));
        label_2->setText(QCoreApplication::translate("meb_prebook", "Member Name", nullptr));
        lbName->setText(QCoreApplication::translate("meb_prebook", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("meb_prebook", "Member ID", nullptr));
        lbMID->setText(QCoreApplication::translate("meb_prebook", "ID", nullptr));
        label_6->setText(QCoreApplication::translate("meb_prebook", "Book Title", nullptr));
        lbTitle->setText(QCoreApplication::translate("meb_prebook", "Title", nullptr));
        label_8->setText(QCoreApplication::translate("meb_prebook", "Book ID", nullptr));
        lbBID->setText(QCoreApplication::translate("meb_prebook", "ID", nullptr));
        label_10->setText(QCoreApplication::translate("meb_prebook", "Book Due Back", nullptr));
        lbDB->setText(QCoreApplication::translate("meb_prebook", "Date Back", nullptr));
        label_12->setText(QCoreApplication::translate("meb_prebook", "Member requested prebook on", nullptr));
        lbRD->setText(QCoreApplication::translate("meb_prebook", "Requested Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class meb_prebook: public Ui_meb_prebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEB_PREBOOK_H
