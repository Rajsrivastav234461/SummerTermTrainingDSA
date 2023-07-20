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

bool DetectLoop(Node* &head) {
    Node* slow = head;
    Node* fast=head;
    while(fast!=NULL && slow!=NULL){
    	fast=fast->next;
    	if(fast!=NULL){
    		fast=fast->next;
			}
			slow=slow->next;
			if(slow==fast){
				cout<<"loop is present "<<fast->data<<" ";
				return true;
			}
		}
		return false;
	}
    
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
    node5->next = node2;  // Create a loop between node5 and node2
    bool ans = DetectLoop(head);
    if (ans) {
        cout << "Loop is present" << endl;
    }
    else {
        cout << "Loop is not present" << endl;
    }

    return 0;
}

