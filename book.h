#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool isAvailable;

public:
    Book(string t, string a, string i);

    string getTitle();
    string getAuthor();
    string getISBN();
    bool available();

    void borrowBook();
    void returnBook();
};

#endif