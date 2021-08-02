#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int high = n-1;
    int low = 0;
    int sum = 0;
    bool ans = false;
    for(int i = 1;i<=n-1;i++){
        int current = arr[i];
        int j = i- 1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        } arr[j+1] = current;
    }
    while(low<high){
        if((arr[low]+ arr[high])>k){
            high--;
        } else if((arr[low]+arr[high])<k){
            low++;
        } else{
            cout<<"YES";
            ans = true;
            break;
            cout<<low<<" "<<high;
        }
    } if(ans == false){
        cout<<"NO";
    } return 0;
    
}