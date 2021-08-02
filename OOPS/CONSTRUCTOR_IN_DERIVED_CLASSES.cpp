#include<bits/stdc++.h>
using namespace std;

/*
Case 1:
class B : public A{
    //order of execution of constructor is ->first A() then B().
};

Case 2:
class A : public B,public C{
    //order of execution of constructor is ->first B() then C() and at last A().
}

Case 3:
class A : public B,virtual public C{
    //order of execution of constructor is ->first C(),then B(),and at last A().
}
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base 1 class constructor is called"<<endl;
    }
    void printdata1(){
        cout<<"Value of data 1 is : "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base 2 class constructor is called"<<endl;
    }
    void printdata2(){
        cout<<"Value of data 2 is : "<<data2<<endl;
    }
};

class Derived : public Base1,public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d) : Base1(a),Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printderived(){
        cout<<"Value of derived 1 is : "<<derived1<<endl;
        cout<<"Value of derived 2 is : "<<derived2<<endl;
    }
};
int main(){
    Derived x(1,2,3,4);
    x.printdata1();
    x.printdata2();
    x.printderived();
    return 0;
}