#include<iostream>
using namespace std;

int main(){
    float res = 0;
    cout<<"F(x) = (x*x + 1.5*x + 5)/(x-3)"<<endl;
    for(int i = -10;i<=10;i+=2){
        res = (i*i + 1.5*i + 5)/(i-3);
        cout<<"For x ="<<i<<"    "<<"F(x) is :"<<res<<endl;
    }
    return 0;
}