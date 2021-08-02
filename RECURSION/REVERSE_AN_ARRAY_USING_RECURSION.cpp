#include<iostream>
using namespace std;

void reverse(int arr[],int n,int i = 0){
    if(i==n/2 && n%2==0){
        return;
    } else if(i==(n/2) +1 && n%2!=0){
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n-i];
    arr[n-i] = temp;
    reverse(arr,n,i = i + 1);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    reverse(arr,n-1);
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}