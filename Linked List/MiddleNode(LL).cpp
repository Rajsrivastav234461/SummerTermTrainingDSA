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

Node* getMiddle(Node* head) {
    // If the list is empty or has only one node, return head as the middle node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // If the list has only two nodes, return the second node as the middle node
    if (head->next->next == NULL) {
        return head->next;
    }

    Node* slow = head;       // Slow pointer moves one node at a time
    Node* fast = head->next; // Fast pointer moves two nodes at a time

    // Traverse the list until the fast pointer reaches the end
    while (fast != NULL) {
        fast = fast->next; // Move the fast pointer by two nodes
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next; // Move the slow pointer by one node
    }

    return slow; // Return the slow pointer, which will be at the middle node
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
    node1->next->next->next = new Node(40);
    node1->next->next->next->next = new Node(50);
    Node* head = node1;

    Node* middleNode = getMiddle(head); // Find the middle node
    print(middleNode); // Print the middle node
    cout << middleNode->data << " "; // Print the data of the middle node

    return 0;
}

