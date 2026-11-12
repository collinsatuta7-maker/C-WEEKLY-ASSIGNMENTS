
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        displayPerson();

        cout << "Admission Number: "
             << admissionNumber << endl;

        cout << "Class: " << studentClass << endl;
    }
};

// Main function
int main() {
    Student s;

    cout << "ENTER STUDENT DETAILS\n";

    s.inputStudent();

    cout << "\nSTUDENT DETAILS\n";
    s.displayStudent();

    return 0;
}
