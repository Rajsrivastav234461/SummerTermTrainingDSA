#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next=NULL;
		Node(int x){
			data=x;
			next=NULL;
		}
};
//inserting element to tail
void insertAtTail(Node* &tail,int x){
		Node *temp=new Node(x);
		tail->next=temp;
		tail=temp;
}

//inserting an element at begin by creating new node called temp
/*void insertAtHead(Node* &head,int x){
	Node *temp=new Node(x);
	temp->next=head;
	head=temp;
	}*/
	
//traversing 
void print(Node* &head){
	Node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}cout<<endl;
}

int main(){
	Node *node1=new Node(10);
	Node *tail=node1;
//	node1->next=new Node(20);
///cout<<node1->next->data<<endl;
Node *head=node1;

//print(head);
//insertAtHead(head,12);
print(head);

//insert At Tail
insertAtTail(tail,14);
print(head);
insertAtTail(tail,15);
print(head);
 
  
  
  
  




}
