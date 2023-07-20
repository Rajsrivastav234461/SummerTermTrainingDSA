   #include <iostream>
#include <vector>
using namespace std;
int main(){
	
vector<int>num = {1,2,3,4,5};
for(int i : num){
	cout<<i<<" ";
} cout<<endl;
//access
//cout<<"element at index 2 is"<<num.at(2)<<endl;
num.at(2)=89;
cout<<"element at index 2 is"<<num.at(2)<<endl;
//Add 

cout<<"size of array"<<num.size()<<endl;
//front
 cout<<"front element"<<num.front()<<endl;
 //back 
 cout<<"back element"<<num.back()<<endl;
 //capacity
 cout<<"capacity of element"<<num.capacity()<<endl;
 //clear
  num.clear();//this will empty the element


num.push_back(6);
num.push_back(7);

cout<<"updated vector";
for(int i : num){
	cout<<i<<" ";
}cout<<endl;

}

