#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    } 
    for(int i = 0;i<=n-1;i++){
        for(int j = i+1;j<=n-1;j++){
            int temp = 0;
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    } return 0;
}