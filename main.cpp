#include "books.h"
#include "Date.h"
using namespace std;

int main (){

    Book b1("C++ Programming", "Author A", "Publisher A", "1234", Date(1, 1, 2020), 1);
    b1.printBook();
    cout << endl;
    
    Book b2("Golestan", "Saadi", "Publisher B", "5678", Date(2, 2, 2021), 2);
    b2.printBook();
    cout << endl;
    
    Book b3("New medicine", "Author C", "Publisher C", "9101", Date(3, 3, 2022), 3);
    b3.printBook();
    cout << endl;
    
    Book b4("Artificial Intelligence" , "1121", Date(4, 4, 2023));
    b4.printBook();
    cout << endl;
    
    Book b5("Machine Learning", "Author E" , Date(5, 5, 2024) , 1 );
    b5.printBook();
    cout << endl;
    
    Book b6("Deep Learning", "Author F", "Publisher F", "3141", Date(6, 6, 2023), 3);
    b6.printBook();
    cout << endl;
    
    Book b7("Quantum Computing", "Author G", "Publisher G", "2718", Date(7, 7, 2017), 3);
    b7.printBook();
    cout << endl;
    
    Book b8("DitelDitel", "Author H", "Publisher H", "1617", Date(8, 8, 1980), 1);
    b8.printBook();
    cout << endl;
    
    Book b9("Cloud Computing", "Author I", "Publisher I", "1819", Date(9, 9, 2028), 3);
    b9.printBook();
    cout << endl;
    
    Book b10("Masnavi", "Molana", "Publisher J", "1235", Date(10, 10, 1800), 2);
    b10.printBook();
    cout << endl;


    cout << "All books in the library:" << Book::getBookCount() << endl << endl;

    return 0;
}