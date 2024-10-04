#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
stack<int> minStack;

void push(int x) {
    s.push(x);
    if (minStack.empty() || x <= minStack.top()) {
        minStack.push(x);
    }
}

void pop() {
    if (s.empty()) {
        cout << "Stack is empty, cannot pop!" << endl;
        return;
    }
    if (s.top() == minStack.top()) {
        minStack.pop();
    }
    s.pop();
}

int top() {
    if (s.empty()) {
        cout << "Stack is empty!" << endl;
        return -1; // Returning -1 to indicate the stack is empty
    }
    return s.top();
}

int getMin() {
    if (minStack.empty()) {
        cout << "Stack is empty, no minimum!" << endl;
        return -1; // Returning -1 to indicate the stack is empty
    }
    return minStack.top();
}

int main() {
    int choice, value;
    
    while (true) {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Get Top\n";
        cout << "4. Get Minimum\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << "Top element: " << top() << endl;
                break;
            case 4:
                cout << "Minimum element: " << getMin() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}
