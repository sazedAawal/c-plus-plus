#include <iostream>
#include <string>

using namespace std;

int main() {
    string playerChoice, playerSecondChoice;
    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You stand at a crossroads in a mysterious forest." << endl;
    cout << "Do you want to go 'left', 'right' or 'forward' ?" << endl;

    cin >> playerChoice;

    if ((playerChoice == "left") || (playerChoice == "LEFT")) {
        cout << "You discover a hidden treasure chest!" << endl;
        cout << "Inside you find 100 gold coins." << endl;
        cout << "Do you want to buy new items? 'Yes' or 'No'" << endl;
        
        cin >> playerSecondChoice;

        if (playerSecondChoice == "Yes") {
            cout << "New Items Bought!" << endl;
        } else {
            cout << "Gold Added to your balance" << endl;
        }
    } else if ((playerChoice == "right") || (playerChoice == "RIGHT")) {
        cout << "You meet a wise old sage" << endl;
        cout << "The sage gives you a magical potion." << endl;
    } else if ((playerChoice == "forward") || (playerChoice == "FORWARD")) {
        cout << "Going ahead in the game" << endl;
    } else {
        cout << "You stand still, unsure of your choice." << endl;
        cout << "Time passes and nothing happens." << endl;
    }

    // Return Statement
    return 0;
}