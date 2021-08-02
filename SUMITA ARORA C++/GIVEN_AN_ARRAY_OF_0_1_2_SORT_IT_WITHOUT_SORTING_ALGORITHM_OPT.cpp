#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int low = 0,mid = 0,high = n-1;
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int i = 0;
    while(mid<=high){
        if(arr[i]==0){
            int temp = arr[i];
            arr[i] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if(arr[i]==1){
            mid++;
        }
        else if(arr[i]==2){
            int temp = arr[i];
            arr[i] = arr[high];
            arr[high] = temp;
            high--;
            i--;
        }
        i++;
    }
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}