
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: KSh ";
        cin >> feeBalance;
    }

    // Function to process fee payment
    void makePayment() {
        double payment;

        cout << "Enter amount to pay: KSh ";
        cin >> payment;

        if (payment <= 0) {
            cout << "Invalid payment amount!\n";
        } 
        else if (payment > feeBalance) {
            cout << "Payment exceeds the fee balance!\n";
        } 
        else {
            feeBalance = feeBalance - payment;
            cout << "Payment successful!\n";
        }
    }

    // Function to display updated fee status
    void displayStatus() {
        cout << "\n--- STUDENT FEE STATUS ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: KSh "
             << feeBalance << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student1;

    // Input student details
    student1.inputStudent();

    // Process fee payment
    student1.makePayment();

    // Display updated fee status
    student1.displayStatus();

    return 0;
}
