#include<bits/stdc++.h>
using namespace std;

class coordinate{
	int x,y;
	public:
	friend double distpts(coordinate n,coordinate m);		//declaration
	coordinate(int a,int b){
		x = a;
		y = b;
	}
	void display(){
		cout<<"The point is ("<<x<<","<<y<<")"<<endl;
	}
};

double distpts(coordinate n,coordinate m){
	double distance;
	distance = sqrt(((n.x - m.x)*(n.x-m.x) + (n.y-m.y)*(n.y-m.y)));
	return distance;
}

int main(){
	coordinate a(1,0);
	a.display();
	coordinate b = coordinate(70,4);
	b.display();
	double x = distpts(a,b);
	cout<<"Distance btw points is : "<<x<<endl;
	return 0;
}