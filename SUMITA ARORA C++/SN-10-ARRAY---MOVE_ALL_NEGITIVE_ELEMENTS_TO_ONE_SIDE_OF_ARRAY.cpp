#include<iostream>
using namespace std;

int mos(int arr[],int n){
    int high = n-1,i=0;
    while(i<=high){
        while(arr[i]<0){
            int temp = arr[i];
            arr[i] = arr[high];
            arr[high] = temp;
            high--;
        }
        i++;        //-1, 2, -3, 4, 5, 6, -7, 8, 9]
        
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