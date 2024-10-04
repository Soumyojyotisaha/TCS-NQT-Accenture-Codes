#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    Node* head = nullptr;
    Node* temp = nullptr;
    int n, value;

    cout << "Enter the number of nodes: ";
    cin >> n;

    // Building the linked list based on user input
    for (int i = 0; i < n; ++i) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        if (head == nullptr) {
            head = new Node{value, nullptr};
            temp = head;
        } else {
            temp->next = new Node{value, nullptr};
            temp = temp->next;
        }
    }

    cout << "Number of nodes in the list: " << countNodes(head) << endl;
    return 0;
}
