 #include<iostream>
#include<map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


Node* DetectLoop(Node* &head) {
    Node* slow = head;
    Node* fast=head;
    while(fast!=NULL && slow!=NULL){
    	fast=fast->next;
    	if(fast!=NULL){
    		fast=fast->next;
			}
			slow=slow->next;
			if(slow==fast){
				//cout<<"loop is present "<<fast->data<<" ";
				return slow;
			}
		}
		return NULL;
	}
	Node*getStartingNode(Node* &head){
		if(head==NULL){
			return NULL;
		}
		Node*intersection=DetectLoop(head);
		Node*slow=head;
		while(slow!=intersection){
			slow=slow->next;
			intersection=intersection->next;
		}
		return slow;
	}
	Node*RemoveLoop(Node* &head){
		if(head==NULL){
			return NULL;
		}
		Node*StartOfLoop=getStartingNode(head);
		Node*temp=StartOfLoop;
		while(temp->next!=StartOfLoop){
			temp=temp->next;
		}
		temp->next=NULL;
	}
	void print(Node* &head){
		Node*curr=head;
		do{ 
		 cout<<curr->data<<" ";
		 curr=curr->next;
		}
		while(curr!=NULL);
	cout<<"NULL"<<endl;}

	
	
	
int main() {
 
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    //head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2; 
    if(DetectLoop(head)!=NULL){
    	cout<<"loop is present"<<endl;
		}
		else{
			cout<<"not present";
		}
    Node*StartingNode=getStartingNode(head);
    if(StartingNode){
    	cout<<"loop's starting node is"<<StartingNode->data<<" "<<" "<<endl;
		}
		else{
			cout<<"not present";
		}
		RemoveLoop(head);
		print(head);
  }
