#include<bits/stdc++.h>
using namespace std;

int addbin(int a,int b){
    return (2*(a&b) + a^b);
    
}

int main(){
    int n,m;

    cin>>n>>m;
    cout<<addbin(n,m);
    return 0;
}