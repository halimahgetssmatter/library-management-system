#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Book.h"

using namespace std;

class User {
private:
    int userID;
    string name;
    vector<Book*> borrowedBooks;

public:
    User(int id, string n);

    int getID();
    string getName();

    void borrowBook(Book* book);
    void returnBook(Book* book);
    void viewBorrowedBooks();
};

#endif