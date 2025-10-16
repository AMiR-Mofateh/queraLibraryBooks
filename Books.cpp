#include "books.h"

int Book::bookCount = 0;

Book::Book() 
    : title("Unknown"), author("Unknown"), publisher("Unknown"), ISBN("0000"), publicationDate(0,0,0), category(0) {
        bookCount++;
    }

Book::Book(string t, string a, string p, string i, Date d, int c) 
    : title(t), author(a), publisher(p), ISBN(i), publicationDate(d), category(c) {
        bookCount++;
    }

Book::Book(string t, string a, Date d, int c) 
    : title(t), author(a), publisher("Unknown"),  ISBN("0000"), publicationDate(d), category(c) {
        bookCount++;
    }

Book::Book(string t,  string i, Date d) 
: title(t),author("Unknown") , publisher("Unknown"),ISBN(i), publicationDate(d) , category(0) {
    bookCount++;
}
Book::~Book() {
    cout << "Book destroyed: " << title << endl;
    bookCount--;
}

string Book::get_title() const {
    return title;
}

string Book::get_author() const {
    return author;
}

string Book::get_publisher() const {
    return publisher;
}

string Book::get_ISBN() const {
    return ISBN;
}

Date Book::get_publicationDate() const {
    return publicationDate;
}

int Book::get_category() const {
    return category;
}

void Book::set_ISBN(string i) {
    ISBN = i;
}

void Book::set_publicationDate(Date d) {
    publicationDate = d;
}

void Book::set_category(int c) {
    category = c;
}

void Book::printBook() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Publication Date: " << publicationDate.get_day() << "/" << publicationDate.get_month() << "/" << publicationDate.get_year() << endl;

    if (category == 1) 
    cout << "Category: Educational " << endl;
    else if (category == 2)
    cout << "Category: Novel " << endl;
    else if (category == 3)
        cout << "Category: Research " << endl;
    else if (category == 4)
        cout << "Category: Other " << endl;
    else
    cout << "Category: Please enter valid category " << endl;
}

int Book::getBookCount() {
    return bookCount;
}

