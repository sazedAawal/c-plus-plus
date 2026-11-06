#include <iostream>
#include "temperature-converter.h"
#include "word-counter.h"
#include <limits>

using namespace std;

// Function Prototype
double getValidNumber();

int main() {
    cout << "--- UTILITY PROGRAMME MENU ---" << endl;
    cout << "1. Temperature Converter" << endl;
    cout << "2. Word Counter" << endl;
    cout << "Please Enter a choice: " << endl;
    int choice;
    cin >> choice;
    if (choice == 1) {
        temperatureConverter();
    } else if (choice == 2) {
        wordCounter();
    } else {
        getValidNumber();
    }
}

// Function to catch invalid numbers
double getValidNumber() {
    double num;
    while (!(cin >>num)) {
        cout << "Invalid Input. Please enter a number: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }
    return num;
}