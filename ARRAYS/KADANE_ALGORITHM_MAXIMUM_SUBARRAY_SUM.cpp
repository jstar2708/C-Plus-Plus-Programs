#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int currentsum = 0;
    int mx = INT_MIN;
    for(int i = 0;i<=n-1;i++){
        currentsum = currentsum + arr[i];
        if(currentsum<0){
            currentsum = 0;
        } else{
            mx = max(mx,currentsum);
        }
    } cout<<mx;
    return 0;

}