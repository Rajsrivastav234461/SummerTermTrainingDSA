 #include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int PostExp(string s) {
    stack<int> st;
    for (int i =0; i<s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            st.push(s[i] - '0');
        } else {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i]) {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1, operand2));
                    break;
            }
        }
    }
    return st.top();
}

int main() {
    cout << PostExp("46+5/2*7+") << endl;
    return 0;
}

