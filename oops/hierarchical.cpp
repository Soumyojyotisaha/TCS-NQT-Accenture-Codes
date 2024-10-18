#include <iostream>
using namespace std;

class Vehicle {
public:
    void run() {
        cout << "Vehicle running..." << endl;
    }
};

// Hierarchical inheritance: Car and Bike inherit from Vehicle
class Car : public Vehicle {
public:
    void carFeature() {
        cout << "Car specific feature" << endl;
    }
};

class Bike : public Vehicle {
public:
    void bikeFeature() {
        cout << "Bike specific feature" << endl;
    }
};

int main() {
    Car c;
    c.run();         // Inherited from Vehicle
    c.carFeature();  // Defined in Car

    Bike b;
    b.run();         // Inherited from Vehicle
    b.bikeFeature(); // Defined in Bike
    return 0;
}
