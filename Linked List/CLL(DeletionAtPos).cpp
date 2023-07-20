
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
void DeletionAtHead(Node* &head){
	Node*temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=NULL;
	head=head->next;
	
}
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
 void DeletionAtPos(Node* &head, int pos) {
    if (head == NULL) {
        cout << "Empty circular linked list" << endl;
        return;
    }

    Node* temp = head;
    Node* toDelete = NULL;
    int cnt = 1;

    while (cnt < pos - 1) {
        temp = temp->next;
        cnt++;
    }

    /*if (temp == NULL || temp->next == head) {
        cout << "Invalid position" << endl;
        return;
    }*/

    if (pos == 1) {
        DeletionAtHead(head);
        return;
    }

    toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
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
    insertAtHead(head, 50);
  print(head);
DeletionAtPos(head,1);
print(head);
}
