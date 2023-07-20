

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
void deleteAtLast(Node* &head){
	Node*temp=head;
	Node*temp1=NULL;
	while(temp->next !=NULL){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=temp->next;
	//temp->pre = temp1;
	temp->next=NULL;
	delete temp;

}


int main(){
    //created a new node
    Node* node1 = new Node(10);
     node1->next = new Node(13);
     node1->next->next = new Node(14);
     node1->next->next->next = new Node(15);
     node1->next->next->next->next = new Node(16);
    Node* head = node1;
    print(head);
    deleteAtLast(head);
    print(head);
    
    
    
    
  }
