#include <iostream>
#include <cmath> // For sqrt and pow
using namespace std;

// Function to calculate the perimeter of a triangle
float calculatePerimeter(float x1, float y1, float x2, float y2, float x3, float y3) {
    // Calculate the distances between the points
    float firstDiff = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float secondDiff = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float thirdDiff = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    // Calculate and return the perimeter
    return firstDiff + secondDiff + thirdDiff;
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input coordinates
    cout << "Enter x1, y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2, y2: ";
    cin >> x2 >> y2;
    cout << "Enter x3, y3: ";
    cin >> x3 >> y3;

    // Calculate the perimeter and print it
    float perimeter = calculatePerimeter(x1, y1, x2, y2, x3, y3);
    cout << "The perimeter of the triangle is: " << perimeter << endl;

    return 0;
}

