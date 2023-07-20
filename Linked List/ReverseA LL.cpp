#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        next = NULL;
    }
};
/*Node* reverse(Node* &head){
	Node*curr=head;
	Node*pre=NULL;
	Node*forward=NULL;
	while(curr!=NULL){
		forward=curr->next;
		curr->next=pre;
 		pre=curr;  
		curr=forward;
	}
	head=pre;
	return head;

	}*/
	
 Node* reverse(Node* head) {
    // Base case: Empty list or single node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive call to reverse the remaining list
    Node* reversedList = reverse(head->next);

    // Reverse the connections
    head->next->next = head;
    head->next = NULL;

    return reversedList;
}

void print(Node* &head){
Node*curr=head;
while(curr!=NULL){
	cout<<curr->data<<" ";
	curr=curr->next;	
}cout<<endl;
}

int main(){
	Node*node1=new Node(3);
	node1->next=new Node(4);
	node1->next->next=new Node(5);
	node1->next->next->next=new Node(6);
	Node*head=node1;
	print(head);
	head=reverse(head);
	print(head);
}
