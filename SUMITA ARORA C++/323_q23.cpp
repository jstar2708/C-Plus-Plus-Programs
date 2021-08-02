#include<iostream>
using namespace std;

int checker(int n){
    if(n<2){
        return -1;
    }
    if(n==2){
        return 0;
    } 
    if(n%2==0){
        return -1;
    }
    int i = 3;
    for(i = 3;i<=n-1;i+=2){
        if(n%i==0){
            return -1;
        }
    }
    if(i==n || i==n+1){
        return 0;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    cout<<checker(n);
    return 0;
}