#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int ans = 1;
    for(int i = 0;i<=n;i++){
        if(arr[i]!=arr[n-1-i]){
            ans = 0;
            break;
        }
    } if(ans==1){
        cout<<"PALINDROME";

    } else{
        cout<<"NOT PALINDROME";
    } 
    return 0;
}