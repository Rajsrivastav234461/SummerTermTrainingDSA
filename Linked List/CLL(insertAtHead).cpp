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

void insertAtHead(Node* &head, int x) {
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
    head = temp;
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
    node1->next = node1; // Make it a self-referencing circular list
    Node* head = node1;

    print(head); // Output: 10
    insertAtHead(head, 78);
    print(head); // Output: 78 10

    return 0;
}

