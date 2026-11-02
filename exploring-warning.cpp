#include <iostream>
using namespace std;

int main() {
    int number;
    int result = number * 2; // Using uninitialized variable
    int unused_var = 42; // Variable declared but never used
    cout << "Enter a number: ";
    cin >> number;
    if (number = 5) { // Assignment instead of comparison
        cout << "You entered five!" << endl;
    }
    cout << "Result: " << result << endl;
    return 0;
}