#include<bits/stdc++.h>
using namespace std;

int reverse(int a){
    int rev = 0;
    while(a>0){
        rev = rev*10 + a%10;
        a = a/10;
    } return rev;
}


int dectobin(int d){
    int sum  = 0;
    int x = 1;
    while(x<=d){
        x = x*2;
    } x = x/2;
    while(x>0){
        int bin = d/x;
        d = d-bin*x;
        x = x/2;
        sum = sum*10+bin;
    } return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<dectobin(n);
    return 0;
}