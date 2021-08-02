#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    int i = 0,j = n-1;
    while(i<n && j>=0){
        if(arr[i][j]==x){
            cout<<"Found at "<<i<<" "<<j;
            break;
        }
        else if(arr[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    if(i>=n || j<0){
        cout<<"NOT FOUND"<<endl;
    }
    return 0;
}