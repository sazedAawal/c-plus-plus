#include "advanced_math.h"
#include <cmath> // For sqrt function
using namespace std;

// Implementation of the power function
double power(double base, int exponent) {
    // Implementation here
    return pow(base, exponent);
}
// Implementation of the squrare root function
double squareRoot(double number) {
    // Implementation here
    return sqrt(number);
}
// Implementation of the absolute function
double absolute(double number) {
    // Implementation here
    if (number < 0) {
        return -number;
    } else {
        return number;
    }
}

// Extra Function

double cube(double number) {
    return number * number * number;
}