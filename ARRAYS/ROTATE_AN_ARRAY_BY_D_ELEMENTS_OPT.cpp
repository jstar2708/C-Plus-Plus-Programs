#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int d){
    if(d==0){
        return n;
    }
    return gcd(d,n%d);
}
    

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    int gd = gcd(n,d);
    for(int i = 0;i<gd;i++){
        int j = i;
        int k = j + gd;
        while(j<n && k<n){
            swap(arr[j],arr[k]);
            j = k;
            k = k + gd;
        }
    }
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}