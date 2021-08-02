#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int A[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>A[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    if(n!=x){
        cout<<"Cannot be multiplied !!!"<<endl;
        exit(0);
    }
    int B[x][y];
    for(int i = 0;i<x;i++){
        for(int j = 0;j<y;j++){
            cin>>B[i][j];
        }
    }
    int C[m][y] = {0};
    for(int i = 0;i<m;i++){
        for(int j = 0;j<y;j++){
            C[i][j] =0;
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<y;j++){
            for(int k = 0;k<n;k++){
                C[i][j] += A[i][k]*B[k][j]; 
            }
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<y;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}