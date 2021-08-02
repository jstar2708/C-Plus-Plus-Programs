#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=n-1;j++){
            for(int k = i;k<=j;k++){
                cout<<arr[k]<<" ";
            } cout<<endl;
        }
    } return 0;
}