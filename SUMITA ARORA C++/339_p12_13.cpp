#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>m>>n;
    int arr[m][n];
    int marks =0;
    for(i=0;i<=m-1;i++){
        for(j = 0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(i = 0;i<=m-1;i++){
        marks = 0;
        for(j = 0;j<=n-1;j++){
            marks+=arr[i][j];
        }
        cout<<"MARKS OF "<<i+1<<" ARE : "<<marks<<endl;
    }
    return 0;
}