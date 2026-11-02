#include <iostream>
#include <string>
#include <cctype> // Contains functions to check character types
#include <algorithm> // Contains functions for string manipulation

using namespace std;

int main() {
    string inputString;
    int vowelCount, constantCount = 0;
    bool isPalindrome;

    cout << "Enter a string: " << endl;
    getline(cin, inputString);
    for (char &c : inputString) {
        if (isalpha(c)) { // Check if the character is an alphabet
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelCount++;
            } else {
                constantCount++;
            }
        }
    }
    // Display the counts of vowels and consonants
    cout << "\nNumber of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << constantCount << endl;
    
    // Reverse the string
    string reversedString = inputString;
    reverse(reversedString.begin(), reversedString.end());
    cout << "Reversed string: " << reversedString << endl;

    // Check if the string is a palindrome
    if (inputString == reversedString) {
        isPalindrome = true;
        cout << "The string is a palindrome" << endl << endl;
    } else {
        isPalindrome = false;
        cout << "The string is not a palindrome" << endl << endl;
    }

    // Return Statement
    return 0;
}