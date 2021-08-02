#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int mx = 0;
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    return mx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<largest(arr,n);
    return 0;
}