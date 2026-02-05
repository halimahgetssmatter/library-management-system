#include "Library.h"
#include <iostream>

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::registerUser(User user) {
    users.push_back(user);
}

Book* Library::searchBook(string title) {
    for (auto &book : books) {
        if (book.getTitle() == title) {
            return &book;
        }
    }
    return nullptr;
}

User* Library::searchUser(int id) {
    for (auto &user : users) {
        if (user.getID() == id) {
            return &user;
        }
    }
    return nullptr;
}

void Library::borrowBook(int userID, string title) {
    User* user = searchUser(userID);
    Book* book = searchBook(title);

    if (user && book && book->available()) {
        book->borrowBook();
        user->borrowBook(book);
        cout << "Book borrowed successfully.\n";
    } else {
        cout << "Borrowing failed.\n";
    }
}

void Library::returnBook(int userID, string title) {
    User* user = searchUser(userID);
    Book* book = searchBook(title);

    if (user && book) {
        book->returnBook();
        user->returnBook(book);
        cout << "Book returned successfully.\n";
    }
}