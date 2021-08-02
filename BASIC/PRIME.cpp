#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    int k = 2;
    for(i = 2;i<=n-1;i++){
        k++;
        if(n%i==0){
            cout<<"Not Prime";
            break;
        } 
    } if(k==n){
        cout<<"Prime";
    } return 0;
}