/*
 * Buggy Logic Game
 * 
 * This program implements a simple number-guessing game:
 * 1. The computer generates a random number
 * 2. The player tries to guess the number
 * 3. The computer provides hints (higher/lower)
 * 4. The game ends when the player guesses correctly
 * 
*/

#include <iostream>
#include <cstdlib> // Contains rand() for random number generation
#include <ctime>
using namespace std;

// Function prototypes
int generateRandomNumber(int min, int max);
void playGame();
void displayInstructions();
bool playAgain();

// MAIN FUNCTION---
int main() {
    cout << "--- Buggy Number Guessing Game ---" << endl;    
    // Seed the random number generator
    srand(time(0));    
    displayInstructions();    
    bool continuePlaying = true;
    while (continuePlaying) {
        playGame();
        continuePlaying = playAgain();
    }    
    cout << "Thank you for playing!" << endl;
    return 0;
}

// Display game instructions
void displayInstructions() {
    cout << "\nWelcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Try to guess the number, and I'll tell you if it's too high or too low." << endl;
    cout << "Let's begin!" << endl;
}

// Generate a random number between min and max (inclusive)
int generateRandomNumber(int min, int max) {
    //return min + rand() % (max + 1);  // Bug: Incorrect range calculation
    return min + (rand() % (max - min + 1)); // Fixed: Correct Formulae is --> min + (rand() % (max - min + 1))
}

// Play one round of the game
void playGame() {
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;    
    int secretNumber = generateRandomNumber(MIN_NUMBER, MAX_NUMBER);
    int playerGuess;
    int numberOfGuesses = 0;
    bool hasGuessedCorrectly = false;    
    cout << "\nI'm thinking of a number between " << MIN_NUMBER << " and " << MAX_NUMBER << "." << endl;    
    while (!hasGuessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        numberOfGuesses++;
        // Debugging ---
        // cout << "DEBUG: secretNumber = " << secretNumber << endl;
        // cout << "DEBUG: playerGuess = " << playerGuess << endl;      
        // if (playerGuess = secretNumber) {  // Bug: Assignment instead of comparison
        if (playerGuess == secretNumber) { // Fixed: Comparison added
            cout << "Congratulations! You guessed the number in " << numberOfGuesses << " guesses!" << endl;
            hasGuessedCorrectly = true;
        } else if (playerGuess < secretNumber) {
            cout << "Too low. Try again!" << endl;
        } else if (playerGuess > secretNumber) {
            cout << "Too high. Try again!" << endl;
        }        
        // Add a reasonable limit on guesses to prevent infinite loops
        if (numberOfGuesses >= 10) {
            cout << "You've used all your guesses! The number was " << secretNumber << "." << endl;
            hasGuessedCorrectly = true;  // End the game
        }
    }
}

// Ask if the player wants to play again
bool playAgain() {
    char response;
    cout << "\nDo you want to play again? (y/n): ";
    cin >> response;    
    // return (response != 'n'); // Bug: Should only return true for 'y' or 'Y'
    if (response == 'y' || response == 'Y') { // Fixed: Now only checks to play again or not
        return true;
    } else 
        return false;
}