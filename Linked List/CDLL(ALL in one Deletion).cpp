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

void deleteHead(Node* &head) {
    if (head == NULL) {
        cout << "Empty circular doubly linked list" << endl;
        return;
    }

    if (head->next == head) { // Single node in the list
        delete head;
        head = NULL;
        return;
    }

    Node* last = head->prev;
    last->next = head->next;
    head->next->prev = last;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node* &head) {
    if (head == NULL) {
        cout << "Empty circular doubly linked list" << endl;
        return;
    }

    if (head->next == head) { // Single node in the list
        delete head;
        head = NULL;
        return;
    }

    Node* last = head->prev;
    last->prev->next = head;
    head->prev = last->prev;
    delete last;
}

void deleteNode(Node* &head, int key) {
    if (head == NULL) {
        cout << "Empty circular doubly linked list" << endl;
        return;
    }

    if (head->data == key) { // Deleting the head node
        deleteHead(head);
        return;
    }

    Node* current = head->next;

    while (current != head) {
        if (current->data == key) {
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            return;
        }
        current = current->next;
    }

    cout << "Node with key " << key << " not found in the list" << endl;
}

void printList(Node* head) {
    if (head == NULL) {
        cout << "Empty circular doubly linked list" << endl;
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

    // Creating a circular doubly linked list
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    head = node1;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = head;
    head->prev = node4;

    printList(head);

    // Deleting nodes
    deleteNode(head, 30); // Deleting an intermediate node
    printList(head);

    deleteNode(head, 10); // Deleting the head node
    printList(head);

    deleteNode(head, 50); // Deleting a non-existent node
    printList(head);

    deleteAtEnd(head); // Deleting the tail node
    printList(head);

    return 0;
}

