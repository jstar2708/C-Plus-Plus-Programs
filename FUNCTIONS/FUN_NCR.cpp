#include<iostream>
using namespace std;

int fac(int i){
    int fac = 1;
    while(i>0){
        fac  = fac*i;
        i = i-1;
    } return fac;
}

int main(){
    int n;
    int r;
    cin>>n>>r;
    int x = n-r;
    cout<<(fac(n))/(fac(x)*fac(r));
    return 0;
}