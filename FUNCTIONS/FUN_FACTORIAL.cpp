#include<iostream>
using namespace std;

int fac(int x){
    int fac = 1;
    while(x>0){
        fac = fac*x;
        x = x-1;
    } return fac;
}

int main(){
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;
}