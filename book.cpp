#include "Book.h"

Book::Book(string t, string a, string i) {
    title = t;
    author = a;
    isbn = i;
    isAvailable = true;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

string Book::getISBN() {
    return isbn;
}

bool Book::available() {
    return isAvailable;
}

void Book::borrowBook() {
    isAvailable = false;
}

void Book::returnBook() {
    isAvailable = true;
}