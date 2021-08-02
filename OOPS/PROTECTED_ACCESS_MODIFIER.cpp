#include<bits/stdc++.h>
using namespace std;

class Base{
    protected: 
    int a;
    private:
    int b;

};
/*For a protected member : 
                    |public derivation  | private derivation  | protected derivation
1. Private :            Not inherited       not inherited          Not inherited
2. Protected :          protected           private                 protected
3. Public :             public              private                 protected
*/

class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    //cout<<d.a;      //will not work since a is declared protected in derived and base class
    return 0;
}