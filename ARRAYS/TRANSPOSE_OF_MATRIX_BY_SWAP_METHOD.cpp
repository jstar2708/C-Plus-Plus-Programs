#include<iostream>
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
    for(int i = 0;i<=n-1;i++){
        for(int j = i;j<=n-1;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i] = temp;
        }
    } 
    for(int i = 0;i<=n-1;i++){
        for(int j = 0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    } return 0;

}