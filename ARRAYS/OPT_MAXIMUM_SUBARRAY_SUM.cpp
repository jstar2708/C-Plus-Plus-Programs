#include<bits/stdc++.h>
using namespace std;

int main(){                                                                             //CUMULATIVE SUM APPROACH
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int ch[n+1];
    ch[0] = 0;
    for(int i = 1;i<=n;i++){
        ch[i] = ch[i-1] + arr[i-1];
    }
    int mx = INT_MIN;
    for(int i = 1;i<=n;i++){
        int sum = 0;
        for(int j = 0;j<i;j++){
            sum = ch[i]-ch[j];
            mx = max(mx,sum);
        } 
    } cout<<mx;
    return 0;
}