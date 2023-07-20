
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
void insertAtPos(Node* &head,int pos,int x){
	Node*toInsert=new Node(x);
	if(pos==1){
		insertAtHead(head,x);
		return;
	}
	Node*temp=head;
	int cnt=1;
	while(cnt<pos-1 && temp != NULL){
		temp=temp->next;
     cnt++;
	}
	toInsert->next=temp->next;
	if (temp->next != NULL) {
    temp->next->pre = toInsert;
    }
	temp->next=toInsert;
	toInsert->pre=temp;
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
    insertAtHead(head,78);
    insertAtHead(head,88);
    print(head);
    cout<<"after enter the pos 2 updated LL will"<<endl;
    insertAtPos(head,3,45);
     print(head);
		
		
		}
    
    
