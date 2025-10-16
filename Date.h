#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    Date () ;
    Date(int d, int m, int y) ;
    
    void displayDate() const ;

    int get_day() const;
    int get_month() const;
    int get_year() const;

    void set_day(int d);
    void set_month(int m);
    void set_year(int y);

    void printDate() const;

    ~Date();
};

#endif