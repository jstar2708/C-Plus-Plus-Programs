#include<bits/stdc++.h>
using namespace std;

string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void numtoword(int n,int M){
    if(n==0){
        return;
    }
    M = n%10;
    n = n/10;
    numtoword(n,M);
    cout<<word[M]<<" ";
}


int main(){
    int n;
    cin>>n;
    int M = n%10;
    numtoword(n,M);
    return 0;
}