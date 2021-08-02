#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setcomp(int x,int y){
        a = x;
        b = y;
    }
    void sumcomp(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout<<"Sum is : "<<a<<" + "<<b<<"i"<<endl;
    }
    void printcomp(){
        cout<<"Complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex x,y,z;
    x.setcomp(1,2);
    x.printcomp();
    y.setcomp(4,7);
    y.printcomp();
    z.sumcomp(x,y);
    return 0;
}