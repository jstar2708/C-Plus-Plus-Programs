#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n){
    int current = 0;
    int mx = INT_MIN;
    for(int i = 0;i<=n-1;i++){
        current = current + arr[i];
        if(current<0){
            current = 0;
        } else{
            mx = max(mx,current);
        }
    } return mx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int wrapsum = 0;
    int nonwrapsum = 0;
    int totalsum = 0;
    nonwrapsum = kadane(arr,n);
    for(int i = 0;i<=n-1;i++){
        totalsum = totalsum + arr[i];
        arr[i]=-arr[i];
    }
    wrapsum = totalsum + kadane(arr,n);

    cout<<max(wrapsum,nonwrapsum);
    return 0;



}