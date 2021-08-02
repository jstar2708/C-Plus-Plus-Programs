#include<iostream>
using namespace std;
class Y;		//forward declaration
class X{
	int val1;
	public:
	void setdata(int n){
		val1 = n;
	}
	void getdata(){
		cout<<"Val1 is: "<<val1<<endl;
	}
	friend void swapob(X&,Y&);
};
class Y{
	int val2;
	public:
	void setdata(int m){
		val2 = m;
	}
	void getdata(){
		cout<<"Val2 is : "<<val2<<endl;
	}
	friend void swapob(X&,Y&);
};

void swapob(X &a,Y& b){			//passing by reference
	int temp = a.val1;
	a.val1 = b.val2;
	b.val2 = temp;
}

int main(){
	X o1;
	Y o2;
	o1.setdata(99);
	o1.getdata();
	o2.setdata(77);
	o2.getdata();
	swapob(o1,o2);
	o1.getdata();
	o2.getdata();	
	return 0;
}
	