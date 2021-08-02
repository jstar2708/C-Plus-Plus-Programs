#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start = 0;
    int end = n-1;
    bool x = true;
    while(start<=end){
        int mid  = (start+end)/2;
        if(key<arr[mid]){
            end = mid-1;
        } else if(key>arr[mid]){
            start = mid + 1;
        } else{
            cout<<mid;
            x= false;
            break;
        }
    } if(x==true){
        cout<<"NOT FOUND";
    }
    return 0;
}