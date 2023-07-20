 #include <iostream>
#include <stack>
using namespace std;

bool FindRedBracket(string &str) {
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            s.push(ch);
        } else if (ch == ')') {
            bool isRedundant = true;
            while (!s.empty() && s.top() != '(') {
                char top = s.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false;
                }
                s.pop();
            }
            if (!s.empty() && s.top() == '(') {
                s.pop(); // pop the opening bracket '('
            }
            if (isRedundant == true)
                return true;
        }
    }
    return false;
}

int main() {
    string str = "(a+b)";
    cout << FindRedBracket(str);
    return 0;
}

