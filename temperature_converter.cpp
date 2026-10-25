#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

// Constants for conversion formulas
const double FREEZING_POINT_CELSIUS = 0.0;
const double FREEZING_POINT_FAHRENHEIT = 32.0;
const double ABSOLUTE_ZERO_CELSIUS = -273.15;
const double FARENHEIT_TO_CELSIUS_FACTOR = 5.0 / 9.0;
const double CELSIUS_TO_FAHRENHEIT_FACTOR = 9.0 / 5.0;

// FUNCTION PROTOTYPES
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);

// Convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    // Error Checking
    if (celsius < ABSOLUTE_ZERO_CELSIUS) {
        cerr << "Error: Temperature below absolute zero!" << endl;
        return -1; // Return an error value
    } else {
        return celsius - ABSOLUTE_ZERO_CELSIUS;
    }
}

// Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin + ABSOLUTE_ZERO_CELSIUS;
}

// Convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    // First convert to Celsius, then to Kelvin
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

// Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    // First convert to Celsius, then to Fahrenheit
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

// More Additional Functions
// Convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * CELSIUS_TO_FAHRENHEIT_FACTOR)
           + FREEZING_POINT_FAHRENHEIT;
}

// Convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - FREEZING_POINT_FAHRENHEIT)
           * FARENHEIT_TO_CELSIUS_FACTOR;
}


// Display interesting facts about the temperature
void displayTemperatureFacts(double celsius) {
    cout << "\nInteresting facts about this temperature:" << endl;
    
    if (celsius < ABSOLUTE_ZERO_CELSIUS) {
        cout << "This temperature is below absolute zero, which is physically impossible!" << endl;
    }
    else if (celsius == ABSOLUTE_ZERO_CELSIUS) {
        cout << "This is absolute zero, the lowest possible temperature in the universe!" << endl;
    }
    else if (celsius < FREEZING_POINT_CELSIUS) {
        cout << "This temperature is below the freezing point of water." << endl;
    }
    else if (celsius == FREEZING_POINT_CELSIUS) {
        cout << "This is the freezing point of water at standard pressure." << endl;
    }
    else if (celsius < 20.0) {
        cout << "This is a cool temperature." << endl;
    }
    else if (celsius <= 30.0) {
        cout << "This is a comfortable room temperature." << endl;
    }
    else if (celsius <= 40.0) {
        cout << "This is a hot temperature." << endl;
    }
    else if (celsius <= 100.0) {
        cout << "This is a very hot temperature." << endl;
    }
    else if (celsius == 100.0) {
        cout << "This is the boiling point of water at standard pressure." << endl;
    }
    else {
        cout << "This is above the boiling point of water." << endl;
    }
}


int main(){
    // Display programme header
    cout << "---------------------" << endl;
    cout << "TEMPERATURE CONVERTER" << endl;
    cout << "---------------------" << endl;
    cout << "This programme converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl;

    // Main Programme Code
    // Variable to control the programme loop
    bool keepRunning = true;

    while (keepRunning){
        // Display the menu options
        cout << "\nTemperature Conversion Options:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit Program" << endl;
        cout << "\nEnter your choice (1-7): ";

        // Get User's Menu Choice
        int choice;
        cin >> choice;

        // Variable for temperature input and result
        double inputTemp, result;

        // Process the User's Choice
        switch (choice) {
            case 1:  // Celsius to Fahrenheit
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                if (inputTemp < -273.15) {
                    cout << "Celsius can not be below -273.15" << endl;
                } else {
                    result = celsiusToFahrenheit(inputTemp);
                    cout << fixed << setprecision(2);
                    cout << inputTemp << " °C = " << result << " °F" << endl;
                    displayTemperatureFacts(inputTemp);  // Add this line
                }
                break;
            
            case 2:  // Fahrenheit to Celsius
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                result = fahrenheitToCelsius(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " °C" << endl;
                displayTemperatureFacts(result);  // Pass the Celsius result
                break;
            
            // More cases will go here
            case 3:  // Celsius to Kelvin
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                if (inputTemp < -273.15) {
                    cout << "Celsius can not be below -273.15" << endl;
                } else {
                    result = celsiusToKelvin(inputTemp);
                    cout << fixed << setprecision(2);
                    cout << inputTemp << " °C = " << result << " K" << endl;
                }
                break;
                
            case 4:  // Kelvin to Celsius
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                if (inputTemp < 0) {
                    cout << "Kelvin can not be negative" << endl;
                } else {
                    result = kelvinToCelsius(inputTemp);
                    cout << fixed << setprecision(2);
                    cout << inputTemp << " K = " << result << " °C" << endl;
                }
                break;
                
            case 5:  // Fahrenheit to Kelvin
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                result = fahrenheitToKelvin(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " K" << endl;
                break;
                
            case 6:  // Kelvin to Fahrenheit
                cout << "Enter temperature in Kelvin: ";
                cin >> inputTemp;
                if (inputTemp < 0) {
                    cout << "Kelvin can not be negative" << endl;
                } else {
                    result = kelvinToFahrenheit(inputTemp);
                    cout << fixed << setprecision(2);
                    cout << inputTemp << " K = " << result << " °F" << endl;
                }
                break;
            
            case 7:  // Exit
                keepRunning = false;
                cout << "Thank you for using the Temperature Converter!" << endl;
                break;
            
            default:
                cout << "Invalid choice! Please select a number between 1 and 7." << endl;
                break;
        }
    }

    // End of Main Function
    cout << "This programme has successfully completed." << endl;
    return 0;
}