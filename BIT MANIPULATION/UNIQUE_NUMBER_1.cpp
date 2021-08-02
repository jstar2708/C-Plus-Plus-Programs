#include<iostream>
using namespace std;

void unique(int arr[],int n){
    int xorsum = 0;
    for(int i = 0;i<=n-1;i++){
        xorsum = xorsum^arr[i];
    }
    cout<<xorsum<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    unique(arr,n);
    return 0;
}