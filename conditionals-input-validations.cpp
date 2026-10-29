#include <iostream>
using namespace std;
int main() {
    int playerLevel;
    char difficulty;
    // Get player level with validation
    cout << "Enter your player level (1-20): " << endl;
    
    cin >> playerLevel;
    
    if (playerLevel < 1 || playerLevel > 10 && playerLevel <= 20) {
        cout << "Invalid Level! Setting to Level 1" << endl;
        playerLevel = 1;
    } 

    // Get difficulty choice
    cout << "Choice Difficulty:" << endl;
    cout << "E - Easy" << endl;
    cout << "M - Medium" << endl;
    cout << "H - Hard" << endl;
    cout << "Enter choice (E/M/H): " << endl;

    cin >> difficulty;
    // Process difficulty with switch
    switch (difficulty) {
        case 'E':
        case 'e':
            cout << "Easy mode Selected" << endl;
            if (playerLevel >= 5) {
                cout << "Bonus: Extra health for experienced player!" << endl;
            }
            break;
        case 'M':
        case 'm':
            cout << "Medium mode Selected" << endl;
            if (playerLevel >= 8) {
                cout << "Bonus: Elite status achieved!" << endl;
            } else {
                cout << "Warning: This will be challenging for your level" << endl;
            } 
            break;
        case 'h':
        case 'H':
            cout << "Hard mode Selected" << endl;
            if (playerLevel >= 15) {
                cout << "Additional Bonus: More XP is added" << endl;
            } else {
                cout << "Not eligible for additional bonuses yet" << endl;
            }
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
    }
    cout << "Game Starting with Level" << playerLevel << "Character..." << endl;
    return 0;
}