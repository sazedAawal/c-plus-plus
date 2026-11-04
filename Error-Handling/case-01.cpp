// Syntax Error: Missing Semi-Colon is an example
#include <iostream>
using namespace std;
int main() {
    int score1, score2, score3;
    cout << "Enter three test scores: ";
    cin >> score1 >> score2 >> score3; // case-01.cpp:6:38: error: expected ';' after expression
    double average = (score1 + score2 + score3) / 3;
    cout << "Average Score: " << average << endl;
    return 0;
}