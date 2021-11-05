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

    //

    QString isbn10;
    QString isbn13;
    QString bookId;

    //

    QString bookAvailability;


public:
    Book();
};

#endif // BOOK_H
