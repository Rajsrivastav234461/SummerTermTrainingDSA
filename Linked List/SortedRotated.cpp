#include<iostream>
using namespace std;
//multiple inheritance = a  child class where inherited from multiple
//parents classes
//parent 1
class Animal{
	public:
		void eat(){
			cout<<"Eat"<<endl;
		}
	
};

//parent 2
class Bird{
	public:
		void wings(){
			cout<<"wings hai"<<endl;
		}
	
};

//Lion is the child class
class Lion : public Animal,public Bird{
	void movement(){
		wings();
	}
	
	
};
int main(){
	Lion l1;
	l1.wings();
	
}
