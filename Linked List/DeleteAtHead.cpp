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
void deleteAtHead(Node* &head){
	if (head == NULL) {
        return;
    }
	Node*temp=head;
	
	head=head->next;
	temp->next=NULL;
	//delete temp;
	
}

void print(Node* &head) {
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;
    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    //created a new node
    Node* node1 = new Node(10);
    node1->next=new Node(30);
    node1->next->next=new Node(40);
    Node* head = node1; 
    print(head);
    deleteAtHead(head);
    print(head);
  }
