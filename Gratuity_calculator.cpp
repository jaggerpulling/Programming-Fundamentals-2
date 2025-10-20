// Name: Jagger Pulling
// Program Status: Complete
// Description: This program calculates and displays the gratuity on a restaurant meal
// based on meal cost before tax using provided tax rate, and desired tip rate %.

#include <iostream>
#include <iomanip>

using namespace std;

class Tips {
    double taxRate;

    public:
        Tips () {
            taxRate = 0.085; //default tax rate
        }

        Tips (double taxPercent) {
            this->taxRate = taxPercent/100;
        }

        double computeTip (double bill, double tipRate) {
            double cost_before_tax;
            double tip;

            cost_before_tax = (bill / (1 + taxRate));

            tip = cost_before_tax * (tipRate/100.00);
            return tip;

        }
        };


int main() {
    double bill;
    double tipRate;
    double tip;
    double taxPercent;

    //Create Header
    cout << "This program will compute a restaurant tip based on a total" << endl;
    cout << "bill amount and the % the patron wishes to tip the server\n" << endl;


    //Get Tax %
    cout << "Tax % for this location: ";
    cin >> taxPercent;
    while (taxPercent < 0) {
        cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
        cin >> taxPercent;
    }

    //create object
    Tips tip1(taxPercent);

    // Tip calculating Loop
    char choice = 'y';
    while ((choice != 'n') && (choice != 'N')) {

        // Tip Helper Header
        cout << "\n" ;
        cout << "************ Tip Helper ***********" << endl;

        // Get bill and tip amounts
        cout << "Enter total bill amount: ";
        cin >> bill;
        cout << "Enter desired tip %: ";
        cin >> tipRate;

        // Calculate tip
        tip = tip1.computeTip(bill, tipRate);
        cout << fixed << setprecision(2) <<"The tip should be $" << tip << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}