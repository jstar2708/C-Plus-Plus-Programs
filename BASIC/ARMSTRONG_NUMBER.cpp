#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k = n;
    int N;
    int sum = 0;
    while(n>0){
        N = n%10;
        n = n/10;
        sum = sum + N*N*N;
    }if(sum == k){
        cout<<"ARMSTRONG NUMBER";
    } else{
        cout<<"NO";
    } return 0;
}