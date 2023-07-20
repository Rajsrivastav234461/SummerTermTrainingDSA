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

void insertAtPos(Node* &head, int pos, int x) {
    if (pos == 1) {
        insertAtHead(head, x);
        return;
    }

    Node* temp = head;
    int cnt=1;
     while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    Node* toinsert = new Node(x);
    toinsert->next = temp->next;
    temp->next = toinsert;
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
    Node* head = NULL;

    // Insert nodes into the circular linked list
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    // Display the circular linked list
    cout << "Original list: ";
    print(head);

    // Insert a node at position 1
    insertAtPos(head, 3, 56);
    cout << "List after insertion: ";
    print(head);

    return 0;
}

