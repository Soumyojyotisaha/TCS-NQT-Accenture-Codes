#include <iostream>
using namespace std;

class A {
public:
    void functionA() {
        cout << "Function A" << endl;
    }
};

class B {
public:
    void functionB() {
        cout << "Function B" << endl;
    }
};

// Multiple inheritance: C inherits from both A and B
class C : public A, public B {
};

int main() {
    C obj;
    obj.functionA();  // Inherited from class A
    obj.functionB();  // Inherited from class B
    return 0;
}
