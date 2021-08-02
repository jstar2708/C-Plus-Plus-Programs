#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int count = 1;
    while(count<n){
        for(int j = 0;j<=n-count-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        } count++;
    }
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    } return 0;
}