#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    } 
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<"\n";
    } return 0;
}