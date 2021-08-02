#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr1[i];
    } int maxn = INT_MIN;
    int minn = INT_MAX;
    for(int i = 0;i<=n-1;i++){
        maxn= max(maxn,arr1[i]);
        minn = min(minn,arr1[i]); 
    } cout<<"MAx is "<<maxn<<endl;
    cout<<"MIN is "<<minn;
    return 0;
}