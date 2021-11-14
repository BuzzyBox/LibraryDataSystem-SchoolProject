/********************************************************************************
** Form generated from reading UI file 'mainwindowmeb.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWMEB_H
#define UI_MAINWINDOWMEB_H

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

class Ui_MainWindowMeb
{
public:
    QAction *actionProfile;
    QAction *actionExit;
    QWidget *centralwidget;
    QListWidget *ItemBook;
    QLabel *labBorder2;
    QLabel *lbIDNum;
    QLabel *lbTitle;
    QLabel *lbDate;
    QLabel *lbAvailability;
    QLabel *labelBookTitleText;
    QLabel *lbGenreTxt;
    QLabel *labBookCover;
    QLabel *labelPublishText;
    QLabel *labelIDnoText;
    QLabel *lbAuthor;
    QLabel *labelAuthorText;
    QLabel *labelAvailabilityText;
    QLabel *labBorder3;
    QPushButton *pbRefresh;
    QLineEdit *lEditSearchBook1;
    QLabel *labBorder1;
    QLabel *labelGenre;
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
        ItemBook = new QListWidget(centralwidget);
        ItemBook->setObjectName(QString::fromUtf8("ItemBook"));
        ItemBook->setGeometry(QRect(19, 69, 480, 271));
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
        labBorder2 = new QLabel(centralwidget);
        labBorder2->setObjectName(QString::fromUtf8("labBorder2"));
        labBorder2->setGeometry(QRect(10, 59, 500, 291));
        labBorder2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        labBorder2->setAlignment(Qt::AlignCenter);
        lbIDNum = new QLabel(centralwidget);
        lbIDNum->setObjectName(QString::fromUtf8("lbIDNum"));
        lbIDNum->setGeometry(QRect(269, 476, 381, 21));
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
        lbTitle = new QLabel(centralwidget);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(220, 372, 430, 21));
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
        lbDate = new QLabel(centralwidget);
        lbDate->setObjectName(QString::fromUtf8("lbDate"));
        lbDate->setGeometry(QRect(279, 441, 141, 21));
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
        lbAvailability = new QLabel(centralwidget);
        lbAvailability->setObjectName(QString::fromUtf8("lbAvailability"));
        lbAvailability->setGeometry(QRect(269, 511, 111, 21));
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
        labelBookTitleText = new QLabel(centralwidget);
        labelBookTitleText->setObjectName(QString::fromUtf8("labelBookTitleText"));
        labelBookTitleText->setGeometry(QRect(158, 371, 51, 22));
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
        lbGenreTxt = new QLabel(centralwidget);
        lbGenreTxt->setObjectName(QString::fromUtf8("lbGenreTxt"));
        lbGenreTxt->setGeometry(QRect(510, 440, 141, 20));
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
        labBookCover = new QLabel(centralwidget);
        labBookCover->setObjectName(QString::fromUtf8("labBookCover"));
        labBookCover->setGeometry(QRect(20, 370, 121, 171));
        labBookCover->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        labBookCover->setFrameShape(QFrame::NoFrame);
        labBookCover->setFrameShadow(QFrame::Plain);
        labelPublishText = new QLabel(centralwidget);
        labelPublishText->setObjectName(QString::fromUtf8("labelPublishText"));
        labelPublishText->setGeometry(QRect(159, 441, 111, 22));
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
        labelIDnoText->setGeometry(QRect(159, 476, 101, 22));
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
        lbAuthor = new QLabel(centralwidget);
        lbAuthor->setObjectName(QString::fromUtf8("lbAuthor"));
        lbAuthor->setGeometry(QRect(239, 406, 411, 21));
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
        labelAuthorText = new QLabel(centralwidget);
        labelAuthorText->setObjectName(QString::fromUtf8("labelAuthorText"));
        labelAuthorText->setGeometry(QRect(157, 406, 71, 22));
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
        labelAvailabilityText = new QLabel(centralwidget);
        labelAvailabilityText->setObjectName(QString::fromUtf8("labelAvailabilityText"));
        labelAvailabilityText->setGeometry(QRect(164, 511, 91, 22));
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
        labBorder3 = new QLabel(centralwidget);
        labBorder3->setObjectName(QString::fromUtf8("labBorder3"));
        labBorder3->setGeometry(QRect(10, 360, 661, 191));
        labBorder3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 104px;\n"
"left: 34px;\n"
"top: 112px;\n"
"\n"
"background: #C4C4C4;\n"
"border-radius: 20px;"));
        pbRefresh = new QPushButton(centralwidget);
        pbRefresh->setObjectName(QString::fromUtf8("pbRefresh"));
        pbRefresh->setGeometry(QRect(520, 13, 141, 31));
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
        lEditSearchBook1 = new QLineEdit(centralwidget);
        lEditSearchBook1->setObjectName(QString::fromUtf8("lEditSearchBook1"));
        lEditSearchBook1->setGeometry(QRect(18, 20, 480, 21));
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
        labBorder1 = new QLabel(centralwidget);
        labBorder1->setObjectName(QString::fromUtf8("labBorder1"));
        labBorder1->setGeometry(QRect(8, 10, 500, 41));
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
        labelGenre = new QLabel(centralwidget);
        labelGenre->setObjectName(QString::fromUtf8("labelGenre"));
        labelGenre->setGeometry(QRect(420, 440, 91, 22));
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
        MainWindowMeb->setCentralWidget(centralwidget);
        labBorder3->raise();
        labBorder1->raise();
        labBorder2->raise();
        ItemBook->raise();
        lbIDNum->raise();
        lbTitle->raise();
        lbDate->raise();
        lbAvailability->raise();
        labelBookTitleText->raise();
        lbGenreTxt->raise();
        labBookCover->raise();
        labelPublishText->raise();
        labelIDnoText->raise();
        lbAuthor->raise();
        labelAuthorText->raise();
        labelAvailabilityText->raise();
        pbRefresh->raise();
        lEditSearchBook1->raise();
        labelGenre->raise();
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
        menuProfile->addAction(actionProfile);
        menuProfile->addAction(actionExit);

        retranslateUi(MainWindowMeb);

        QMetaObject::connectSlotsByName(MainWindowMeb);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowMeb)
    {
        MainWindowMeb->setWindowTitle(QCoreApplication::translate("MainWindowMeb", "MainWindowMeb", nullptr));
        actionProfile->setText(QCoreApplication::translate("MainWindowMeb", "Profile", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindowMeb", "Exit", nullptr));
        labBorder2->setText(QString());
        lbIDNum->setText(QCoreApplication::translate("MainWindowMeb", "ID Number", nullptr));
        lbTitle->setText(QCoreApplication::translate("MainWindowMeb", "Title of Book", nullptr));
        lbDate->setText(QCoreApplication::translate("MainWindowMeb", "Date of Book", nullptr));
        lbAvailability->setText(QCoreApplication::translate("MainWindowMeb", "Book Availability", nullptr));
        labelBookTitleText->setText(QCoreApplication::translate("MainWindowMeb", "Title:", nullptr));
        lbGenreTxt->setText(QCoreApplication::translate("MainWindowMeb", "Genre", nullptr));
        labBookCover->setText(QString());
        labelPublishText->setText(QCoreApplication::translate("MainWindowMeb", "Publish Date:", nullptr));
        labelIDnoText->setText(QCoreApplication::translate("MainWindowMeb", "ID Number:", nullptr));
        lbAuthor->setText(QCoreApplication::translate("MainWindowMeb", "Author of Book", nullptr));
        labelAuthorText->setText(QCoreApplication::translate("MainWindowMeb", "Author:", nullptr));
        labelAvailabilityText->setText(QCoreApplication::translate("MainWindowMeb", "Availability:", nullptr));
        labBorder3->setText(QString());
        pbRefresh->setText(QCoreApplication::translate("MainWindowMeb", "Refresh", nullptr));
        lEditSearchBook1->setText(QCoreApplication::translate("MainWindowMeb", "Search Books", nullptr));
        labBorder1->setText(QString());
        labelGenre->setText(QCoreApplication::translate("MainWindowMeb", "Genre:", nullptr));
        menuProfile->setTitle(QCoreApplication::translate("MainWindowMeb", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowMeb: public Ui_MainWindowMeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWMEB_H
