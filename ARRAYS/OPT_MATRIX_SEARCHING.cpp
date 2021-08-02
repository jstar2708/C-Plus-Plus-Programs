//matrix should be sorted from both row and column
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=m-1;j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin>>k;
    int i = 0;
    int j = m-1;
    int flag = 0;
    while(i<=n-1 && j>=0){
        if(a[i][j]==k){
            flag = 1;
            break;
        } else if(a[i][j]>k){
            j--;
        } else{
            i++;
        }
    }
    if(flag==0){
        cout<<"NOT FOUND";
    } else{
        cout<<"FOUND";
    } return 0;
}