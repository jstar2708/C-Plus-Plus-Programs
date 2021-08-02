#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //cumilative sum approach or prefix sum approach
    //maximum subarray sum in O(n^2) 
    int mx = INT_MIN;
    for(int i= 0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum = sum+arr[j];
            mx = max(mx,sum);
        }
    }
    cout<<mx<<endl;

}
