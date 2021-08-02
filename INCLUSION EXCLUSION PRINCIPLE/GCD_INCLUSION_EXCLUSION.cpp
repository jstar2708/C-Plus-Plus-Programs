#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c = a-b;
    while(c>0){
        c = a%b;
        a = b;
        b = c;
    }
    cout<<a<<endl;
    return 0;
}