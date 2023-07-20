#include<iostream>
#include<stack>
using namespace std;
void DeleteMiddle(stack<int>&s,int count,int size){
	//int count=0;
	//base case
	if(count==size/2){
		s.pop();
		return;
	}
	//store top element in stack top
	int num = s.top();
	//delete that top element
	s.pop();
	
	//recursive call
	DeleteMiddle(s,count+1,size);
	s.push(num);
}
int main(){
	//int top;
	int count=0;
	//int size=5;
	// index of stack will be start from zero
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
  int	size = s.size(); 
	DeleteMiddle(s,count,size);
	cout<<"after deletion"<<endl;
		while(!s.empty()){
		cout<<" "<<s.top()<<" ";
		s.pop();
			}
			return 0;
	
	
	
	
}
