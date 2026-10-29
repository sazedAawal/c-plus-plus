#include <iostream>
#include <cmath> // For mathematical functions like sqrt(), pow()
#include <limits>

using namespace std;

double getValidDoubleInput(const string& prompt);

int main() {
    // Display a welcome message
    cout << "-------------------------------------" << endl;
    cout << "        INTERACTIVE CALCULATOR       " << endl;
    cout << "-------------------------------------" << endl;
    cout << "This calculator allows you to perform" << endl;
    cout << "various mathematical operations." << endl << endl;

    // Check for Previous History
    double lastResult = 0;
    bool hasPreviousResult = false;

    // Main Programme ---
    bool exit_Programme = false; // Controls whether the programme should exit
    int choice;                  // Stores the user's menu choice
    int switchOrIf;              // Input whether to use switch statements or if-else

    while (!exit_Programme) {

        // Display the Menu
        cout << "\nPlease select an option" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Square Root" << endl;
        cout << "6. Exponentiation (Power)" << endl;
        cout << "7. Exit" << endl;
        cout << "8. Remainder" << endl;
        cout << "9. Absolute Value" << endl;
        cout << "\nEnter your choice (1-9): " << endl;

        // Get user's choice on Menu
        cin >> choice;
        // Check if the input is valid and handle errors ---
        // if (!(cin >> choice)){
        //     // If input is not a number, clear the error state and discard input
        //     cin.clear();
        //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
        //     cout << "Invalid Input! Please enter a number!" << endl;
        //     continue; // Skip the rest of the loop and start over
        // }


        // Display options for switch vs if-else
        cout << "How do you want the calculator to proceed?" << endl;
        cout << "1. Using if-else Statements" << endl;
        cout << "2. Using switch Statements" << endl;
        cout << "\nEnter your choice (1 or 2): " << endl << endl;

        // Get user's input on switch or if-else statements
        cin >> switchOrIf;

        // Process the choices using conditional statements ---

        // Variables to store the operands
        double num1, num2, result;

        // if-else/switch begins here ---
        if (switchOrIf == 1) { // If-else statements
            // if-else statements to process the choices
            if (choice == 1) { // Addition
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2
                    << " = " << result << endl;
                lastResult = result;
                hasPreviousResult = true;
            } else if (choice == 2) { // Subtraction
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2
                    << " = " << result << endl;
                lastResult = result;
                hasPreviousResult = true;
            } else if (choice == 3) { // Multiplication
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2
                    << " = " << result << endl;
                lastResult = result;
                hasPreviousResult = true;
            } else if (choice == 4) { // Division
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                // Check for division by Zero
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2
                    << " = " << result << endl;
                }
                lastResult = result;
                hasPreviousResult = true;
            } else if (choice == 5) { // Square Root
                cout << "Enter a number: ";
                cin >> num1;
                // Check if the number is negative
                if (num1 < 0) {
                    cout << "Error: Can't calculate square root of a negative number" << endl;
                } else {
                    result = sqrt(num1);
                    cout << "Result: sqrt (" << num1 << ") = " << result << endl;
                }
                lastResult = result;
                hasPreviousResult = true;
            } else if (choice == 6) { // Exponentiation
                cout << "Enter base number: ";
                cin >> num1;
                cout << "Enter exponent number: ";
                cin >> num2;
                result = pow(num1, num2);
                cout << "Result: Exponention of " << num1 
                        << "to the power of " << num2 << "is: "
                            << result << endl;
                lastResult = result;
                hasPreviousResult = true;
            } else if (choice == 7) { // Exit Programme
                exit_Programme = true;
                cout << "Thank you for using the Interactive Calculator. Goodbye!" << endl;
            } else {
                cout << "Please implement other operations or handle invalid input" << endl;
            }

        } else if (switchOrIf == 2) { // Switch Statements
            // Switch statements to user's choice
            switch (choice) {
                case 1: // Addition
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter exponent number: ";
                    cin >> num2;
                    result = num1 + num2;
                    cout << "Result: " << num1 << " + " 
                        << num2 << " = " << result << endl;
                    lastResult = result;
                    hasPreviousResult = true;
                    break;
                case 2: // Subtraction
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter exponent number: ";
                    cin >> num2;
                    result = num1 - num2;
                    cout << "Result: " << num1 << " - " 
                        << num2 << " = " << result << endl;
                    lastResult = result;
                    hasPreviousResult = true;
                    break;
                case 3: // Multiplication
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter exponent number: ";
                    cin >> num2;
                    result = num1 * num2;
                    cout << "Result: " << num1 << " * " 
                        << num2 << " = " << result << endl;
                    lastResult = result;
                    hasPreviousResult = true;
                    break;
                case 4: // Division
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter exponent number: ";
                    cin >> num2;
                    // Check for division by Zero
                    if (num2 == 0) {
                        cout << "Error: Division by zero is not allowed." << endl;
                    } else {
                        result = num1 / num2;
                        cout << "Result: " << num1 << " / " << num2
                        << " = " << result << endl;
                    }
                    lastResult = result;
                    hasPreviousResult = true;
                    break;
                case 5: // Square Root
                    cout << "Enter a number: ";
                    cin >> num1;
                    // Check if the number is negative
                    if (num1 < 0) {
                        cout << "Error: Can't calculate square root of a negative number" << endl;
                    } else {
                        result = sqrt(num1);
                        cout << "Result: sqrt (" << num1 << ") = " << result << endl;
                    }
                    lastResult = result;
                    hasPreviousResult = true;
                    break;
                case 6: // Exponentiation
                    cout << "Enter base number: ";
                    cin >> num1;
                    cout << "Enter exponent number: ";
                    cin >> num2;
                    result = pow(num1, num2);
                    cout << "Result: Exponention of " << num1 
                            << "to the power of " << num2 << "is: "
                                << result << endl;
                    lastResult = result;
                    hasPreviousResult = true;
                    break;
                case 7: // Exit
                    exit_Programme = true;
                    cout << "Thank you for using the Interactive Calculator. Goodbye!" << endl;
                    break;
                default: // Invalid Choice
                    cout << "Please implement other operations or handle invalid input" << endl;
                    break;
            }
        } else {
            cout << "Please enter a valid option" << endl;
        }

        // Use Previous Result Option ---
        if (hasPreviousResult) {
            cout << "Previous Result: " << lastResult << endl;
            cout << "Would you like to use the previous result? (1 for yes, 0 for no): ";
            int useLastResult;
            cin >> useLastResult;
            if (useLastResult == 1) {
                num1 = lastResult;
            } else {
                num1 = getValidDoubleInput("Enter First Number: ");
            }
        } else {
            num1 = getValidDoubleInput("Enter First Number: ");
        }
    }
    
    
    // Return Statement
    cout << "\nThe programme has successfully ended!" << endl << endl;
    return 0;
}

// Functions ---
// Function that gets a valid double input from the user and use it throughout the programme
double getValidDoubleInput(const string& prompt) {
    double value;
    bool validInput = false;
    do {
        cout << prompt;
        if (cin >> value) {
            validInput = true;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Input! Please enter a number." << endl;
        }
    } while (!validInput);
    return value;
} 
// Example usage: num1 = getValidDoubleInput("Enter first number: ");