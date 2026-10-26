/*
 * File: student_grades_solution.cpp
 * Author: C++ Programming Fundamentals Student
 * Date: August 15, 2023
 * Purpose: This program processes student grades by allowing entry of student names
 *          and scores, calculating statistics, and displaying results.
 */

#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Constants
const int MAX_STUDENTS = 10;
const double MIN_GRADE = 0.0;
const double MAX_GRADE = 100.0;
const double PASSING_GRADE = 60.0;

// Function Declarations
int collectStudentData(string names[], double grades[]);
void displayStudentGrades(const string names[], const double grades[], int count);
double calculateAverage(const double grades[], int count);
double findHighestGrade(const double grades[], int count);
double findLowestGrade(const double grades[], int count);
double calculatePassingRate(const double grades[], int count);
void displayClassStatistics(const double grades[], int count);
void displayAboveAverageStudents(const string names[], const double grades[], int count);
void displayGradeDistribution(const double grades[], int count);

int main() {
    string studentNames[MAX_STUDENTS];
    double studentGrades[MAX_STUDENTS];

    int studentCount = collectStudentData(studentNames, studentGrades);

    displayStudentGrades(studentNames, studentGrades, studentCount);
    displayClassStatistics(studentGrades, studentCount);

    if (studentCount > 0) {
        displayAboveAverageStudents(studentNames, studentGrades, studentCount);
        displayGradeDistribution(studentGrades, studentCount);
    }

    return 0;
}

int collectStudentData(string names[], double grades[]) {
    int count = 0;
    char choice;

    cout << "Enter student data (name and grade):" << endl;

    do {
        if (count >= MAX_STUDENTS) {
            cout << "Maximum number of students reached." << endl;
            break;
        }

        cout << "Student " << count + 1 << " name: ";
        cin >> names[count];

        cout << "Student " << count + 1 << " grade: ";
        cin >> grades[count];

        while (grades[count] < MIN_GRADE || grades[count] > MAX_GRADE) {
            cout << "Invalid grade! Enter a grade between " << MIN_GRADE << " and " << MAX_GRADE << ": ";
            cin >> grades[count];
        }

        count++;

        cout << "Do you want to enter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return count;
}

void displayStudentGrades(const string names[], const double grades[], int count) {
    cout << "\nStudent Grade Report:\n--------------------" << endl;
    for (int i = 0; i < count; i++) {
        cout << names[i] << ": " << grades[i] << endl;
    }
}

double calculateAverage(const double grades[], int count) {
    if (count == 0) return 0.0;

    double total = 0;
    for (int i = 0; i < count; i++) {
        total += grades[i];
    }

    return total / count;
}

double findHighestGrade(const double grades[], int count) {
    if (count == 0) return 0.0;

    double highest = grades[0];
    for (int i = 1; i < count; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }

    return highest;
}

double findLowestGrade(const double grades[], int count) {
    if (count == 0) return 0.0;

    double lowest = grades[0];
    for (int i = 1; i < count; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }

    return lowest;
}

double calculatePassingRate(const double grades[], int count) {
    if (count == 0) return 0.0;

    int passing = 0;
    for (int i = 0; i < count; i++) {
        if (grades[i] >= PASSING_GRADE) {
            passing++;
        }
    }

    return static_cast<double>(passing) / count * 100;
}

void displayClassStatistics(const double grades[], int count) {
    cout << "\nClass Statistics:\n----------------" << endl;
    cout << "Number of students: " << count << endl;

    if (count > 0) {
        cout << "Average grade: " << calculateAverage(grades, count) << endl;
        cout << "Highest grade: " << findHighestGrade(grades, count) << endl;
        cout << "Lowest grade: " << findLowestGrade(grades, count) << endl;
        cout << "Passing rate: " << calculatePassingRate(grades, count) << "%" << endl;
    } else {
        cout << "No student data available." << endl;
    }
}

void displayAboveAverageStudents(const string names[], const double grades[], int count) {
    double average = calculateAverage(grades, count);
    bool found = false;

    cout << "\nStudents above average:\n----------------------" << endl;
    for (int i = 0; i < count; i++) {
        if (grades[i] > average) {
            cout << names[i] << " (" << grades[i] << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No students above average." << endl;
    }
}

void displayGradeDistribution(const double grades[], int count) {
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    for (int i = 0; i < count; i++) {
        if (grades[i] >= 90) {
            gradeA++;
        } else if (grades[i] >= 80) {
            gradeB++;
        } else if (grades[i] >= 70) {
            gradeC++;
        } else if (grades[i] >= 60) {
            gradeD++;
        } else {
            gradeF++;
        }
    }

    cout << "\nGrade Distribution:\n-----------------" << endl;
    cout << "A (90-100): " << gradeA << endl;
    cout << "B (80-89): " << gradeB << endl;
    cout << "C (70-79): " << gradeC << endl;
    cout << "D (60-69): " << gradeD << endl;
    cout << "F (0-59): " << gradeF << endl;
}