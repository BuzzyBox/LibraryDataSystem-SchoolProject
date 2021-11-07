#include "member.h"

Member::Member(QString mebName, QString mebUsername, QString mebPassword,
                  QString mebEmail, QString birthDate, QString mebGender, QString mebAddress,  QString phoneNum,
                  QString ranNo) //
{
    this->mebName = mebName;
    this->mebUsername = mebUsername;
    this->mebPassword = mebPassword;
    this->mebEmail = mebEmail;
    this->birthDate = birthDate;
    this->mebGender = mebGender;
    this->mebAddress = mebAddress;
    this->phoneNum = phoneNum;
    this->ranNo = ranNo;

}

//Setters

void Member::setMebName(QString mebName)
{
    this->mebName = mebName;
}
void Member::setUsername(QString mebUsername)
{
    this->mebUsername = mebUsername;
}
void Member::setUserPass(QString mebPassword)
{
    this->mebPassword = mebPassword;
}

void Member::setMebBirth(QString birthDate)
{
    this->birthDate = birthDate;
}

void Member::setMebEmail(QString mebEmail)
{
    this->mebEmail = mebEmail;
}
void Member::setMebAddress(QString mebAddress)
{
    this->mebAddress = mebAddress;
}
void Member::setMebGen(QString mebGender)
{
    this->mebGender = mebGender;
}
void Member::setMebPh(QString phoneNum)
{
    this->phoneNum = phoneNum;
}
void Member::setRandomNo(QString ranNo)
{
    this->ranNo = ranNo;
}

//Getters

QString Member::getMebName() const
{
    return mebName;
}
QString Member::getUserName() const
{
    return mebUsername;
}
QString Member::getMebPass() const
{
    return mebPassword;
}
QString Member::getMebBirthday() const
{
    return birthDate;
}
QString Member::getMebEmail() const
{
    return mebEmail;
}
QString Member::getMebGen() const
{
    return mebGender;
}
QString Member::getMebAddress() const
{
    return mebAddress;
}
QString Member::getMebPh() const
{
    return phoneNum;
}
QString Member::getRandomNo() const
{
    return ranNo;
}
