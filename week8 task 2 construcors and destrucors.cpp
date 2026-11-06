#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;

        cout << "Room booking confirmed" << endl;
    }

    // Member function to display booking details
    void displayBooking() {
        cout << "\n--- Room Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days Booked: " << daysBooked << endl;
    }

    // Destructor
    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    // Create an object of the RoomBooking class
    RoomBooking booking("Collins Atuta", 205, 3);

    // Display booking details
    booking.displayBooking();

    return 0;
}