#include <iostream>
using namespace std;

class A {
public:
    void functionA() {
        cout << "Function A" << endl;
    }
};

class B : public A {
public:
    void functionB() {
        cout << "Function B" << endl;
    }
};

class C {
public:
    void functionC() {
        cout << "Function C" << endl;
    }
};

// Hybrid inheritance: D inherits from both B and C
class D : public B, public C {
public:
    void functionD() {
        cout << "Function D" << endl;
    }
};

int main() {
    D obj;
    obj.functionA();  // Inherited from A (via B)
    obj.functionB();  // Inherited from B
    obj.functionC();  // Inherited from C
    obj.functionD();  // Defined in D
    return 0;
}
