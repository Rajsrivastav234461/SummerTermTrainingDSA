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
void insertAtHead(Node* &head,int x){
	Node*temp=new Node(x);
	temp->next=head;
	head->pre=temp;
	head=temp;
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
    //Node*temp=NULL;
    print(head);
    insertAtHead(head,34);
    print(head);
     
    
    
  }
