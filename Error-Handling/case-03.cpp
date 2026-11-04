// Runtime Error
#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, result;
    cout << "Enter two numbers for division: ";
    cin >> dividend >> divisor;
    //int result = dividend / divisor; // Conditional Missing for Run time error in case of input is 0
    if (divisor == 0) {
        cout << "Can't divide by Zero!" << endl;
    } else {
        result = dividend / divisor;
        cout << dividend << " / " << divisor << " = " << result << endl;
    }
    return 0;
}