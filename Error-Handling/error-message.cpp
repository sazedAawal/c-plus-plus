#include <iostream>
using namespace std;

//int calculateGrade(int score) { // Error: Return type is char, not int
char calculateGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
int main() {
    int studentScore;
    cout << "Enter student score: ";
    cin >> studentScore;
    char grade = calculateGrade(studentScore); // Type mismatch
    cout << "Grade: " << grade << endl;
    // Array access error
    //int scores[3] = {85, 92, 78};
    //cout << "Score 5: " << scores[5] << endl; // Out of bounds
    int scores[3] = {85, 92, 78};
    cout << "Score 3: " << scores[2] << endl; // Out of bounds     
    // Uninitialized variable
    int totalPoints = 0; // Declare starting value
    for (int total: scores) { // Loop through array to store values in 'total' variable
        totalPoints += total; // Totalpoints is updated as summation of values from total with each iteration
    }
    int averagePoints = totalPoints / 3;
    cout << "Average: " << averagePoints << endl;
    return 0;
}