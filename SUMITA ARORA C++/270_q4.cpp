#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int gcd = 0,lcm = 0;
    int m=a,n = b;
    while(n>0){
        int c = abs(m-n);
        m = n;
        n = c;
    }
    gcd = m;
    lcm = (a*b)/gcd;
    cout<<gcd<<" "<<lcm;
    return 0;
}