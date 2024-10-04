#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool hasCycle(Node* head) {
    if (head == nullptr || head->next == nullptr) return false;
    Node* slow = head;
    Node* fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        if (slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

int main() {
    Node* head = new Node{3, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{0, nullptr};
    head->next->next->next = new Node{-4, head->next}; // Creates a cycle

    if (hasCycle(head)) {
        cout << "Cycle detected.\n";
    } else {
        cout << "No cycle.\n";
    }

    return 0;
}
