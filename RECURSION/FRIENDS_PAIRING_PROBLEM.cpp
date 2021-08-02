#include<iostream>
using namespace std;

int pairing(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int count = 0;
    count = pairing(n-1) + (n-1)*pairing(n-2);
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<pairing(n);
    return 0;
}