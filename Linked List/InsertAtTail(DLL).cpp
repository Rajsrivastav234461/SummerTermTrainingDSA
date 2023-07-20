#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;
    Node*pre;

    //constructor
    Node(int x) {
       data = x;
      pre= next = NULL;
    }
};
void insertAtTail(Node* &head,int x){
	
	Node*n=new Node(x);
	if(head==NULL){
        head = n;
        return;
    }
	Node*temp=head;
	while(temp->next != NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->pre=temp;
	 
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
    Node* head = node1;
    print(head);
    insertAtTail(head,8);
    print(head);
    insertAtTail(head,23);
    print(head);
		
		
		 }
