#include<bits/stdc++.h>
using namespace std;


class B{
    public:
    void say(){
        cout<<"Hello World!!!"<<endl;
    }
};

class D : public B{
    int a;
    public:
    void say(){
        cout<<"Hello my friends"<<endl;
    }
};

int main(){
    B x;
    x.say();
    D y;
    y.say();
    return 0;
}