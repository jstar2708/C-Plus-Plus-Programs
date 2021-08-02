#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1] = {0};
    for(int i = 1;i<=n;i++){
        arr[i] = arr[i>>1] + i%2;
    }
    for(int i = 0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}