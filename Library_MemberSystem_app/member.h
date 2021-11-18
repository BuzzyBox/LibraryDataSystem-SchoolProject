#ifndef MEMBER_H
#define MEMBER_H
#include <QString>
#include <QDate>

class Member
{
private:
    //QString mebID;
    QString mebName;
    QString mebUsername;
    QString mebPassword;
    QString birthDate;
    QString mebEmail;
    QString mebAddress;
    QString mebGender;
    QString phoneNum;
    QString ranNo;
    QString loan1;
    QString loan2;
    QString loan3;
    QString return1;
    QString return2;
    QString return3;

public:

    Member(QString mebName, QString mebUsername, QString mebPassword,
           QString mebEmail, QString birthDate, QString mebGender, QString mebAddress,  QString phoneNum,
           QString ranNo, QString loan1, QString loan2, QString loan3, QString return1, QString return2,
           QString return3);

    //Setters

    void setMebName(QString mebName);
    void setUsername(QString mebUsername);
    void setUserPass(QString mebPassword);
    void setMebBirth(QString birthDate);
    void setMebEmail(QString mebEmail);
    void setMebAddress(QString mebAddress);
    void setMebGen(QString mebGender);
    void setMebPh(QString phoneNum);

    //Random Setter

    void setRandomNo(QString ranNo);

    //Loans and returns Setters
    void setLoan1(QString loan1);
    void setLoan2(QString loan2);
    void setLoan3(QString loan3);
    void setReturn1(QString return1);
    void setReturn2(QString return2);
    void setReturn3(QString return3);


    //Getters

    QString getMebName() const;
    QString getUserName() const;
    QString getMebPass() const;
    QString getMebBirthday() const;
    QString getMebEmail() const;
    QString getMebAddress() const;
    QString getMebGen() const;
    QString getMebPh() const;

    //Random Getter

    QString getRandomNo() const;

    //Loan and Return Getters

    QString getLoan1() const;
    QString getLoan2() const;
    QString getLoan3() const;
    QString getReturn1() const;
    QString getReturn2() const;
    QString getReturn3() const;



};

#endif // MEMBER_H

