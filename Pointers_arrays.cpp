// Name: Jagger Pulling
// Program Status: Complete
// Description: This program sorts two arrays (one even and one odd)
// then prints the contents and finds median using pointer notation

#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
}

int calculateMedian(int *arr, int size) {
    if (size % 2 == 0) {
        return ( *(arr + (size / 2 - 1)) + *(arr + (size / 2)) ) / 2;
    }
    else {
        return *(arr + size / 2);
    }
}


int main() {
    int evenArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
    int oddArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22};

    // Get array size
    int evenSize = sizeof(evenArray) / sizeof(evenArray[0]);
    int oddSize = sizeof(oddArray) / sizeof(oddArray[0]);

    // Sort Arrays
    sort(evenArray, evenArray + evenSize);
    sort(oddArray, oddArray + oddSize);

    // Find Medians
    int evenMedian = calculateMedian(evenArray, evenSize);
    int oddMedian = calculateMedian(oddArray, oddSize);

    cout << "Median of the even array: " << endl;
    printArray(evenArray, evenSize);
    cout << endl << "is " << evenMedian << endl;

    cout << "Median of the odd array: " << endl;
    printArray(oddArray, oddSize);
    cout << endl << "is " << oddMedian << endl;

    return 0;
}
