#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    const  int N = 1e6+2;
    int idx[N];
    for(int i = 0;i<=N-1;i++){
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i = 0;i<=n-1;i++){
        if(idx[arr[i]]!=-1){
            minidx = min(minidx,idx[arr[i]]);
        } else{
            idx[arr[i]] = i;
        }
    } if(minidx==INT_MAX){
        cout<<"-1";
    } else{
        cout<<minidx + 1;
    } return 0;
}