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
//delete at last
void deleteAtLast(Node* &head){
if (head == NULL) {
    cout << "List is empty" << endl;
      return;
}
//if there is only one nosxw
		if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
Node*temp=head;
Node*temp1=head;
while(temp->next !=NULL){
	 temp1=temp;
	 temp=temp->next;
}
temp1->next=NULL;
delete temp;
temp=NULL;
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
    node1->next->next=new Node(40);
    Node* head = node1; 
    print(head);
    deleteAtLast(head);
    print(head);
  }
