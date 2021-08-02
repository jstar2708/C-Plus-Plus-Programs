#include<iostream>
using namespace std;

int mos(int arr[],int n){
    int left = 0,right = n-1;
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else if(arr[left]>0 && arr[right]<0){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            right--;
            left++;
        }
        else if(arr[left]<0 && arr[right]>0){
            left++;
        }
        else if(arr[left]>0 && arr[right]>0){
            right--;
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