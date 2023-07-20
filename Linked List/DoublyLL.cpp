#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*pre;
		Node*next;
		//constructor
		Node(int d){
			data=d;
			pre=NULL;
			next=NULL;
		}
	
};
//traversing a linked list
void print(Node* &head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


//to get the lenght
int getLength(Node*head){
	int len=0;
	Node*temp=head;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	return len;
}
//insert at begin
void insertAtHead(Node* &head,int d){
	Node*temp=new Node(d);
	temp->next=head;
	head->pre=temp;
	head=temp;
}
//insert at last
void insertAtTail(Node* &tail,int d){
	Node*temp=new Node(d);
	tail->next=temp;
	temp->pre=tail;
	tail=temp;
	
}
//insert at any position
/*void insertAtPos(Node* &tail,Node* &head,int position,int d){
	//insert at start
	if(position==1){
		insertAtHead(head,d);
		return;
	}
	Node*temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	//inserting at last position
	if(temp->next==NULL){
	
	insertAtTail(tail,d);
	return ;
}*/


//creating node for d
//Node*nodetoinsert=new Node(d);
//nodetoinsert->next=temp->next;
//temp->next->pre=nodetoinsert;
//temp->next=nodetoinsert;
//nodetoinsert->pre=temp;

//}


int main(){
	Node*node1=new Node(10);
		Node*head=node1;
		Node*tail=node1;
		//print(head);
		//cout<<getLength(head)<<endl;
	insertAtHead(head,11);
	print(head);
		//insertAtHead(head,12);
//	print(head);
//	insertAtTail(tail,13);
//	print(head);
	insertAtTail(tail,15);
	print(head);
	/*insertAtPos(tail,head,1,67);
	print(head);
	insertAtPos(tail,head,3,69);
	print(head);
	insertAtPos(tail,head,5,80);
	print(head);*/
	
	
	return 0;
	
	
	
	
	
}
