
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter Vehicle Brand: ";
        getline(cin, brand);

        cout << "Enter Year of Manufacture: ";
        cin >> year;
        cin.ignore();
    }

    void displayVehicle() {
        cout << "\nBrand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;

        cout << "Enter Engine Capacity (CC): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();

        cout << "Number of Doors: "
             << numberOfDoors << endl;

        cout << "Engine Capacity: "
             << engineCapacity << " CC" << endl;
    }
};

// Main function
int main() {
    Car c;

    cout << "ENTER CAR DETAILS\n";

    c.inputCar();

    cout << "\nCAR DETAILS\n";
    c.displayCar();

    return 0;
}
