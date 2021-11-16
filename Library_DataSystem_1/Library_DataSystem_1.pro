QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_newbook.cpp \
    book.cpp \
    book_report.cpp \
    edit_book.cpp \
    edit_memeber.cpp \
    lognin_menu.cpp \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    overdue_books.cpp \
    signup_menu.cpp \
    welcome_screen.cpp

HEADERS += \
    add_newbook.h \
    book.h \
    book_report.h \
    edit_book.h \
    edit_memeber.h \
    lognin_menu.h \
    mainwindow.h \
    member.h \
    overdue_books.h \
    signup_menu.h \
    welcome_screen.h

FORMS += \
    add_newbook.ui \
    book_report.ui \
    edit_book.ui \
    edit_memeber.ui \
    lognin_menu.ui \
    mainwindow.ui \
    overdue_books.ui \
    signup_menu.ui \
    welcome_screen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
