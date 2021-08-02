#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,mn = INT_MAX,mx = INT_MIN;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx = arr[i];
        } 
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    cout<<mx<<" "<<mn;
    return 0;
}