#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a[n];
    int count0 = 0,count1 = 0,count2 = 0;
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]==0){
            count0++;
        }
        if(arr[i]==1){
            count1++;
        }
        if(arr[i]==2){
            count2++;
        }
    }
    for(int i = 0;i<=count0-1;i++){
        a[i] = 0;
    }
    for(int i = count0;i<=count0 + count1-1;i++){
        a[i] = 1;
    }
    for(int i = count0 +count1;i<=count0 + count1 +count2-1;i++){
        a[i] = 2;
    }
    for(int i = 0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}