#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int n,int m){
	for(int row=0;row<3;row++){
		for(int col=0;col<4;col++){
			if(arr[row][col]==target){
				return true;
			}
		}
	}
	return false;
} 

int main(){
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
     for(int row=0;row<3;row++){
		for(int col=0;col<4;col++){
			cout<<arr[row][col]<<" ";
			}cout<<endl;
}

cout<<"element to search:"<<endl;
int target;
cin>>target;
if(isPresent(arr,target,3,4)){
	cout<<"Is present"<<endl;
}
else {
	cout<<"not present";
}

