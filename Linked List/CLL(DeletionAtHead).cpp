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
	
	
	
	  Node*node1=new Node(23);
	  node1->next=new Node(45);
	  node1->next->next=new Node(55);
	  node1->next->next->next=node1;
    Node* head = node1;
    DeletionAtHead(head);
   print(head);
     
		}

