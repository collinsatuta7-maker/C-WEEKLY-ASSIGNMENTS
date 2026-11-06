#include <iostream>
using namespace std;

int main() {
    
    double number1, number2, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;


    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result = " << result << endl;
            break;

        case '/':
            
            if (number2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = number1 / number2;
                cout << "Result = " << result << endl;
            }
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}