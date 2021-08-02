#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first = 0;
    int second = 1;
    cout<<first<<",";
    cout<<second<<",";
    int third;
    for(int i = 1;i<=n-2;i++){
        third = first + second;
        cout<<third<<",";
        first = second;
        second = third;
    } return 0;
}