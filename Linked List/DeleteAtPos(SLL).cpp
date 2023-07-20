 #include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Delete at head
void deleteAtHead(Node* &head) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

// Delete at given position
void deleteAtPos(Node* &head, int pos) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (pos == 1) {
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    Node* prev = NULL;
    int cnt = 1;

    while (temp != NULL && cnt < pos) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

// Print the linked list
void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a new linked list
    Node* node1 = new Node(10);
    node1->next = new Node(30);
    node1->next->next = new Node(40);
    Node* head = node1;

    // Print the initial list
    cout << "Initial list: ";
    print(head);

    // Delete node at position 2
    deleteAtPos(head, 2);
    cout << "List after deleting at position 2: ";
    print(head);

    return 0;
}

