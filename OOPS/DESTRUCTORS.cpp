#include<bits/stdc++.h>
using namespace std;
class number{
	static int count;
	public:
	number(){
		count++;
		cout<<"Constructor "<<count<<endl;
	}
	//destructor never takes an argument nor does return any value
	~number(){
		cout<<"Destructor "<<count<<endl;
		count--;
	}
};
int number::count;
int main(){
	cout<<"We are inside our main function"<<endl;
	cout<<"Creating first object n1"<<endl;
	number n1;{				//after block all elements inside will get destroyed (local variable).
		cout<<"Entering the block"<<endl;
		cout<<"Creating two objects"<<endl;
		number n2,n3;
		cout<<"Exiting the block"<<endl;
	}
	cout<<"Back to our main function"<<endl;
	
	return 0;
}