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
    QString numOfChildren;
    QString ranNo;

public:

    Member(QString mebName, QString mebUsername, QString mebPassword,
           QString mebEmail, QString birthDate, QString mebGender, QString mebAddress,  QString phoneNum,
           QString ranNo);

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


};

#endif // MEMBER_H
