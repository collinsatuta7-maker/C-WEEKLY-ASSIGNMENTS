
#include <iostream>
#include <string.h>
using namespace std;

class Payment {
public:

    // Cash payment
    void processPayment(int amount) {
        cout << "Cash Payment: Ksh. " << amount << endl;
    }

    // Card payment
    void processPayment(int amount, int fee) {
        int total = amount + fee;
        cout << "Card Payment: Ksh. " << total << endl;
    }

    // Mobile payment
    void processPayment(int amount, int fee, int discount) {
        int total = amount + fee - discount;
        cout << "Mobile Payment: Ksh. " << total << endl;
    }
};

int main() {
    // Create an object
    Payment p1;

    // Demonstrate all three payment methods
    p1.processPayment(1000);

    p1.processPayment(2000, 100);

    p1.processPayment(3000, 150, 200);

    return 0;
}
