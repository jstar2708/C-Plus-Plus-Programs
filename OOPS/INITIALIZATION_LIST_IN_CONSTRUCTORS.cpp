#include<bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in constructor--->

constructor (argument-list) : intialization - section
{
    assignment + other code
}

*/
class Test{
    int a;
    int b;
    public:
    //Test(int i,int j) : a(i),b(j){        --This code will be executed without any error
    //Test(int i,int j) : a(i),b(j){        --This code will be executed without any error
    //Test(int i,int j) : a(i),b(2*j){      --This code will be executed without any error
    //Test(int i,int j) : a(i),b(a + j){    --This code will be executed without any error
    Test(int i,int j) : b(j),a(b+i){      //--But in this case a will get a garabge value as a is declared before b
                                            //hence it is intialized first so b = garbage value and then a = b+i
                                            //so a also gets a garbage value and then constructor initializes b = j
        cout<<"Constructor called"<<endl;
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
    }
};
int main(){
    Test x(4,6);
    return 0;
}