 #include <iostream>
#include <stack>
using namespace std;

bool validParenthesis(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];
        // for opening bracket, stack push
        // for closing bracket, stack top check and pop
        if (ch == '{' || ch == '(' || ch == '[') {
            s.push(ch);
        } else 
				{
            if (!s.empty()) {
                char top = s.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
										 {
                    s.pop();
                     } 
										 else 
										 {
                    // when no condition will match
                    return false;
                     }
                   }
						       else {
                    // when stack is empty and you're trying to push unbalanced
                    return false;
            }
        }
    }
    if (s.empty())
        return true;
    else
        return false;


}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if (validParenthesis(input)) {
        cout << "Parentheses are balanced." << endl;
    } else {
        cout << "Parentheses are not balanced." << endl;
    }

    return 0;
}

