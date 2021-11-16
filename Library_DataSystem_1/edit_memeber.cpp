#include "edit_memeber.h"
#include "ui_edit_memeber.h"

#include <QFileDialog>
#include <QMessageBox>

edit_memeber::edit_memeber(Member* currentMeb, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_memeber)
{
    ui->setupUi(this);
    this->currentMeb = currentMeb;

    //Editing Members' details


    if(currentMeb != nullptr)
    {
        //Adding Gender list

        list.push_back("Male");
        list.push_back("Female");
        list.push_back("Nonbinary");
        list.push_back("Other");

        //View Gender list

        ui->cBxEdGen->addItems(list);



        ui->txtEditNam->setText(currentMeb->getMebName());
        ui->txtEditUser->setText(currentMeb->getUserName());
        ui->txtEditPass->setText(currentMeb->getMebPass());
        ui->txtEditEmail->setText(currentMeb->getMebEmail());
        QDate bDate = QDate::currentDate();
        QString date = bDate.toString();
        ui->EdtSelectDate->setDate(bDate);
//        QDate Bdate = QDate::fromString(currentMeb->getMebBirthday());
//        ui->EdtSelectDate->setDate(Bdate);
        ui->cBxEdGen->setCurrentText(currentMeb->getMebGen());
        ui->txtEdAdd->setText(currentMeb->getMebAddress());
        ui->txtEdPhNo->setText(currentMeb->getMebPh());


    }

    //Connections

    connect(ui->btnEditSave, &QPushButton::clicked,
            this, &edit_memeber::comfirmMebUpdate);

}

edit_memeber::~edit_memeber()
{
    delete ui;
}

void edit_memeber::comfirmMebUpdate()
{

    QString EdtName = ui->txtEditNam->text();
    QString EdtUser = ui->txtEditUser->text();
    QString EdtPass = ui->txtEditPass->text();
    QString EdtEmail = ui->txtEditEmail->text();
    QString EdtBdate = ui->EdtSelectDate->text();
    QString EdtGen= ui->cBxEdGen->currentText();
    QString EdtAdd = ui->txtEdAdd->text();
    QString EdtPh = ui->txtEdPhNo->text();


    if(EdtName.trimmed() != "")
    {
        currentMeb->setMebName(EdtName);
        currentMeb->setUsername(EdtUser);
        currentMeb->setUserPass(EdtPass);
        currentMeb->setMebEmail(EdtEmail);
        currentMeb->setMebBirth(EdtBdate);
        currentMeb->setMebGen(EdtGen);
        currentMeb->setMebAddress(EdtAdd);
        currentMeb->setMebPh(EdtPh);

        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must not leave name blank");
        mb.exec();
    }

}

