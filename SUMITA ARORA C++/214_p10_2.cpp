#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter your choice : (C - F or F - C)";
    cin>>ch;
    float t,res = 0;
    cout<<"Enter temperature : ";
    cin>>t;
    if(ch=='C'){
        res = (float)9/5 * t + 32;
        cout<<res<<endl;
    } if(ch=='F'){
        res = (float)5/9 *(t-32);
        cout<<res<<endl;
    }
    return 0;
}