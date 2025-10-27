// Name: Jagger Pulling
// Program Status: Complete
// Description: This program takes file data and calculates gross pay using hourly pay and hours worked, then displays in a table.

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class PayRoll {
    double hourlyPay;
    double hoursWorked;

public:
    void setHourlyPay(double pay) {
        hourlyPay = pay;
    }
    void setHoursWorked(double hours) {
        hoursWorked = hours;
    }
    double calculateGrossPay() {
        return hourlyPay * hoursWorked;
    }

};

int main() {
    //Create Objects
    PayRoll employee[7];

    // Read file
    ifstream data("payroll.dat");

    const int ROWS = 7;

    // Assign values from file
    double pay, hours;
    for (int i = 0; i < ROWS; ++i) {
        data >> pay >> hours;
        employee[i].setHourlyPay(pay);
        employee[i].setHoursWorked(hours);
    }

    // Create header
    cout << "Employee" << "  " << "Gross pay" << endl;
    cout << "========" << "  " << "=========" << endl;

    // Calculate and display gross pay
    double grossPay;
    for (int i = 0; i < ROWS; ++i) {
        grossPay = employee[i].calculateGrossPay();

        cout << setw(4) << i + 1 << ':' ;
        cout << setw(7) << fixed << setprecision(2)<< "$ " << grossPay << endl;
    }


    return 0;
}