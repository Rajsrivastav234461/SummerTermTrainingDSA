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
void InsertTail(Node* &tail,int x){
	Node*temp=new Node(x);
	tail->next=temp;
	tail=temp;
}
void print(Node* &head){
	Node*curr=head;
	while(curr->next!=NULL){
		cout<<curr->next->data<<" ";
		curr=curr->next;
	}cout<<endl;
}

int main(){
	Node *node1=new Node(10);
	node1->next=new Node(20);
	Node*head=node1;
	Node *tail=node1;
	print(head);
	//InsertTail(tail,12);
	//print(head);
	}
