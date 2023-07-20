#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node(int x){
			data=x;
			next=NULL;
		}
};
//insert at tail
void insertAtTail(Node* &head,int x){
	Node* n=new Node(x);
	Node*temp=head;
	while(temp->next !=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
}
// insert at head
void insertAtHead(Node* &head,int x){
		Node* n=new Node(x);
//	if(head==NULL){
//			insertAtHead(head, x){
//				return ;
//			}
		
	Node*temp=head;
	while(temp->next != head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
	head=n;
}

//void print(Node* &head){
//	Node*curr=head;
//	while(curr!=NULL){
//		cout<<curr->data<<" ";
//		curr=curr->next;
//	}cout<<endl;
//}


void display(Node* head){
	Node* temp=head;
	do{
		cout<<head->data<<" ";
		head=head->next;
	}
	while(temp != head);
	cout<<endl;
}

int main(){
	Node*node1=new Node(20);
	Node*head=node1;
	insertAtTail(head,23);
	//print(head);
	//insertAtHead(head,34);
	display(head);
	
	
	
	
	
	
	
}
