#include<bits/stdc++.h>
using namespace std;

void power4(int n){
    if(!(n & (n-1)) && ((int)log2(n)+1)%2!=0){
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
        power4(n);
    }
    return 0;
}