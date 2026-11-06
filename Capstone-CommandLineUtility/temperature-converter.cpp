#include "temperature-converter.h"
#include <iostream>

using namespace std;

// Constant variables
const double CELSIUS_TO_FAHRENHEIT_FACTOR = 9.0 / 5.0;
const double FARENHEIT_TO_CELSIUS_FACTOR = 5.0 / 9.0;
const double FREEZING_POINT_FAHRENHEIT = 32.0;

// Get User Input
void temperatureConverter() {
    cout << "--- TEMPERATURE CONVERTER SYSTEM ---" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Please enter an option between 1 or 2" << endl;
    int choice;
    cin >> choice;
    cout << "Please enter the temperature value: " << endl;
    double tempValue;
    cin >> tempValue;
    if (choice == 1) {
        double result = celsiusToFahrenheit(tempValue);
        cout << "The result of Celsius to Fahrenheit is: " << result << endl;
    } else if (choice == 2) {
        double result = fahrenheitToCelsius(tempValue);
        cout << "The result of Fahrenheit to Celsius is: " << result << endl;
    } else {
        cout << "Invalid Choice!" << endl;
    }
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * CELSIUS_TO_FAHRENHEIT_FACTOR)
           + FREEZING_POINT_FAHRENHEIT;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - FREEZING_POINT_FAHRENHEIT)
           * FARENHEIT_TO_CELSIUS_FACTOR;
}