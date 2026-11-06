#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "Account successfully created" << endl;
    }

    // Member function to display account details
    void displayAccount() {
        cout << "\n--- Bank Account Details ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: KSh " << accountBalance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    // Create an object of the BankAccount class
    BankAccount account("Collins Atuta", 123456, 50000.00);

    // Display account details
    account.displayAccount();

    return 0;
}