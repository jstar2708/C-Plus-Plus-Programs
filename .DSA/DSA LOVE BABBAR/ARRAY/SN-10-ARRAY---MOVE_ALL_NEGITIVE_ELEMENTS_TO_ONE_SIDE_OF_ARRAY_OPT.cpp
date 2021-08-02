#include<iostream>
using namespace std;

int mos(int arr[],int n){
    int j = 0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i]<0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    return (arr,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    mos(arr,n);
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}