#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to delete a node from the linked list
void deleteNode(Node* node) {
    node->data = node->next->data;
    Node* temp = node->next;
    node->next = node->next->next;
    delete temp;
}

// Function to add a new node at the end of the linked list
void append(Node*& head, int newData) {
    Node* newNode = new Node{newData, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* last = head;
    while (last->next) {
        last = last->next;
    }
    last->next = newNode;
}

int main() {
    Node* head = nullptr;
    int n, dataToDelete;

    // Asking for the number of elements
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    // Input for linked list elements
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        append(head, value);
    }

    // Asking the user which node they want to delete
    cout << "Enter the value of the node you want to delete: ";
    cin >> dataToDelete;

    // Finding the node to delete
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->data == dataToDelete) {
            deleteNode(current);
            break;
        }
        current = current->next;
    }

    // Output the linked list after deletion
    cout << "Linked list after deletion: ";
    current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
