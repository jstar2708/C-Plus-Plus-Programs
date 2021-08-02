#include<bits/stdc++.h>
using namespace std;

int main(){
        int N;
        cin>>N;
        int arr[N+1];
        arr[N]=-1;
        for(int j = 0;j<=N-1;j++){
            cin>>arr[j];
        } 
        if(N==1){
            cout<<"#"<<"1"<<endl;
            return 0;
        }
        int count = 0;
        int mx = INT_MIN;
        for(int j = 0;j<=N-1;j++){
            if(arr[j]>mx && arr[j]>arr[j+1]){
                count++;
                mx = max(mx,arr[j]);
            }
        } cout<<"#"<<count<<endl;
        return 0;
    
}