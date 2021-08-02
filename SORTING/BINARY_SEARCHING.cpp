#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    } 
    int start = 0;
    int end = n;
    int key;
    cin>>key;
    while(start<=end){
        int mid = (start+end)/2;
        if(key==arr[mid]){
            cout<<"FOUND AT "<<mid;
            break;
        } else if(key<arr[mid]){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
    } if(start>end){
        cout<<"NOT FOUND";
    }


    return 0;
}