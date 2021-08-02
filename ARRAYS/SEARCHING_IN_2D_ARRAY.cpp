#include<bits/stdc++.h>
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
    int x;
    cin>>x;
    bool flag = false;
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=m-1;j++){
            if(arr[i][j]==x){
                flag = true;
                cout<<"found at "<<i<<" "<<j<<endl;
                break;
            }
        }
    } if(flag == false){
        cout<<"not found";
    } return 0;
}