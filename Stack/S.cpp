#include<iostream>
#include<stack>
using namespace std;
int main(){
	//creation of stack
	stack<int>s;
	s.push(3);
	s.push(4);
	s.push(8);
	cout<<"the top element is"<<s.top()<<endl;
	//delete the element
	s.pop();
	cout<<"the top element is"<<s.top()<<endl;
	if(s.empty()){
		cout<<"stack is empty"<<endl;
	}
	else {
		cout<<" not empty"<<endl;
	}
	cout<<"the size of stack is "<<s.size();
}
