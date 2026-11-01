#include <iostream>
#include <list>

using namespace std;

int main() {
    // List to store the input numbers
    list<int> inputNumbers;
    // For loop to take 5 numbers as input from the user
    for (int i = 1; i <= 5; i++) {
        cout << "Enter your number: ";
        int number;
        cin >> number;
        inputNumbers.push_back(number); // Insert each number to the list
    }

    // Display the number entered by the user
    cout << "\nThe numbers you entered are: ";
    for (int number : inputNumbers) {
        cout << number << " ";
    }
    cout << endl;

    // Calculate sum of the numbers
    int sum = 0;
    for (int number : inputNumbers) {
        sum += number; // Add each number to the sum
    }
    cout << "\nThe sum of the numbers is: " << sum << endl;

    // Calculate average of the numbers
    double average = static_cast<double>(sum) / inputNumbers.size(); // Calculate average
    cout << "\nThe average of the numbers is: " << average << endl;

    // Check total even and odd numbers
    int evenCount = 0, oddCount = 0;
    for (int number : inputNumbers) {
        if (number % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }
    cout << "\nTotal even numbers: " << evenCount << endl;
    cout << "\nTotal odd numbers: " << oddCount << endl;

    // Return Statements
    return 0;
}