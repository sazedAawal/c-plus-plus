#include <iostream>
#include "word-counter.h"
#include <sstream>
#include <string>

using namespace std;

void wordCounter(){
    cout << "--- WORD COUNTER ---" << endl;
    cout << "Please enter your text: " << endl;
    string words;
    cin >> words;
    int result = countWords(words);
    cout << "The total word count is: " << result << endl;
}

int countWords(const string& s) {
    stringstream ss(s);
    string words;
    int count = 0;
    while (ss >> words) {
        count++;
    }
    return count;
}