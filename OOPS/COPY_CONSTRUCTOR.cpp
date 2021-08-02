#include<bits/stdc++.h>
using namespace std;

class number{
	int a;
	public:
	number(){		//default constructor
		a = 0;
	}
	number(int num){
		a = num;
	}
	//When there is no copy constructor found then compiler supplies its own copy constructor
	number(number &obj){
		cout<<"Copy constructor called !!!"<<endl;
		a = obj.a;
	}
	void display(){
		cout<<"The number is : "<<a<<endl;
	}
};

int main(){
	number x,y,z(45),z2;
	x.display();
	z.display();
	number z1 = z;		//copy constructor invoked 
	z1.display();
	z2 = z;				//copy constructor not invoked as this object is defined earlier.
	z2.display();

	number z3 = z;       //copy constructor invoked 
	z.display();

	return 0;
}