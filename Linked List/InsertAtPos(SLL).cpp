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
//insert at head
 void insertAtHead(Node* &head,int x){
 	//creating new node which will traverse the linked list
	 Node*temp=new Node(x);
	 temp->next=head;
	 head=temp;
 	
 }

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
		
		
	void	insertAtPos(Node* &head,int pos,int x){
			Node*temp=head;
			int cnt=1;
			while(cnt<pos-1){
				temp=temp->next;
				cnt++;
			}
			if(pos==1){
				insertAtHead(head,x);
				return ;
			}
			if(temp->next==NULL){
				insertAtTail(head,x);
				return;
			}
			//creating a node which will insert in between
			Node*n1=new Node(x);
			n1->next=temp->next;
			temp->next=n1;
	
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
    insertAtPos(head,3,45);
    print(head);
  }
