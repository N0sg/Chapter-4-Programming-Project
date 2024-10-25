// Chapter 4 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int month, year;
    int days;

    do {
        cout << "Enter a month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "OH brother only 12 months exist in the Juche calendar" << endl;
        }
    } while (month < 1 || month > 12);

    cout << "Please enter a year: ";
    cin >> year;

    bool isLeapYear = false;
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            isLeapYear = true;
        }
    }
    else if (year % 4 == 0) {
        isLeapYear = true;
    }

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        if (isLeapYear) {
            days = 29;
        }
        else {
            days = 28;
        }
        break;
    }
    // I struggled with this so much it was awesome learning case tho

    cout << days << " days" << endl;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
