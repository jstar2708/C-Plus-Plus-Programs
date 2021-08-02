#include <iostream>
using namespace std;
class complex; //forward declartion
class calculator
{
public:
    int add(int n, int m)
    {
        return (n + m);
    }
    int sumreal(complex, complex); //forward declaration
    int sumimg(complex, complex);  //forward declaration
};

class complex
{
    int a, b;

public:
    friend int calculator ::sumreal(complex o1, complex o2);
    friend int calculator ::sumimg(complex o1, complex o2);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "Complex number is : " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumimg(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    calculator calc;
    o1.setdata(1, 5);
    o1.getdata();
    o2.setdata(4, 7);
    o2.getdata();
    int sumr = calc.sumreal(o1, o2);
    cout << sumr << endl;
    int sumi = calc.sumimg(o1, o2);
    cout << sumi << endl;

    return 0;
}