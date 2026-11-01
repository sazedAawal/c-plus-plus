#include <iostream>
#include <cmath> // For pow() function

using namespace std;

// Main Programme ---
int main() {
    double principal, rate, years;
      
    // Check for Negative Deposit Amount
    while (true) {
        cout << "What's the initial deposit amount?: " << endl;
        cin >> principal;
        // Negative Input Values
        if (principal < 0) {
            cout << "Please Enter a positive number" << endl;
        } else {
            break;
        }
    }
    
    // With Zero Interest the existing formula will still work
    cout << "What's the annual interest rate?: " << endl;
    cin >> rate;

    // Check for Negative or Larger year
    while (true) {
        cout << "What's the total number of years?: " << endl;
        cin >> years;
        // Negative Input Values
        if (years < 0 or years > 100) {
            cout << "Please Enter a valid year to continue" << endl << endl;
        } else {
            break;
        }
    }
    
    // Final Amount Calculations using Compound Interest Formula
    double amount = principal * (pow((1 + (rate/100)), years));
    cout << "\nTotal amount is " << amount << endl;

    // Return Statement
    return 0;
}