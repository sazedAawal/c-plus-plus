#include <iostream>
#include <cmath>

using namespace std;

#define SQUARE(x) ((x) * (x))


int main() {
    double radius = 5.0;
    double area = 3.14159 * SQUARE(radius);
    cout << "Area of circle: " << area << endl;
    cout << "Square root: " << sqrt(area) << endl;
    return 0;
}