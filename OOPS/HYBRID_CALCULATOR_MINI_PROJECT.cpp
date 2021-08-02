#include <bits/stdc++.h>
using namespace std;

class Simple_Calc
{
protected:
    int a, b;
    float r;

public:
    void displaysimp()
    {
        cout << endl;
        cout << "-------------------" << endl;
        cout << " Simple Calculator " << endl;
        cout << "-------------------" << endl;
        cout << "Operations you can perform : " << endl;
        cout << "1. Addition : " << endl;
        cout << "2. Subtraction : " << endl;
        cout << "3. Multiplication : " << endl;
        cout << "4. Division : " << endl;
    }
    void setdata()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    void addition()
    {
        r = a + b;
    }
    void substraction()
    {
        r = a - b;
    }
    void multiplication()
    {
        r = a * b;
    }
    void division()
    {
        r = (float)a / b;
    }
    float result1()
    {
        return r;
    }
};

class Scientific_Calc
{
protected:
    int x;
    float r;

public:
    void displaysci()
    {
        cout << endl;
        cout << "------------------------" << endl;
        cout << " Scientific  Calculator " << endl;
        cout << "------------------------" << endl;
        cout << "Operations you can perform : " << endl;
        cout << "1. Cosine : " << endl;
        cout << "2. Sine : " << endl;
        cout << "3. Square Root : " << endl;
        cout << "4. Logarithm (Base 10) : " << endl;
    }
    void setdata2()
    {
        cout << "Enter a number : ";
        cin >> x;
    }
    void _cos()
    {
        r = cos(x * (3.14159265 / 180));
    }
    void _sin()
    {
        r = sin(x * (3.14159265 / 180));
    }
    void root()
    {
        r = sqrt(x);
    }
    void logten()
    {
        r = log10(x);
    }
    float result2()
    {
        return r;
    }
};

class Hybrid_Calc : protected Simple_Calc, protected Scientific_Calc
{
protected:
    int n, ch;

public:
    void getcalc()
    {
        cout << "Enter choice for Type of Calculator : " << endl;
        cout << "1. Simple Calculator" << endl;
        cout << "2. Scientific Calculator" << endl;
        cin >> n;
        if (n == 1)
        {
            displaysimp();
            getchoice();
        }
        else
        {
            displaysci();
            getchoice();
        }
    }
    void getchoice()
    {
        cout << "Enter your choice : ";
        cin >> ch;
        if (n == 1)
        {
            setdata();
            if (ch == 1)
            {
                addition();
            }
            else if (ch == 2)
            {
                substraction();
            }
            else if (ch == 3)
            {
                multiplication();
            }
            else
            {
                division();
            }
            cout << "Result is : " << result1() << endl;
            ;
        }
        else
        {
            setdata2();
            if (ch == 1)
            {
                _cos();
            }
            else if (ch == 2)
            {
                _sin();
            }
            else if (ch == 3)
            {
                root();
            }
            else
            {
                logten();
            }
            cout << "Result is : " << result2();
        }
    }
};

int main()
{
    Hybrid_Calc m;
    m.getcalc();
    return 0;
}