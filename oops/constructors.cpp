#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Person(string pname, int page) {
        name = pname;
        age = page;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Function to display details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating person1 using default constructor
    Person person1;
    person1.display();  // Output: Name: Unknown, Age: 0

    // Creating person2 using parameterized constructor
    Person person2("John", 25);
    person2.display();  // Output: Name: John, Age: 25

    // Creating person3 using copy constructor
    Person person3 = person2;
    person3.display();  // Output: Name: John, Age: 25

    // The destructors will be automatically called for person1, person2, and person3
    return 0;
}
