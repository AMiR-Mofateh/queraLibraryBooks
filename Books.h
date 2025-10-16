#include "date.h"
#ifndef BOOKS_H
#define BOOKS_H
#include <string>
#include <iostream>
class Book {
private:    
    string title;
    string author;
    string publisher;
    string ISBN;
    Date publicationDate;
    int category;
public:
    static int bookCount;

    Book();
    Book(string t, string a, string p, string i, Date d, int c) ;
    Book(string t, string a, Date d, int c);
    Book(string t,  string i, Date d);
    ~Book();

    string get_title() const;
    string get_author() const;
    string get_publisher() const;
    string get_ISBN() const;
    Date get_publicationDate() const;
    int get_category() const;

    void set_ISBN(string i);
    void set_publicationDate(Date d);
    void set_category(int c);

    void printBook() const ;

    static int getBookCount() ;


};



#endif