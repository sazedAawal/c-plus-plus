#include <iostream>

using namespace std;

int main(){
    // Integer division example
    int totalPoints = 95; //100; 
    int numTests = 3;

    // Implicit conversion ---
    double average1 = totalPoints / numTests; 
    cout << "Average (implicit): " << average1 << endl;
    // Character to integer conversion
    char grade = 'A';
    int gradeValue = grade; // ASCII conversion
    cout << "ASCII value of 'A': " << gradeValue << endl << endl;

    // Explicit conversion ---
    // Fixed division problem with explicit casting
    double average2 = static_cast<double>(totalPoints) / numTests;
    double average2_1 = totalPoints / static_cast<double>(numTests);
    cout << "Average (explicit): " << average2 << endl;
    cout << "Average (explicit): " << average2_1 << endl;

    // Demonstrate precision loss when converting back
    double preciseValue = 7.89; //99.99;
    int truncated = static_cast<int> (preciseValue);
    cout << "Original Value: " << preciseValue << endl;
    cout << "Truncated Value: " << truncated << endl << endl;

    // Problem 01 ---
    // Lost precisioni n financial calculations
    int pounds = 1000;
    float interestRate = 0.05; // 5%
    int interest = static_cast<int>(pounds * interestRate); // Issue here resolved ***
    cout << "Interest Earned: £" << interest << endl;

    // Problem 02 ---
    // Unexpected Truncation
    double price = 19.99;
    int wholePounds = static_cast<int>(round(price)); // Issue here resolved ***
    cout << "Price in Whole Pounds: £" << wholePounds << endl;

    // Return Statements
    return 0;
}