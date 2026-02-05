#include "User.h"
#include <iostream>

User::User(int id, string n) {
    userID = id;
    name = n;
}

int User::getID() {
    return userID;
}

string User::getName() {
    return name;
}

void User::borrowBook(Book* book) {
    borrowedBooks.push_back(book);
}

void User::returnBook(Book* book) {
    for (int i = 0; i < borrowedBooks.size(); i++) {
        if (borrowedBooks[i] == book) {
            borrowedBooks.erase(borrowedBooks.begin() + i);
            break;
        }
    }
}

void User::viewBorrowedBooks() {
    cout << "Borrowed books:\n";
    for (Book* book : borrowedBooks) {
        cout << "- " << book->getTitle() << endl;
    }
}