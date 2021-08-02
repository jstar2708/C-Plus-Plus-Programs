#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)       //constructor overloading
    {
        a = x;
        b = y;
    }
    complex(int x)              //constructor overloading
    {
        a = x;
        b = 0;
    }
    void printcomp()
    {
        cout << "Complex number : " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1;
    c1.printcomp();

    complex c2(7);
    c2.printcomp();

    complex c3(1, 5);
    c3.printcomp();
    return 0;
}