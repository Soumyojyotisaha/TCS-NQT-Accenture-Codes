#include <iostream>
using namespace std;

class Student {
private:
    // Private data member for age (hidden from outside)
    int age;

public:
    // Setter method to set the age
    void setAge(int sAge) {
        if (sAge > 0) {  // Simple validation for age
            age = sAge;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter method to get the age
    int getAge() {
        return age;
    }

    // Function to display student's age
    void displayAge() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student;

    // Set the age using setter method
    student.setAge(20);

    // Display student's age using public method
    student.displayAge();  // Output: Age: 20

    // Accessing age through getter method
    cout << "Student Age: " << student.getAge() << endl;  // Output: Student Age: 20

    return 0;
}
