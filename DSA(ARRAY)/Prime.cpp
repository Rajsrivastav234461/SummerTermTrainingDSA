#include<iostream>
using namespace std;
int main(){
	int num,k,count=0;
	cin>>num;
	for(k=2;k<=num;k++){
		if(num % k==0)
			count=count+1;	
	}
	if(count==1){
			cout<<"prime";
		}
		else {
			cout<<"not prime";
		}
	return 0;
}
