#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum= 0;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    } for(int i = 0;i<=n-1;i++){
        sum = sum  + arr[i];
    } cout<<sum;
    return 0;
}