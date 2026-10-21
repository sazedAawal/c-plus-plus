/*
    File: student_grades.cpp
    Author: The Joker
    Date: October 22, 2026
    Purpose: This programme processes student grades by allowing entry
             of student names & scores, calculating statistics, and 
             displaying results.
*/ 

#include <iostream>
#include <string>
using namespace std;


// Declare Constant Values
const int MAX_STUDENTS = 100;
const int PASSING_GRADE = 60;
const double PERFECT_SCORE = 100.0;

// Core Function
int main() {
    // Declare Variables
    string studentNames[MAX_STUDENTS]; // array to hold student names
    double studentGrades[MAX_STUDENTS]; // array to hold student grades
    int studentCount = 0;
    char addMoreStudents;
    
    // Inputs for the User
    cout << "Enter student data (name and grade):" << endl;
    do {
        if(studentCount < MAX_STUDENTS) {
            cout << "Student " << studentCount + 1 << " name: ";
            cin >> studentNames[studentCount];
            cout << "Student " << studentCount + 1 << " grade: ";
            cin >> studentGrades[studentCount];
            studentCount++;
        } else {
            cout << "Maximum number of students reached." << endl;
            break;
        }
        cout << "Do you want to enter another student? (y/n): ";
        cin >> addMoreStudents;
    } while ( addMoreStudents == 'y' || addMoreStudents == 'Y');
    
    // display all students
    cout << "\nStudent Grade Report:" << endl;
    cout << "--------------------" << endl;
    for ( int i = 0; i < studentCount; i++) {
        cout << studentNames[i] << ": " << studentGrades[i] << endl;
    }
    
    // calculate and display statistics
    double totalGrade = 0;
    double highestGrade = 0;
    double lowestGrade = PERFECT_SCORE;
    int passingCount = 0;
    
    for( int i = 0; i < studentCount; i++) {
        totalGrade += studentGrades[i];
        if (studentGrades[i] > highestGrade)
            highestGrade = studentGrades[i];
        if (studentGrades[i] < lowestGrade)
            lowestGrade = studentGrades[i];
        if (studentGrades[i] >= PASSING_GRADE)
            passingCount++;
    }

    cout << "\nClass Statistics:" << endl;
    cout << "----------------" << endl;
    cout << "Number of students: " << studentCount << endl;
    if (studentCount > 0) {
        cout << "Average grade: " << totalGrade/studentCount << endl;
        cout << "Highest grade: " << highestGrade << endl;
        cout << "Lowest grade: " << lowestGrade << endl;
        cout << "Passing rate: " << (double) passingCount / studentCount * 100 << "%" << endl;
    } else {
        cout << "No student data available." << endl;
    }
    
    // find students above average
    if (studentCount > 0) {
        cout << "\nStudents above average:" << endl;
        cout << "----------------------" << endl;
        double avg = totalGrade/studentCount;
        bool isFound = false;
        for (int i = 0; i < studentCount; i++){
            if(studentGrades[i] > avg){
                cout << studentNames[i] << " (" << studentGrades[i] << ")" << endl;
                isFound = true;
            }
        }
        if (!isFound) {
            cout << "No students above average." << endl;
        }
        
        // grade distribution
        cout << "\nGrade Distribution:" << endl;
        cout << "-----------------" << endl;

        int gradeDistribution[5] = {
            0
        };
        
        for(int i=0; i < studentCount; i++) {
            if (studentGrades[i] >= 90) gradeDistribution[0]++;
            else if (studentGrades[i]>=80)gradeDistribution[1]++;
            else if(studentGrades[i]>=70)gradeDistribution[2]++;
            else if(studentGrades[i]>=60)gradeDistribution[3]++;
            else gradeDistribution[4]++;
        }
        cout << "A (90-100): " << gradeDistribution[0] << endl;
        cout << "B (80-89): " << gradeDistribution[1] << endl;
        cout << "C (70-79): " << gradeDistribution[2] << endl;
        cout << "D (60-69): " << gradeDistribution[3] << endl;
        cout << "F (0-59): " << gradeDistribution[4] << endl;
    }

    // Programme End
    cout << "\nProgramme execution completed!" << endl;
    return 0;
}