#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int n1 = mid - l + 1;
    int n2 = h-mid;
    int A[n1],B[n2];
    for(int i = 0;i<n1;i++){
        A[i] = arr[l+i];
    }
    for(int i = 0;i<n2;i++){
        B[i] = arr[mid+1+i];
    }
    int k = l,i = 0,j = 0;
    while(i<n1 && j<n2){
        if(A[i]>B[j]){
            arr[k] = B[j];
            j++;k++;
        }
        else{
            arr[k] = A[i];
            i++;k++;
        }
    }
    while(i<n1){
        arr[k] = A[i];
        i++;k++;
    }
    while(j<n2){
        arr[k] = B[j];
        j++;k++;
    }
}

void mergesort(int arr[],int l,int h){
    if(l<h){
        int mid = (l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}