 #include<iostream>
 using namespace std;
 bool linear_Search(int arr[][4],int m,int target){
 	for(int row=0;row<m;row++){
 		for(int col=0;col<4;col++){
 			if(arr[row][col]==target){
 				return true;
			 }
		 }
	 }
	 return false;
 }
 
 
 
 int main(){
 	int arr[3][4];
 	int target;
 	for(int row=0;row<3;row++){
 		for(int col=0;col<4;col++){
 			cin>>arr[row][col];
		 }
	 }
	 cout<<"enter target";
	 cin>>target;
	 bool index=  linear_Search(arr,3,target);
	   if(index){
	   	cout<<"element found";
		 }
		 else{
		 	cout<<"not found";
		 }
//	for(int row=0;row<3;row++){
// 		for(int col=0;col<4;col++){
// 			cout<<arr[row][col]<<" ";
//		 }cout<<endl;
//	 }
 }
