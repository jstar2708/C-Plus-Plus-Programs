#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class Base3 : public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base1 :: greet();
    }
};
int main(){
    //ambiguity 
    Base1 obj;
    obj.greet();
    Base2 obj2;
    obj2.greet();
    Base3 obj3;
    obj3.greet();
    return 0;
}