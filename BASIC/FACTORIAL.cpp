#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fac = 1;
    while(n>0){
        fac = fac*n;
        n = n - 1;
    } cout<<fac;
    return 0;
} 