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

Node* reverseKPairs(Node* &head, int k) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;

    // Reverse first k nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursive call to reverse the next set of k nodes
    if (next != NULL) {
        head->next = reverseKPairs(next, k);
    }

    return prev;
}

void print(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(3);
    node1->next = new Node(4);
    node1->next->next = new Node(5);
    node1->next->next->next = new Node(6);
    Node* head = node1;

    int k = 2;

    cout << "Before reversing the linked list: ";
    print(head);

    head = reverseKPairs(head, k);

    cout << "After the linked list got reversed: ";
    print(head);

    return 0;
}

