#include <iostream>
#include <climits> // INT_MAX & INT_MIN

using namespace std;

const int MAX_NUMBERS = 5;

int main() {
    cout << "Welcome to the Number Analysis Program!" << endl;

    // Declare variables
    int count, sum, totalNumbersEntered = 0;
    int min = INT_MAX; // Initialize min to the maximum integer value
    int max = INT_MIN; // Initialize max to the minimum integer value

    // Declare an array
    int numbers[MAX_NUMBERS];
    

    // Loop through max number constant
    for (int count = 0; count < MAX_NUMBERS; count++) {
        cout << "Please Enter a Number: " << endl;
        cin >> numbers[count]; // Store user input in the array
        
        // Update min value
        if (numbers[count] < min) { 
            min = numbers[count]; 
        }
        
        // Update max value
        if (numbers[count] > max) {
            max = numbers[count]; 
        }

        if (count < MAX_NUMBERS - 1) {
            cout << "\nDo you want to add another number? (y/n): ";
            char choice;
            cin >> choice;
            if (choice == 'n') {
                break; // Exit the for loop if user chooses 'n'
            }    
        }
    }

    // Display the minimum and maximum values
    cout << "\nThe minimum value is: " << min << endl;
    cout << "\nThe maximum value is: " << max << endl;

    // Calculate the sum
    for (int i = 0; i < totalNumbersEntered; i++) {
        sum += numbers[i]; // Add each number to the sum
    }
    cout << "\nThe sum of the numbers is: " << sum << endl << endl;

    // Average Calculation
    double average = static_cast<double>(sum) / totalNumbersEntered; // Calculate average
    cout << "\nThe average of the numbers is: " << average << endl << endl;

    // Find even or odd numbers, positive or negative numbers
    for (int i = 0; i < totalNumbersEntered; i++) {
        // Check for even or odd numbers
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " is an even number." << endl << endl;
        } else {
            cout << numbers[i] << " is an odd number." << endl << endl;
        }

        // Check for positive or negative numbers
        if (numbers[i] >= 0) {
            cout << numbers[i] << " is a positive number." << endl << endl;
        } else {
            cout << numbers[i] << " is a negative number." << endl << endl;
        }
    }
    
    // Return Statements
    return 0;
}