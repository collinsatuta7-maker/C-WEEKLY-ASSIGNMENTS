
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    // Function to input book details
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    // Function to borrow a book
    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "\nBook borrowed successfully!\n";
        } else {
            cout << "\nSorry, no copies are available.\n";
        }
    }

    // Function to display book details
    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};

int main() {
    // Create an object of the Book class
    Book book1;

    // Input book details
    book1.inputDetails();

    // Borrow a book
    book1.borrowBook();

    // Display updated book details
    book1.displayDetails();

    return 0;
}
