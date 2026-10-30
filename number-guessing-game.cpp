/*
Steps
Random Number to Guess
Ask Input
If it matches then exit
else keep in loop to ask for inputs
*/

#include <iostream>
#include <random>

using namespace std;

// Function Prototype
int generateRandom(int maximumLimit);

// MAIN FUNCTION ---
int main() {
    auto rand = generateRandom(100);
    //cout << "The random number is: " << rand << endl;
    
    int guessedNumber;

    while (true) {
        cout << "Guess a number between 1 - 100: " << endl;
        cin >> guessedNumber;
        if (guessedNumber == rand) {
            cout << "Congratulations! You've guessed it right!" << endl;
            break;
        } else if (guessedNumber < rand) {
            cout << "Too low! Try Again!" << endl;
        } else {
            cout << "Too high! Try Again!" << endl;
        }
    }
    
    return 0;
}

// Functions
int generateRandom(int maximumLimit) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1, maximumLimit);
    int randomNumber = distrib(gen);
    return randomNumber;
}
