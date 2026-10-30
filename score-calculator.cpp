#include <iostream>
using namespace std;

int main() {
    cout << "--- SCORE CALCULATOR ---" << endl;
    // Method 1: For loop - when you know exact iterations
    cout << "\nMethod 1 - For loop:" << endl;
    int totalScore = 0;
    for (int level = 1; level <= 5; level++) {
        int levelScore = level * 150; // 150 points per level
        totalScore += levelScore;
        cout << "Level" << level << ": " << levelScore 
            << " points" << endl;
    }
    cout << "Total with for loop: " << totalScore << " points" << endl;
    // Method 2: While loop - when condition-based iteration
    cout << "\nMethod 2 - While loop: " << endl;
    totalScore = 0;
    int level = 1;
    while (level <= 5) {
        int levelScore = level * 100;
        totalScore += levelScore;
        cout << "Level " << level << ": " << levelScore
            << " points" << endl;
        level++; // Increment by 1; **WITHOUT THIS THE LOOP WILL BECOME INFINITE**
    }
    cout << "Total with the while loop: " << totalScore
        << " points" << endl;
    return 0;
}