#include<bits/stdc++.h>
using namespace std;

void power2(int n){
    if(!(n & (n-1))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){
    int n;
    cin>>n;
    if(!n){
        cout<<"NO";
    }
    else{
        power2(n);
    }
    return 0;
}