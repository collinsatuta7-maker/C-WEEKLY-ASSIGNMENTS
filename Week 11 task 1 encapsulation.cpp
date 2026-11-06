#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    // Private data members
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    // Function to input employee details
    void setEmployeeDetails()
    {
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate net salary
    double calculateSalary()
    {
        double allowance = 0.10 * basicSalary;
        double netSalary = basicSalary + allowance;

        return netSalary;
    }

    // Function to display employee details
    void displayEmployeeDetails()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main()
{
    // Create an object of Employee class
    Employee emp;

    // Input employee details
    emp.setEmployeeDetails();

    // Display employee details
    emp.displayEmployeeDetails();

    return 0;
}