#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void getdata(){
        cout<<"The real part is : "<<real<<endl;
        cout<<"The imaginary part is : "<<imaginary<<endl;
    }
    void setdata(int a,int b){
        real = a;
        imaginary = b;
    }
};

int main(){
    Complex c1;
    //Complex *ptr = &c1;
    Complex *ptr = new Complex;
    //(*ptr).setdata(1,54); is exactly same as
    ptr->setdata(1,54);     // -> means to dereference pointer
    //(*ptr).getdata(); is as good as
    ptr->getdata();

    //Array of objects
    Complex *ptr1 = new Complex[4];
    ;
    ptr1->setdata(1,4);
    (ptr1)->getdata();
    return 0;
}