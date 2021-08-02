#include<bits/stdc++.h>
using namespace std;


void countset(int n){
    int count = 0;
    while(n!=0){
        n = (n & (n-1));
        count++;
    }
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    countset(n);
    return 0;
}