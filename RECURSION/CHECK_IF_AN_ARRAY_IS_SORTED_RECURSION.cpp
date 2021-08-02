#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==0){
        return true;
    }
    if(arr[n]>arr[n-1]){
        return sorted(arr,n-1);
    } 
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    if(sorted(arr,n-1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}