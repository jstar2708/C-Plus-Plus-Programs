#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx = INT_MIN,mn = INT_MAX;
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=n-1;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    cout<<"Max->"<<" "<<mx<<" Min-> "<<mn<<endl;
    return 0;
}