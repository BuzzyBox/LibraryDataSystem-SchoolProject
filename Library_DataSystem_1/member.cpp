#include "member.h"

Member::Member(QString mebName, QString mebUsername, QString mebPassword,
               QString mebEmail, QString birthDate, QString mebGender, QString mebAddress,  QString phoneNum,
               QString ranNo, QString loan1, QString loan2, QString loan3, QString return1, QString return2,
               QString return3,float fees) //
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
    this->loan1 = loan1;
    this->loan2 = loan2;
    this->loan3 = loan3;
    this->return1 = return1;
    this->return2 = return2;
    this->return3 = return3;
    this->fees=fees;

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

void Member::setLoan1(QString loan1)
{
    this->loan1 = loan1;
}
void Member::setLoan2(QString loan2)
{
    this->loan2 = loan2;
}
void Member::setLoan3(QString loan3)
{
    this->loan3 = loan3;
}
void Member::setReturn1(QString return1)
{
    this->return1 = return1;
}
void Member::setReturn2(QString return2)
{
    this->return2 = return2;
}
void Member::setReturn3(QString return3)
{
    this->return3 = return3;
}
void Member::setFees(float fees)
{
    this->fees=fees;
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
QString Member:: getLoan1() const
{
    return loan1;
}
QString Member::getLoan2() const
{
    return loan2;
}
QString Member::getLoan3() const
{
    return loan3;
}
QString Member::getReturn1() const
{
    return return1;
}
QString Member::getReturn2() const
{
    return return2;
}
QString Member::getReturn3() const
{
    return return3;
}
float Member::getFees() const
{
    return fees;
}
