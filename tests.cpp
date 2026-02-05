#include "Library.h"
#include <iostream>

int main() {
    Library lib;
    lib.addBook(Book("Test Book", "Author", "123"));
    lib.registerUser(User(10, "Test User"));

    lib.borrowBook(10, "Test Book");   // positive test
    lib.borrowBook(10, "Test Book");   // negative test

    return 0;
}