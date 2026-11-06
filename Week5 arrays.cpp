
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    // 1D Array: Weekly Revenue Tracker
    double revenue[7];
    double totalRevenue = 0.0;
    double averageRevenue;

    string days[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    cout << "====================================\n";
    cout << " HOTEL REVENUE AND OCCUPANCY SYSTEM\n";
    cout << "====================================\n\n";

    cout << "1. WEEKLY REVENUE TRACKER\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for " << days[i] << ": KSh ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    cout << fixed << setprecision(2);
    cout << "\nTotal Weekly Revenue: KSh "
         << totalRevenue << endl;

    cout << "Average Daily Revenue: KSh "
         << averageRevenue << endl;


    // 2D Array: Room Occupancy for One Branch
    int occupancy[5][10];
    int occupied, vacant;

    cout << "\n2. ROOM OCCUPANCY - ONE BRANCH\n";

    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate random occupancy data
    for (int floor = 0; floor < 5; floor++)
    {
        for (int room = 0; room < 10; room++)
        {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display occupied and vacant rooms per floor
    for (int floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacant = 0;

        for (int room = 0; room < 10; room++)
        {
            if (occupancy[floor][room] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        cout << "Floor " << floor + 1
             << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }


    // 3D Array: Multiple Hotel Branches
    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "\n3. MULTIPLE BRANCHES OCCUPANCY\n";

    // Generate random occupancy for all branches
    for (int branch = 0; branch < 3; branch++)
    {
        for (int floor = 0; floor < 5; floor++)
        {
            for (int room = 0; room < 10; room++)
            {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total rooms across all branches: "
         << 3 * 5 * 10 << endl;

    cout << "Total occupied rooms across all branches: "
         << totalOccupied << endl;

    cout << "Total vacant rooms across all branches: "
         << (3 * 5 * 10) - totalOccupied << endl;

    cout << "\n====================================\n";
    cout << "       END OF REPORT\n";
    cout << "====================================\n";

    return 0;
}
