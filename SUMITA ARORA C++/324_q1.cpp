#include<iostream>
using namespace std;

float reverse(float arr[],int n){
    int k = n/2;
    if(n%2==0){
        k = k - 1;
    }
    for(int i = 0;i<=k;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    return arr,n;
}

int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}