#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float score;

    // Enter student details
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    // Determine admission using nested if statements
    cout << "\n--- Admission Decision ---" << endl;
    cout << "Student Name: " << name << endl;

    if (age >= 18) {
        if (score >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}