// Name: Jagger Pulling
// Program Status: Complete
// Description: This program asks the user to enter daily sales for three stores and displays a bar chart
// using asterisks. Each asterisk represents $100 of sales, rounded to the nearest $100.

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main() {

    // Initialize Variables
    float store_sales_one;
    float store_sales_two ;
    float store_sales_three;
    float asterisk_quantity;

    // Constant Variables
    int const ASTERISK_VALUE = 100;

    //Get User Input for STORE ONE
    cout << "Enter the sales for Store 1: ";
    cin >> store_sales_one;
    // Validate Input
    while (store_sales_one < 0 ) {
        cout << "Invalid input. Please enter a positive number for Store 1: ";
        cin >> store_sales_one;
    }

    //Get User Input for STORE TWO
    cout << "Enter the sales for Store 2: ";
    cin >> store_sales_two;
    // Validate Input
    while (store_sales_two < 0 ) {
        cout << "Invalid input. Please enter a positive number for Store 2: ";
        cin >> store_sales_two;
    }

    //Get User Input for STORE THREE
    cout << "Enter the sales for Store 3: ";
    cin >> store_sales_three;
    // Validate Input
    while (store_sales_three < 0 ) {
        cout << "Invalid input. Please enter a positive number for Store 3: ";
        cin >> store_sales_three;
    }

    // Display Table Header
    cout << endl ;
    cout << setw(16) << "DAILY SALES" << endl ;
    cout << setw(18) << "(each * = $100)" << endl ;
    cout << endl ;

    // Calculates and Display asterisks for STORE ONE
   asterisk_quantity = store_sales_one / ASTERISK_VALUE;
    cout << "Store 1: ";
    for (int i = 0; i < round(asterisk_quantity); i++) {
        cout << '*';
    }

    // Calculates and Display asterisks for STORE TWO
    asterisk_quantity = store_sales_two / ASTERISK_VALUE;
    cout << endl << "Store 2: ";
    for (int i = 0; i < round(asterisk_quantity); i++) {
        cout << '*';
    }

    // Calculates and Display asterisks for STORE THREE
    asterisk_quantity = store_sales_three / ASTERISK_VALUE;
    cout << endl << "Store 3: ";
    for (int i = 0; i < round(asterisk_quantity); i++) {
        cout << '*';
    }


    return 0;
}
