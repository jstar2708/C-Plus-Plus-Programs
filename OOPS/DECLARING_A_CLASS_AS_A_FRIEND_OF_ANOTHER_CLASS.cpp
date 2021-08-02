#include<iostream>
using namespace std;

class complex;			//forward declaration

class calculator{
	public:
	int sumreal(complex,complex);		//forward declaration
	int sumimg(complex,complex);
};

class complex{
	int a,b;
	public:
	friend class calculator;		//declaring whole class as friend
	void setdata(int x,int y){
		a = x;
		b = y;
	}
	void getdata(){
		cout<<"complex number = "<<a<<" + "<<b<<"i"<<endl;
	}
};

int calculator:: sumreal(complex o1,complex o2){
	return (o1.a + o2.a);
}
int calculator :: sumimg(complex o1,complex o2){
	return (o1.b+o2.b);
}

int main(){
	complex o1,o2;
	o1.setdata(4,3);
	o1.getdata();
	o2.setdata(7,2);
	o2.getdata();
	calculator calc;
	int sumr = calc.sumreal(o1,o2);
	int sumi = calc.sumimg(o1,o2);
	cout<<sumr<<" + "<<sumi<<"i"<<endl;
	return 0;

}