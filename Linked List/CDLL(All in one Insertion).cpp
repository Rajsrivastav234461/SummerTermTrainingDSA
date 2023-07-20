#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int x) {
    Node* newNode = new Node(x);

    if (head == NULL) {
        head = newNode;
        head->next = head;
        head->prev = head;
        return;
    }

    Node* last = head->prev;
    newNode->next = head;
    newNode->prev = last;
    head->prev = newNode;
    last->next = newNode;
    head = newNode;
}

void insertAtEnd(Node* &head, int x) {
    Node* newNode = new Node(x);

    if (head == NULL) {
        head = newNode;
        head->next = head;
        head->prev = head;
        return;
    }

    Node* last = head->prev;
    newNode->next = head;
    newNode->prev = last;
    head->prev = newNode;
    last->next = newNode;
}

void insertAtPosition(Node* &head, int x, int pos) {
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1) {
        insertAtHead(head, x);
        return;
    }

    Node* current = head;
    int cnt = 1;

    while (current != NULL && cnt < pos - 1) {
        current = current->next;
        cnt++;
    }

    if (current == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* newNode = new Node(x);
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL) {
        current->next->prev = newNode;
    }
    current->next = newNode;
}

void printList(Node* head) {
    if (head == NULL) {
        cout << "Empty doubly circular linked list" << endl;
        return;
    }

    Node* current = head;

    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);

    cout << endl;
}

int main() {
    Node* head = NULL;

    // Insertion at head
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    // Print the list
    cout << "Doubly circular linked list after insertion at head: ";
    printList(head);

    // Insertion at end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    // Print the list
    cout << "Doubly circular linked list after insertion at end: ";
    printList(head);

    // Insertion at position
    insertAtPosition(head, 25, 2);
    insertAtPosition(head, 35, 4);

    // Print the list
    cout << "Doubly circular linked list after insertion at position: ";
    printList(head);

    return 0;
}

