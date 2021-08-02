#include<bits/stdc++.h>
using namespace std;


//Syntax for inheriting in multiple inheritance
//class DerivedC : visibility-mode base1,visibility - mode base2
//}

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class Derived : public Base1,public Base2{
    public : 
    void show(){
        cout<<"Value of Base 1 is : "<<base1int<<endl;
        cout<<"Value of Base 2 is : "<<base2int<<endl;
        
    }
};

/*The inherited derived class will look like -->
base1int will be protected
base2int will be protected

Member functions-->
show() will be public
set_base1int() will be public
set_base2int() will be public
*/
int main(){
    Derived jaideep;
    jaideep.set_base1int(100);
    jaideep.set_base2int(400);
    jaideep.show();
    return 0;
}