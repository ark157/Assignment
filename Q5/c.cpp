#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookName;
    string authorName;
    float price;
    string ISBN;

public:
    Book(string bName, string aName, float p, string isbn) {
        bookName = bName;
        authorName = aName;
        price = p;
        ISBN = isbn;
    }

    Book(const Book &obj) {
        bookName = obj.bookName;
        authorName = obj.authorName;
        price = obj.price;
        ISBN = obj.ISBN;
    }

    void display() {
        cout << "\nBook Name: " << bookName << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Price: $" << price << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

int main() {
    Book book1("The Alchemist", "Paulo Coelho", 9.99, "978-0061122415");
    Book book2 = book1;
    cout << "Details of book 1:";
    book1.display();
    cout << "\nDetails of book 2 (copied from book 1):";
    book2.display();

    return 0;
}
