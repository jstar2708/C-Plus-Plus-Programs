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
    int x = 0;
    for(int j = 0;j<=n-1;j++){
        if(key==arr[j]){
            cout<<"element found at index "<<j;
            x = 0;
        } else{
            x = x+1;
        }
    if(x==n-1){
        cout<<"Not Found";
    }
        
    } return 0;
}