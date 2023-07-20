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



bool IfCircular(Node* &head){
	Node*temp=head->next;
	while(temp !=NULL && temp!=head){
		temp=temp->next;
	}
	if(temp==head){
		return true;
	}
	else {
		return false;
	}
}

void printCircularLinkedList(Node* head) {
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
    // Creating a circular linked list with three nodes

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    node1->next = node2;
    node2->next = node3;
    node3->next = node1;  // Pointing back to the head

    Node* head = node1;

    // Printing the circular linked list
    printCircularLinkedList(head);
     bool ans=IfCircular(head);
     cout<<ans;
    return 0;
}

