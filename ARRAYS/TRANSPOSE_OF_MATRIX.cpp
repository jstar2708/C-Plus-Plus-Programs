#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int t[n][n];
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=n-1;j++){
            t[i][j]=arr[j][i];
        }
    }
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=n-1;j++){
            cout<<t[i][j]<<" ";
        } cout<<"\n";
    } return 0;
}