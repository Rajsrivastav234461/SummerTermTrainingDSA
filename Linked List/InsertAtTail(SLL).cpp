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

//insert At Tail
void insertAtTail(Node* &head, int x){
    Node *n = new Node(x);
  
    if(head==NULL){
        head = n;
        return;
    }
		
     Node* temp = head;
    //it will check untill temp->next !=NULL
    while(temp->next!=NULL){
    	temp=temp->next;
		}
		//come outside the loop
		temp->next=n;
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
    Node* head = node1; 
    print(head);
    insertAtTail(head,34);
    print(head);
  }
    
    
    
