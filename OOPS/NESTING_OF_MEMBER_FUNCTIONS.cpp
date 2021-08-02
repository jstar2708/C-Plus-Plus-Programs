#include <bits/stdc++.h>
using namespace std;

class binary
{
    string str;
    void chk_bin();

public:
    void setbin();
    void ones_compliment();
    void display();
};

void binary ::setbin()
{
    cout << "Enter a binay number : ";
    cin >> str;
}

void binary ::chk_bin()
{
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    chk_bin(); //nesting of member functions.
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            str[i] = '1';
        }
        else if (str[i] == '1')
        {
            str[i] = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying number : " << str << endl;
}

int main()
{
    binary b;
    b.setbin();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}