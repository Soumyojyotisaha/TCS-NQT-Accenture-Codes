#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool search(Node* head, int x) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}

int main() {
    Node* head = nullptr;
    Node* temp = nullptr;
    int n, value, x;

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

    cout << "Enter value to search: ";
    cin >> x;

    if (search(head, x)) {
        cout << x << " is present in the list.\n";
    } else {
        cout << x << " is not present in the list.\n";
    }

    return 0;
}
