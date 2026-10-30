#include <iostream>

using namespace std;

int main() {
    cout << "--- NUMBER PROCESSOR ---" << endl;
    cout << "\nProcessing numbers 1-20: " << endl;
    cout << "- Skip multiples of 3" << endl;
    cout << "- Stop when reaching 15" << endl;
    for (int num = 1; num <= 20; num++) {
        // Skip multiples of 3
        if (num % 3 == 0) {
            cout << num << " (skipped - multiple of 3)" << endl;
            continue; // Skip rest of loop body, go to next iteration
        }
        // Stop processing when reaching 15
        if (num >= 15) {
            cout << num << " (stopping here)" << endl;
            break; // Exit loop completely
        }
        // Process the number
        cout << num << " (processed)" << endl;
    }
    cout << "\nLoop finished" << endl;
    // Example: Finding first even number in a list
    cout << "\nFinding first even number in list:" << endl;
    int numbers[] = {7, 13, 9, 14, 11, 8, 5};
    int arraySize = 7;
    for (int i = 0; i < arraySize; i++) {
        cout << "Checking " << numbers[i] << "...";
        if (numbers[i] % 2 == 0) {
            cout << "Found first even number: " << numbers[i] << endl;
            break; // Stop searching once we find the first even number
        } else {
            cout << "odd, continuing..." << endl;
        }
    }
}