#include <iostream>
#include <list>

using namespace std;

// Function Prototype
list<int> assignmentScore(int score); // Takes 3 scores and stores into the global list
double calculateAverageScore(const list<int>& allScores); // Take the global list to find average
void letterGrade(const list<int>& allScores);


// Global List
list<int> allScores; // Declared: list all scores

// MAIN PROGRAMME
int main() {
    assignmentScore(3); // 3 is number of assignments
    calculateAverageScore(allScores);
    letterGrade(allScores);
    return 0;
}

// Function to take scores of the assignments, stored in a list
list<int> assignmentScore(int score) {
    cout << "Please enter 3 assignment scores (0-100): " << endl << endl;
    int singleScore; // Variables to store each scores

    // Loop through the number of assignments
    for (int i = 0; i < score; i++) {
        // Check for invalid score
        while (true) {
            cout << "What's the assignment score?: " << endl;
            cin >> singleScore; // Take user input each time
            // Main conditional checks for invalid inputs
            if (singleScore > 100 || singleScore < 0) {
                cout << "Invalid Score! Please enter a score between 0 and 100" << endl;
                continue;
            }
            break; // Valid Score found, Exit the while loop
        }
        // Store the value each times
        allScores.push_front(singleScore);
    } 
    // Display Scores
    cout << "Your scores are: ";
    for (int score: allScores) {
        cout << score << " ";
    }
    cout << endl << endl;
    // Return the list for the function
    return allScores; 
}

// Function to calculate the average of the scores
double calculateAverageScore(const list<int>& allScores) {
    int totalScore = 0; // Initialize total score
    double averageScore; // declare variables to store

    // Loop through each item in the list and store in score integer variables
    for (int score: allScores) {
        totalScore += score; // Add the variables from score to total score
    }
    
    averageScore = static_cast<double>(totalScore) / (allScores.size()); // Convert integer total score to double for average, and divide by number of items in the list
    // Display the average score
    cout << "Your average score is: " << averageScore << endl << endl;
    // Return the averagescore integer from the function
    return averageScore;
}


// Function to display both numeric average and letter grade
void letterGrade(const list<int>& allScores) {
    // Determine letter grade (A: 90+, B: 80-89, C: 70-79, D: 60-69, F: below 60)
    for (int grade: allScores) {
        if (grade >= 90) {
            cout << "Your " << grade << " in Letter is Grade: A" << endl;
        } else if (grade >= 80) {
            cout << "Your " << grade << " in Letter is Grade: B" << endl;
        } else if (grade >= 70) {
            cout << "Your " << grade << " in Letter is Grade: C" << endl;
        } else if (grade >= 60) {
            cout << "Your " << grade << " in Letter is Grade: D" << endl;
        } else {
            cout << "Your " << grade << " in Letter is Grade: F" << endl;
        }
    }
}