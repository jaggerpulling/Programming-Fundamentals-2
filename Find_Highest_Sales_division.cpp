// Name: Jagger Pulling
// Program Status: Complete
// Description: This program asks the user to enter quarterly sales for four divisions
// and displays which division had the highest sales.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
double getSales(string division_name);
void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales);

int main() {
    // Variables to hold sales for each division
    double northeastSales, southeastSales, northwestSales, southwestSales;

    // Get sales figures for each division
    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    northwestSales = getSales("Northwest");
    southwestSales = getSales("Southwest");

    // Determine and display the highest sales
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}

// Function definitions

double getSales(string division_name) {
    double quarterly_sales;

    cout << "Enter the quarterly sales for the " << division_name << " division: ";
    cin >> quarterly_sales;

    // Validate Sales Input
    while (quarterly_sales < 0) {
        cout << "Sales figures cannot be negative. Please re-enter." << endl;
        cout << "Enter the quarterly sales for the " << division_name << " division: ";
        cin >> quarterly_sales;
    }

    return quarterly_sales;
}

void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales) {
    string division;
    double highest = northeastSales;
    division = "Northeast";

    // Tests each for highest
    if (southeastSales > highest) {
        highest = southeastSales;
        division = "Southeast";
    }
    if (northwestSales > highest) {
        highest = northwestSales;
        division = "Northwest";
    }
    if (southwestSales > highest) {
        highest = southwestSales;
        division = "Southwest";
    }

    cout << endl;
    cout << "The " << division << " division had the highest sales this quarter." << endl;
    cout << fixed << setprecision(2) << "Their sales were: $" << highest << endl;
}