#include<iostream>
using namespace std;

int pairf(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return pairf(n-1) + (n-1)*pairf(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<pairf(n);
    return 0;
}