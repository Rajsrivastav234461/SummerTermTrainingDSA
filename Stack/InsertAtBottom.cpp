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

int main(){
	stack<int>s;
	int elem=9;
	//int count=0;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	int size= s.size();
 insertAtBottom(s, elem);
	while(!s.empty()){
		cout<<" "<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
