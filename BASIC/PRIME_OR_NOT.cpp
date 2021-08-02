#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    int i;
    for(i = 2;i<n;i++){
        if(n%i==0){
            break;
        }
    } if(i == n){
        cout<<"Prime";
    } else{
        cout<<"Not prime";
    }

    return 0;
}