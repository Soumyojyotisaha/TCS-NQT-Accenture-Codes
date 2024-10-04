#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* findMiddle(Node* head) {
    if (head == nullptr) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;        // Move slow pointer one step
        fast = fast->next->next;  // Move fast pointer two steps
    }

    return slow; // slow will be pointing to the middle node
}

int main() {
    // Creating the linked list 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    head->next->next->next->next = new Node{5, nullptr};

    Node* middle = findMiddle(head);
    
    if (middle != nullptr) {
        cout << "The middle node value is: " << middle->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}
