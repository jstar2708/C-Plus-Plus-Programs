#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mx = 0;
    int sumo= 0;
    for(int i = 0;i<=n-1;i++){
        for(int j = i;j<=n-1;j++){
            for(int k = i;k<=j;k++){
                sumo = sumo + arr[k];
            } mx = max(mx,sumo);
            sumo = 0;
        }
    } cout<<mx;
    return 0;
}