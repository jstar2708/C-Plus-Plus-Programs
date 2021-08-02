#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;
    int sum = 0;
    while(a>0){
        sum = sum + a;
        cin>>a;
    } cout<<sum;
    return 0;
}