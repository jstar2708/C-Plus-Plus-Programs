#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s = 0,r = 0,b = 0;
    while (n>0){
        b = n%10;
        r = r*10 + b;
        s +=b;
        n = n/10;

    }
    cout<<r<<" "<<s;
    return 0;
}