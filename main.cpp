#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library library;

    library.addBook(Book("C++ Basics", "Rhylee", "001"));
    library.addBook(Book("OOP Concepts", "Mitchele", "002"));

    library.registerUser(User(1, "Halimah"));

    library.borrowBook(1, "C++ Basics");
    library.returnBook(1, "C++ Basics");

    return 0;
}