#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
	complex(int,int);		//constructor declaration
	void getdata(){
		cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
	}

};

complex :: complex(int x,int y){		//parameterized constructor  which accepts parameters (in this case it accepts 2 parameters)
	a = x;
	b = y;
}

int main(){
	complex a(1,8);
	a.getdata();
	complex b = complex(4,9);
	b.getdata();
	return 0;
}