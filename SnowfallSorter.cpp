// Name: Jagger Pulling
// Program Status: Complete
// Description: This program collects snowfall data from user for specified dates
// and then sorts and displays the dates and respective snow fall back to user

#include <iomanip>
#include <iostream>
using namespace std;

// Snowfall Struct
struct SnowfallData {
    string date;
    float inches;
};

void inputSnowfallData(SnowfallData array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter date (MM/DD): ";
        cin >> array[i].date;
        cout << "Enter snowfall inches: ";
        cin >>  array[i].inches;
    };
}

void sortSnowfallData(SnowfallData array[], int n) {
    bool sorted = false;
    while (!sorted) {
        // Determine if any swaps take place in a pass
        int swapCount = 0;
        // Check each item
        for (int j = 0; j < n - 1; j++) {

            // If current is greater than one ahead, swap
            if (array[j].date > array[j+1].date) {

                // Swap Elements
                //assign temp variable
                SnowfallData temp = array[j];

                array[j] = array[j+1];
                array[j+1] = temp;
                swapCount ++;
            }
        }
        // check if any swaps occured
        if (swapCount == 0) {
            sorted = true;
        }
    }
}

void displaySortedData(SnowfallData array[], int n) {

    // Header
    cout << "Sorted Snowfall Data at the Taos Ski Area" << endl;
    cout << string(20,'-') << endl << endl;

    //displays sorted data
    for (int i = 0; i < n; i++) {
        cout << array[i].date << ": " << array[i].inches << "inches" << endl;
    }
}



int main() {

    //Get amount of days
    int days;
    cout << "Enter the number of snowfall data entries: ";
    cin >> days;

    //store in array and create struct object
    SnowfallData data[days];

    inputSnowfallData(data, days);
    sortSnowfallData(data, days);
    displaySortedData(data, days);

}