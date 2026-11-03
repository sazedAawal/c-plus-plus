#include <iostream>
#include "basic_math.h"
#include "advanced_math.h"
#include "geometry.h"
#include "statistics.h"

using namespace std;

int main() {
    cout << "--- MATH LIBRARY DEMONSTRATION ---" << endl;
    // Test basic math operations
    cout << "\n--- Basic Math ---" << endl;
    cout << "Addition: 5 + 3 = " << add(5,3) << endl;
    cout << "Subtraction: 5 - 3 = " << subtract(5,3) << endl;
    cout << "Multiplication: 5 * 3 = " << multiply(5,3) << endl;
    cout << "Division: 5 / 3 = " << divide(5,3) << endl;
    // Test advanced math operations
    cout << "\n--- Advanced Math ---" << endl;
    cout << "Power: 2^3 = " << endl;
    cout << "Square Root of 16 = " << squareRoot(16) << endl;
    cout << "Absolute of -7.5 = " << absolute(-7.5) << endl;
    // Test geometric calculations
    cout << "\n--- Geometry ---" << endl;
    double radius = 5.0;
    cout << "Circle with radius " << radius << ":" << endl;
    cout << " Area = " << circleArea(radius) << endl;
    cout << " Perimeter = " << circlePerimeter(radius) << endl;
    double length = 4.0, width = 6.0;
    cout << "Rectable with length " << length << " and width" 
        << width << ":" << endl;
    cout << " Area = " << rectangleArea(length, width) << endl;
    cout << " Perimeter = " << rectanglePerimeter(length, width) << endl;
    // Extra function
    cout << "Cube of 3 = " << cube(3) << endl;
    // Statistics Section
    cout << "\n--- Statistics ---" << endl;
    double data[] = {4.2, 7.8, 3.1, 9.5, 2.6};
    int dataSize = sizeof(data) / sizeof(data[0]);
    cout << "Data set: ";
    for (int i = 0; i < dataSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "Average = " << average(data, dataSize) << endl;
    cout << "Minimum = " << minimum(data, dataSize) << endl;
    cout << "Maximum = " << maximum(data, dataSize) << endl;

    // Return Statement
    return 0;
}