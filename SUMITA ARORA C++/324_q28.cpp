#include<iostream>
using namespace std;

int gcd(int n,int m){
    int c = abs(n-m);
    while(c!=0){
        n = m;
        m = c;
        c = abs(n-m);
    }
    return m;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<(n*m)/gcd(n,m);
    return 0;
}