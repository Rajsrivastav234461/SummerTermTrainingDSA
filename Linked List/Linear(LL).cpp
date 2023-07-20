#include<iostream>
using namespace std;
class Node{
	public:
	int key;
	Node*left;
	Node*right;
	Node(int k){
		key=k;
		left=right=NULL;
	}
};
//bool Linear_Search(Node*node1,int x){
//	while(node1!=NULL){
//		if(node1->key==x)
//		return true;
//		else if(node1->key<x)
//			node1= node1->right;
//			else
//			node1=node1->left;
//			return false;
//		
//	}
//}
//recursive way
bool Linear_Search(Node*node1,int x){
	if(node1==NULL){
	return false;
}
	 if(node1->key==x){
		return true;
	}
	else if(node1->key<x){
		 return Linear_Search(node1->right, x);
	}
	else {
	return Linear_Search(node1->left,x);
	}
}
int main(){
Node*node1=new Node(29);
node1->left=new Node(20);
node1->right=new Node(30);
node1->left->left=new Node(12);
node1->left->right=new Node(21);
node1->right->left=new Node(22);
node1->right->right=new Node(12);
int x=12;
if (Linear_Search(node1,x)){
	cout<<"found";
}
else {
	cout<<"not found";
}






}
