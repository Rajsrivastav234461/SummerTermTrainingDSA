#include<iostream>
using namespace std;
  int n;
	int arr[]={};
int main(){
	
	cout<<"the size of array is"<<endl;
	cin>>n;
	cout<<"enter the elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	cout<<arr[i]<<"\t";
}
return 1;
}

