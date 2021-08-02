#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = n;
    int rev = 0;
    while(n>0){
        int a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    if(x == rev){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
    return 0;
}