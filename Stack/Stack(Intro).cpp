 #include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& inputStack, stack<int>& tempStack, int count, int size) {
    // Base case
    if (count == size / 2) {
        inputStack.pop();
    }
    // Number which is on top of the stack will be stored in 'num' for later use
    int num = inputStack.top();

    // Now delete
    inputStack.pop();
    tempStack.push(num);

    // Recursive call
    solve(inputStack, tempStack, count + 1, size);

    // Now carry out that deleted element
    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int size) {
    int count = 0;
    stack<int> tempStack;
    solve(inputStack, tempStack, count, size);
}

int main() {
    stack<int> inputStack;
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);
    int size = inputStack.size();
    deleteMiddle(inputStack, size);
    
    cout << "After deleting middle element: ";
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

//    cout << "After deleting middle element: ";
//    stack<int> tempStack = inputStack; // Create a temporary stack to avoid modifying the original stack
//    while (!tempStack.empty()) {
//        cout << tempStack.top() << " ";
//        tempStack.pop();
//    }
//    cout << endl;

    

    return 0;
}

