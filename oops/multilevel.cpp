#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived from Animal
class Mammal : public Animal {
public:
    void feedMilk() {
        cout << "Feeding milk..." << endl;
    }
};

// Further derived from Mammal
class Human : public Mammal {
public:
    void speak() {
        cout << "Speaking..." << endl;
    }
};

int main() {
    Human h;
    h.eat();      // Inherited from Animal
    h.feedMilk(); // Inherited from Mammal
    h.speak();    // Defined in Human
    return 0;
}
