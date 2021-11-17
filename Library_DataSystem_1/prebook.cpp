#include "prebook.h"


preBook::preBook(QString Title, QString IDBook,
                 QString dueBack, QString IDMember, QString memberName, QString date)
{
    this->Title=Title;
    this->IDBook=IDBook;
    this->dueBack=dueBack;
    this->IDMember=IDMember;
    this->memberName=memberName;
    this->date=date;
}

void preBook::setTitle(QString Title)
{
    this->Title=Title;
}
void preBook::setIDBook(QString IDBook)
{
    this->IDBook=IDBook;
}
void preBook::setDueBack(QString dueBack)
{
    this->dueBack=dueBack;
}
void preBook::setIDMember(QString IDMember)
{
    this->IDMember=IDMember;
}
void preBook::setMemberName(QString memberName)
{
    this->memberName=memberName;
}
void preBook::setDate(QString date)
{
    this->date=date;
}

QString preBook::getTitle()
{
    return Title;
}
QString preBook::getIDBook()
{
    return IDBook;
}
QString preBook::getDueBack()
{
    return dueBack;
}
QString preBook::getIDMember()
{
    return IDMember;
}
QString preBook::getMemberName()
{
    return memberName;
}
QString preBook::getDate()
{
    return date;
}
