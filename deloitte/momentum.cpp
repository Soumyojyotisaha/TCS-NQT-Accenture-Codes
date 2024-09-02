#include <iostream>
using namespace std;

struct Node {
    int mass;
    int velocity;
    Node* next;

    // Constructor to initialize a node
    Node(int m, int v) : mass(m), velocity(v), next(nullptr) {}
};

int calculateMomentum(Node* head) {
    int totalMomentum = 0;
    Node* curr = head;
    while (curr != nullptr) {
        totalMomentum += (curr->mass) * (curr->velocity);
        curr = curr->next;
    }
    return totalMomentum;
}

int main() {
    int n;
    cin >> n;
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    for (int i = 0; i < n; i++) {
        int mass, velocity;
        cin >> mass >> velocity;
        Node* newNode = new Node(mass, velocity);
        
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    cout << calculateMomentum(head) << endl;

    // Cleanup: delete allocated nodes
    Node* curr = head;
    while (curr != nullptr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }

    return 0;
}
