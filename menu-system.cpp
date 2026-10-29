#include <iostream>
using namespace std;

int main() {
    int menuChoice;
    cout << "--- GAME MENU ---" << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Load Game" << endl;
    cout << "3. View High Scores" << endl;
    cout << "4. Settings" << endl;
    cout << "5. Exit Game" << endl;
    cout << "6. Instructions" << endl;
    cout << "Enter your choice (1-6)" << endl;

    cin >> menuChoice;
    switch (menuChoice) {
        case 1: 
            cout << "Starting New Adventure..." << endl;
            cout << "Welcome, Brave Explorer!" << endl;
            break;
        case 2:
            cout << "Loading Saved Game..." << endl;
            cout << "Game Successfully Loaded" << endl;
        case 3:
            cout << "--- HIGH SCORES ---" << endl;
            cout << "1. Alice - 15,000 points" << endl;
            cout << "2. Bob - 12,500 points" << endl;
            break;
        case 4:
            cout << "Opening Settings Menu" << endl;
            cout << "Sound: ON, Difficulty: Medium" << endl;
            break;
        case 5:
            cout << "Thanks for Playing! Goodbye!" << endl;
            break;
        case 6:
            cout << "Openning Instructions" << endl;
            cout << "Instructions are as follows" << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
    }

    // Return Statement
    return 0;
}