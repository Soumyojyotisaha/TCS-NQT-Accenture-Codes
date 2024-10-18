#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function providing interface for the derived classes
    virtual void draw() = 0;  // This is a pure virtual function
};

class Circle : public Shape {
public:
    // Implementation of draw function for Circle
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    // Implementation of draw function for Rectangle
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    // Abstract class reference, but object of derived classes
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    
    // Call the draw function, which is implemented differently in Circle and Rectangle
    shape1->draw();  // Output: Drawing Circle
    shape2->draw();  // Output: Drawing Rectangle
    
    // Clean up
    delete shape1;
    delete shape2;

    return 0;
}
