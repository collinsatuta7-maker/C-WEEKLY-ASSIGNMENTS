#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string title;
    char choice;


    ofstream outFile("borrowed_books.txt", ios::app);

    if (!outFile) {
        cerr << "Error: Could not open borrowed_books.txt" << endl;
        return 1;
    }

    do {
        cout << "Enter book title: ";
        getline(cin, title);

        if (title.empty()) {
            cout << "Title cannot be empty." << endl;
        } else {
            outFile << title << endl;
            if (outFile.good()) {
                cout << "\"" << title << "\" was stored successfully." << endl;
            } else {
                cerr << "Error: Failed to write the title." << endl;
            }
        }

        cout << "Add another book? (y/n): ";
        cin >> choice;
        cin.ignore(); 

    } while (choice == 'y' || choice == 'Y');

    outFile.close();
    cout << "All records saved to borrowed_books.txt" << endl;
    return 0;
}