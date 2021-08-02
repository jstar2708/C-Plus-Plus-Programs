#include<iostream>
using namespace std;

bool issafe(int **arr,int n,int x,int y){
    int row = x;
    int col = y;
    for(int row = 0;row<x;row++){
        if(arr[row][col]==1){
            return false;
        }
    }
    row = x;
    col = y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    row = x;
    col = y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    return true;
}

bool nQueen(int **arr,int n,int x){
    if(x>=n){
        return true;
    }
    for(int col = 0;col<=n-1;col++){
        if(issafe(arr,n,x,col)){
            arr[x][col]=1;
            if(nQueen(arr,n,x+1)){
                return true;
            }
            arr[x][col]=0;      //backtracking
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i = 0;i<=n-1;i++){
        arr[i] = new int[n];
        for(int j = 0;j<=n-1;j++){
            arr[i][j] = 0;
        }
    }
    if(nQueen(arr,n,0)){
        for(int i = 0;i<=n-1;i++){
            for(int j = 0;j<=n-1;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}