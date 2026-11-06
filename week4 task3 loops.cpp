#include <iostream>
#include <string>
using namespace std;

int main() {
    // Predefined username and password
    string correctUsername = "COLLINS ATUTA";
    string correctPassword = "12345";

    string username, password;

    do {
        // Prompt user to enter credentials
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        // Verify credentials
        if (username == correctUsername &&
            password == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    return 0;
}