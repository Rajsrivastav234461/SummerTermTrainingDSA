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
bool CircularCheck(Node* &head){
	Node*slow=head;
	Node*fast=head;
	while(slow!=NULL && fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
		}
		slow=slow->next;
	
	if(slow==fast){
		return true;
	}
	}
	return false;
}




int main(){
	Node*node1=new Node(20);
	Node*node2=new Node(24);
	Node*node3=new Node(25);
	Node*node4=new Node(26);
 node1->next=node2;
 node2->next=node3;
 node3->next=node4;
 node4->next=node1;
	Node*head=node1;
	bool ans=CircularCheck(head);
	if(ans){
		cout<<"true";
	}
	else {
		cout<<"false";
	}
	}
