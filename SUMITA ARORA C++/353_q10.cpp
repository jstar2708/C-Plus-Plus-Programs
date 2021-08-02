#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx = arr[i];
        }
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    cout<<mn<<" "<<mx<<endl;
    
}