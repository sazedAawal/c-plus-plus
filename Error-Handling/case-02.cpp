// Logical Error: Error in Formula
#include <iostream>
using namespace std;
int main() {
    int temperature;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    // Convert to Fahrenheit
    // int fahrenheit = temperature * 9 / 5 - 32; // Formulae Error
    int fahrenheit = temperature * 9 / 5 + 32;
    cout << temperature << "°C = " << fahrenheit << "°F" << endl;
    return 0;
}