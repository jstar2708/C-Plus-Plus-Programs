#include<bits/stdc++.h>
using namespace std;

int dectooct(int n){
    int sum = 0;
    int x = 1;
    while(x<n){
        x = x*8;
    } x = x/8;
    while(x>0){
        sum = sum*10 + n/x;
        n = n - (n/x)*x;
        x = x/8;
    } return sum;
}

int main(){
    int a;
    cin>>a;
    cout<<dectooct(a);
    return 0;
}