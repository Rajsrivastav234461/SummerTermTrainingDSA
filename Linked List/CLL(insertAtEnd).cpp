#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    //constructor
    Node(int x) {
        data = x;
        next = NULL;
    }
};
void insertAtEnd(Node* &head, int x) {
    Node* temp = new Node(x);

    if (head == NULL) {
        temp->next = temp;
        head = temp;
        return;
    }

    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    temp->next = head;
    last->next = temp;
    
}

void print(Node* &head) {
    if (head == NULL) {
        cout << "Empty circular linked list" << endl;
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
    Node* node1 = new Node(10);
    node1->next = new Node(34);
		node1->next->next = new Node(44);
		node1->next->next->next=node1;
    Node* head = node1;
    print(head); // Output: 78 10
    insertAtEnd(head,78);
print(head);
    return 0;
}
