#include <iostream>

using namespace std;

int main() {
    cout << "--- PLAYER REGISTRATION ---" << endl;
    // Validate player level (1-10)
    int playerLevel;
    do {
        cout << "Enter your player level (1-10): ";
        cin >> playerLevel;
        if (playerLevel < 1 || playerLevel > 10) {
            cout << "Invalid Level! Please try again!" << endl;
        }
    } while (playerLevel < 1 || playerLevel > 10);
    cout << "Valid level entered: " << playerLevel << endl;
    // Validate player name (non-empty)
    string playerName;
    do {
        cout << "Enter your player name (can not be empty): ";
        getline(cin, playerName);
        if (playerName.empty()) {
            cout << "Name cannot be empty! Please try again." << endl;
        }
    } while (playerName.empty());
    cout << "Welcome, " << playerName << " (Level "
        << playerLevel  << ")!" << endl;
    return 0;
}