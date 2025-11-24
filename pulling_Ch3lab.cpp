// Name: Jagger Pulling
// Program Status: Complete
// Description: This program asks how many students, then for each student, asks how many movies each student has watched
// it displays the values and average for all students. using pointer notation.
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void getMovies(int* arr, int size) {
    int movie_amt;


    for (int i = 0; i < size; i++) {
        cout << "how many movies?" << endl;
        cin >> movie_amt;

        // Validation
        while (movie_amt <= 0) {
            cout << "Please enter a positive integer: ";
            cin >> movie_amt;
        }

        *(arr + i) = movie_amt;
    }
}

void sortMovies(int* arr, int size) {
    sort(arr, arr + size);
}

void displayMovies(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << endl;
    }
}

double average(int* arr, int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += *(arr + i);
    }
    return total / size;
}


int main() {

    // Get student amount
    int student_amt;
    cout << "How many students?: ";
    cin >> student_amt;
    // Validation
    while (student_amt <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> student_amt;
    }

    int* studentArray = new int[student_amt];

    getMovies(studentArray, student_amt);


    // Header
    cout << "Number of Movies Watched" << endl;
    cout << "-----------------" << endl;

    sortMovies(studentArray, student_amt);
    displayMovies(studentArray, student_amt);

    cout << "-----------" << endl;

    double averageMovies = average(studentArray, student_amt);


    cout << fixed << setprecision(2) << "Average " << averageMovies << endl;

    // Free memory
    delete[] studentArray;

    return 0;
}

