#include<iostream>
using namespace std;

int sum(int num1 ,int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}