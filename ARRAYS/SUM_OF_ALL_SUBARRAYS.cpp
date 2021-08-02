#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=n-1;i++){
        int s = 0;
        for(int j = i;j<=n-1;j++){
                s = s + arr[j];
                cout<<s<<endl;
        } 
    } return 0;
}