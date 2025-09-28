// Name: Jagger Pulling
// Program Status: Complete
// Description: This program allows the user to select either air, water or steel.
// The program then has the user enter the number of feet a sound wave will travel in selected medium
// the program then calculates the number of seconds it will take for sound to travel.

#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    // Variable declarations
    int user_choice;
    int wave_distance;
    double wave_speed;

    // Initialize Constant variables
    double const AIR_SPEED = 1100.0;
    double const WATER_SPEED = 4900.0;
    double const STEEL_SPEED = 16400.0;

    // Display Menu
    cout << "Select a substance for the sound to travel through:\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cin >> user_choice;

    // Get wave distance from user
    cout << "Enter the number of feet the sound wave will travel: ";
    cin >> wave_distance;

    // set output format
    cout << fixed << setprecision(4);

    // Calculate and Display values
    switch (user_choice) {
        case 1:
            // Calculate for air
            wave_speed = wave_distance / AIR_SPEED;
            cout << "The sound wave will travel " << wave_distance <<" feet through air in " << wave_speed << " seconds.";
            break;

        case 2:
            // Calculate for water
            wave_speed = wave_distance / WATER_SPEED;
            cout << "The sound wave will travel " << wave_distance <<" feet through water in " << wave_speed << " seconds.";
            break;

        case 3:
            // Calculate for steel
            wave_speed = wave_distance / STEEL_SPEED;
            cout << "The sound wave will travel " << wave_distance <<" feet through steel in " << wave_speed << " seconds." ;
            break;

        // Validate input
        default:
        cout << "Invalid choice! Please enter 1, 2, or 3.";
    }

    return 0;
}