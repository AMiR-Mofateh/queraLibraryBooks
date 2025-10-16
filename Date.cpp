#include "date.h"

Date::Date() : day(0), month(0), year(0) {}

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

Date::~Date() {
    cout << "Destructing Date: " << day << "/" << month << "/" << year << endl;
}

void Date::displayDate() const {
    cout << "Publication Date: " << day << "/" << month << "/" << year << endl;
}

int Date::get_day() const {
    return day;
}

int Date::get_month() const {
    return month;
}

int Date::get_year() const {
    return year;
}

void Date::set_day(int d) {
    day = d;
}

void Date::set_month(int m) {
    month = m;
}

void Date::set_year(int y) {
    year = y;
}


void Date::printDate() const {
    cout << year << "/" << month << "/" << day << endl;
}
