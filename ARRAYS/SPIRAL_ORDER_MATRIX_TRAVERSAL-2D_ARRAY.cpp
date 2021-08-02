#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0 ;i<=n-1;i++){
        for(int j = 0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int row_start = 0,row_end = n-1,col_start = 0,col_end = m-1;
    int a = 1;
    while(a>0){
        if(row_start<=row_end && col_start<=col_end){
            //for row start
            for(int row = col_start;row<=col_end;row++){
                cout<<arr[row_start][row]<<" ";
            }
            row_start++;
        } else{
            break;
        }
        if(row_start<=row_end && col_start<=col_end){
            // for column end
            for(int col = row_start;col<=row_end;col++){
                cout<<arr[col][col_end]<<" ";
            }
            col_end--;
        } else{
            break;
        }
        if(row_start<=row_end && col_start<=col_end){
            //for row end
            for(int row = col_end;row>=col_start;row--){
                cout<<arr[row_end][row]<<" ";
            } 
            row_end--;
        } else{
            break;
        }
        if(row_start<=row_end && col_start<=col_end){
            //for column start
            for(int col = row_end;col>=row_start;col--){
                cout<<arr[col][col_start]<<" ";
            }
            col_start++;
        } else{
            break;
        }
    } return 0;
}