#include<iostream>
using namespace std;

class Y;		//forward declartaion

class X{
	int data;
	public:
	void setvalue(int value){
		data = value;
	}
	friend void add(X,Y);
};
class Y{
	int num;
	public:
	void setvalue(int value){
		num = value;
	}
	friend void add(X,Y);

};

void add(X o1,Y o2){
	cout<<"Summing the objects of class X and Y gives : "<<o1.data+o2.num<<endl;
}

int main(){
	X a;
	Y b;
	a.setvalue(4);
	b.setvalue(9);
	add(a,b);
	return 0;

}