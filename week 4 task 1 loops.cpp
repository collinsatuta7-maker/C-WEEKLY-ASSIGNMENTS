#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    // Use a for loop to input details for 5 employees
    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter details for Employee " << i << endl;

        cout << "Enter employee name: ";
        getline(cin >> ws, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculate bonus and total salary
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display employee report
        cout << fixed << setprecision(2);
        cout << "\n--- Employee Report ---" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}