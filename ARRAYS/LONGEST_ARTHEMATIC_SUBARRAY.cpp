#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int count = 0;
    int diff = arr[0]-arr[1];
    int mx = 0;
    for(int i = 0;i<=n-2;i++){
        if((arr[i]-arr[i+1])==diff){
            count++;
        } else{
            count = 1;
            diff = arr[i]- arr[i+1];
        } if(count>mx){
            mx = count;
        }
    } cout<<mx+1;
    return 0;
    }