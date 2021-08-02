#include<bits/stdc++.h>
using namespace std;

void unique_num(int arr[],int n){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==arr[mid^1]){       //checking only for left side
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<arr[low]<<endl;           //at last low will be pointing to our element
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    unique_num(arr,n);
    return 0;
}