#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r = 0,m = n;
    while(m>0){
        int N = m%10;
        r = r*10 + N;
        m = m/10;
    }
    if(n==r){
        cout<<"Palindrome";
    }
    else{
        cout<<"No it is not palindrome";
    }
    return 0;
}