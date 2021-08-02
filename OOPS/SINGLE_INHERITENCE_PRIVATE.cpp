#include <bits/stdc++.h>
using namespace std;
class Base              //Base class
{
    int data1; //private by default and not inheritable.
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}

int Base ::getdata2()
{
    return data2;
}

class Derived : private Base     //Derived class
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setdata();
    data3 = data2 * getdata1();
}

void Derived ::display()
{
    cout << "Value of data 1 is : " << getdata1() << endl; //using getdata1() instead of data1 because data1 is private member of Base class
    cout << "Value of data 2 is : " << data2 << endl;
    cout << "Value of data 3 is : " << data3 << endl;
}
int main()
{
    Derived der;
    //der.setdata();  cannot call setdata directly but can be called inside the derived class
    der.process();
    der.display();
    return 0;
}