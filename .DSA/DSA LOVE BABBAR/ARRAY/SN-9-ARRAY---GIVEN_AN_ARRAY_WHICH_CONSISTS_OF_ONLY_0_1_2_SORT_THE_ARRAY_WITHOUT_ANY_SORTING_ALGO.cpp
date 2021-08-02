#include<iostream>
using namespace std;

int sort(int arr[],int n){
    int low = 0,mid = 0,high = n-1;
    int i = 0;
    while(mid<=high){
        if(arr[i]==2){
            int temp = arr[i];
            arr[i] = arr[high];
            arr[high] = temp;
            high = high - 1;
            i--;
        }
        else if(arr[i]==1){
            mid = mid + 1;
        }
        else if(arr[i]==0){
            int temp = arr[i];
            arr[i] = arr[low];
            arr[low] = temp;
            low = low + 1;
            mid = mid + 1;
        }
        
        i++;
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
    sort(arr,n);
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}