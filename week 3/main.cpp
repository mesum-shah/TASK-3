#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 3; // Number of slabs
const int COLUMNS = 3; // Number of columns in the matrix

// Function to calculate and display cost for slab 1
void costSlab1(int data[ROWS][COLUMNS]) {
    cout << "Bill for Slab 1 is: ";
    for (int i = 0; i < COLUMNS; ++i) {
            //setw( )function is used for allign the bill amount
        cout << setw(5) << data[0][i] * 10 << " ";
    }
    cout << endl;
}

// Function to calculate and display cost for slab 2
void costSlab2(int data[ROWS][COLUMNS]) {
    cout << "Bill for Slab 2 is: ";
    for (int i = 0; i < COLUMNS; ++i) {
//setw( )function is used for allign the bill amount
        cout << setw(5) << data[1][i] * 15 << " ";
    }
    cout << endl;
}

// Function to calculate and display cost for slab 3
void costSlab3(int data[ROWS][COLUMNS]) {
    cout << "Bill for Slab 3 is: ";
    for (int i = 0; i < COLUMNS; ++i) {
//setw( )function is used for allign the bill amount
        cout << setw(5) << data[2][i] * 20 << " ";
    }
    cout << endl;
}

int main() {
    int studentID = 12345678;
    int data[ROWS][COLUMNS] = {
        {65, 75, 55},  // Slab 1 data
        {170, 150, 120}, // Slab 2 data
        {210, 230, 240} // Slab 3 data
    };

    int choice;
    char repeat;

    do {
        cout << "My Student ID is XY" << studentID << endl;
        cout << "Enter your choice:\n";
        cout << "Press 1 to display the bill of slab 1 and slab 2.\n";
        cout << "Press 2 to display the bill of slab 3.\n";
        cout << "Press any other key to exit.\n";
        cin >> choice;

        switch (choice) {
            case 1:
                costSlab1(data);
                costSlab2(data);
                break;
            case 2:
                costSlab3(data);
                break;
            default:
                return 0; // Exit the program for any other key pressed
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
