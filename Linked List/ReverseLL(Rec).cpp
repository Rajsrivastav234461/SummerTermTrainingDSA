 #include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next = NULL;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* reverse1(Node* head) {
    // Base case: If the list is empty or has only one node, return head as it is
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Reverse the rest of the list recursively
    Node* chotahead = reverse1(head->next);

    // Reverse the current node
    head->next->next = head;
    head->next = NULL;

    return chotahead; // Return the new head of the reversed list
}

void reverse(Node* &head, Node* curr, Node* prev) {
    head = reverse1(head); // Call the reverse1 function to reverse the linked list
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
    Node* node1 = new Node(10);
    node1->next = new Node(20);
    node1->next->next = new Node(30);
    Node* head = node1;
    Node* prev = NULL;
    Node* curr = head;

    print(head); // Print the original linked list
    reverse(head, curr, prev); // Reverse the linked list
    print(head); // Print the reversed linked list

    return 0;
}

