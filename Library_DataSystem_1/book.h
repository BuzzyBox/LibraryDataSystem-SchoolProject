#ifndef BOOK_H
#define BOOK_H
#include <QString>

class Book
{
private:
    QString bookID;
    QString title;
    QString author;
    QString datePublish;
    QString imageFilePath;
    QString descrip;
    int numCopy;
    QString genre;
    QString availability;
    QString dueBack;





public:
    Book( QString title,QString bookID, QString author, QString datePublish,
         QString descrip, int numCopy, QString genre,QString availability,QString dueBack, QString imageFilePath="none.png");
    void setbookID(QString bookID);
    void setTitle(QString title);
    void setAuthor(QString author);
    void setDatePublished(QString datePublish);
    void setImageFilePath(QString imageFilePath);
    void setDescription(QString descrip);
    void setNumCopy(int numCopy);
    void setGenre(QString genre);
    void setAvail(QString availability);
    void setDueBack(QString dueBack);
    QString getbookID();
    QString getTitle();
    QString getAuthor();
    QString getDatePublished();
    QString getImageFilePath();
    QString getDescription();
    int getNumCopy();
    QString getGenre();
    QString getAvail();
    QString getDueBack();
};

#endif // BOOK_H
