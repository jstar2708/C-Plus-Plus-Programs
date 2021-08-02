#include<iostream>
using namespace std;

void fibonacci(int a){
    int first = 0;
    int second = 1;
    cout<<first<<","<<second;
    for(int i = 3;i<=a;i++){
        int third = first + second;
        cout<<","<<third;
        first = second;
        second = third;
    } 
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}