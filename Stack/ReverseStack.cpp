 #include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& s, int elem) {
    if (s.empty()) {
        s.push(elem);
        return;
    }

    int n = s.top();
    s.pop();

    insertAtBottom(s, elem);
    s.push(n);
}

void reverseStack(stack<int>& s) {
    if (s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, num);
}

int main() {
    int count = 0;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int size = s.size();
    reverseStack(s);

    cout << "After reverse:" << endl;
    while (!s.empty()) {
        cout << " " << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}

