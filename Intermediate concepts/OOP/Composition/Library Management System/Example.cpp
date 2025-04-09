#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Book class
class Book {
private:
    string title;
    string author;
    int pages;

public:
    Book(string t, string a, int p) : title(t), author(a), pages(p) {}

    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }
};

// Library class
class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void listBooks() const {
        for (const auto& book : books) {
            book.displayInfo();
        }
    }
};

int main() {
    // Creating Book objects
    Book book1("1984", "George Orwell", 328);
    Book book2("To Kill a Mockingbird", "Harper Lee", 281);
    Book book3("Moby Dick", "Herman Melville", 585);

    // Creating Library object
    Library library;
    
    // Adding books to the library
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Listing all books in the library
    cout << "Books in the Library:" << endl;
    library.listBooks();

    return 0;
}
