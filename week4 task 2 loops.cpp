#include <iostream>
using namespace std;

int main() {
    double balance, withdrawalAmount;

    // Input initial account balance
    cout << "Enter account balance: ";
    cin >> balance;

    // Repeat withdrawals while balance is sufficient
    while (balance > 0) {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawalAmount;

        // Check whether withdrawal exceeds balance
        if (withdrawalAmount > balance) {
            cout << "Insufficient balance!" << endl;
            break;
        }

        // Deduct withdrawal amount
        balance = balance - withdrawalAmount;

        // Display remaining balance
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: " << balance << endl;

        // Stop when balance becomes zero
        if (balance == 0) {
            cout << "Your balance is zero. Transaction stopped." << endl;
            break;
        }
    }

    return 0;
}