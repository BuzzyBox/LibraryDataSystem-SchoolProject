#include "book.h"
#include <QString>

Book::Book( QString title,QString bookID, QString author, QString datePublish,
     QString descrip, int numCopy, QString genre, QString availability, QString dueBack, QString imageFilePath)
{
    this->bookID=bookID;
    this->title=title;
    this->author=author;
    this->datePublish=datePublish;
    this->descrip=descrip;
    this->numCopy=numCopy;
    this->imageFilePath=imageFilePath;
    this->genre=genre;
    this->availability=availability;
    this->dueBack=dueBack;
}
void Book::setbookID(QString bookID)
{
   this->bookID=bookID;
}

void Book::setTitle(QString title)
{
    this->title=title;
}
void Book::setAuthor(QString author)
{
    this->author=author;
}
void Book::setDatePublished(QString datePublish)
{
    this->datePublish=datePublish;
}
void Book::setImageFilePath(QString imageFilePath)
{
    this->imageFilePath=imageFilePath;
}
void Book::setDescription(QString descrip)
{
    this->descrip=descrip;
}
void Book::setNumCopy(int numCopy)
{
    this->numCopy=numCopy;
}
void Book::setGenre(QString genre)
{
    this->genre=genre;
}
void Book::setAvail(QString availability)
{
    this->availability=availability;
}
void Book::setDueBack(QString dueBack)
{
    this->dueBack=dueBack;
}
QString Book::getbookID()
{
    return bookID;
}
QString Book::getTitle()
{
    return title;
}
QString Book::getAuthor()
{
    return author;
}
QString Book::getDatePublished()
{
    return datePublish;
}
QString Book::getImageFilePath()
{
    return imageFilePath;
}
QString Book::getDescription()
{
    return descrip;
}
int Book::getNumCopy()
{
    return numCopy;
}
QString Book::getGenre()
{
    return genre;
}
QString Book::getAvail()
{
    return availability;

}
QString Book::getDueBack()
{
    return dueBack;
}
