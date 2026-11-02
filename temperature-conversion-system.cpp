#include <iostream>
using namespace std;

int main() {
    while (true) {
        cout << "\nPlease select an options: " << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Exit the Programme" << endl << endl;
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter a temperature in Celsius: ";
            double celsius;
            cin >> celsius;
            double result = (celsius * 9/5) + 32;
            cout << "The temperature in Fahrenheit is: " << result << endl;
        } else if (choice == 2) {
            cout << "Enter a temperature in Fahrenheit: ";
            double fahrenheit;
            cin >> fahrenheit;
            double result = (fahrenheit - 32) * 5/9;
            cout << "The temperature in Celsius is: " << result << endl;
        } else if (choice == 3) {
            cout << "\nExiting the program ..." << endl;
            break;
        } else {
            cout << "Invalid choice. Please select a valid option." << endl;
        }

        while (true) {
            char continueMenu;
            cout << "\nDo you want to continue? (y/n):" << endl;
            cin >> continueMenu;
            if (continueMenu == 'y') {
                break;
            } else if (continueMenu == 'n') {
                cout << "Exiting the programme ..." << endl;
                return 0;
            } 
        }
    }
    
    return 0;
}