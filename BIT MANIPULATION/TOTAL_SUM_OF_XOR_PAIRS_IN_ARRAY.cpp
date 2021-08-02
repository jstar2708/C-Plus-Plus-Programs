#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    int arr[n];         //https://youtu.be/7mDzRRug9Sg
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=31;i++){
        int countset = 0,count0 = 0;
        for(int j = 0;j<=n-1;j++){
            if(arr[j] & (1<<i)){
                countset++;
            } else{
                count0++;
            }
        } int p = countset*count0;
        ans = ans + (1<<i)*p;
    }
    cout<<ans<<endl;
    return 0;
}