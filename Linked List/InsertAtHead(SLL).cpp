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
 void insertAtHead(Node* &head,int x){
 	//creating new node which will traverse the linked list
	 Node*temp=new Node(x);
	 temp->next=head;
	 head=temp;
 	
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
    insertAtHead(head,23);
    print(head);

}
