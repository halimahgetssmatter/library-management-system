#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    vector<Book> books;
    vector<User> users;

public:
    void addBook(Book book);
    void registerUser(User user);

    Book* searchBook(string title);
    User* searchUser(int id);

    void borrowBook(int userID, string title);
    void returnBook(int userID, string title);
};

#endif