 #include <iostream>
#include <stack>
using namespace std;

void SortedInsert(stack<int>& s, int num) {
    //base case
    if (s.empty() || (!s.empty() && s.top() < num)) {
        s.push(num);
        return;
    }

    //store
    int n = s.top();
    s.pop();

    SortedInsert(s, num);
    s.push(n);
}

void SortStack(stack<int>& s) {
    //base case
    if (s.empty()) {
        return;
    }
    int num = s.top();
    s.pop();

    SortStack(s);
    SortedInsert(s, num);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(-2);
    s.push(-3);
    s.push(4);
    SortStack(s);

    while (!s.empty()) {
        cout << " " << s.top() << " ";
        s.pop();
    }
    return 0;
}

