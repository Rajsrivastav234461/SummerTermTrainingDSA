
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

 void DeletionAtEnd(Node* &head) {
    if (head == NULL) {
        cout << "Empty circular linked list" << endl;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    delete temp;
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
  print(head);
  DeletionAtEnd(head);
  print(head);
	
	
	
	}



