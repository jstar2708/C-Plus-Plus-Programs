#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int setarr[64] = {0};
    for(int i = 0;i<=63;i++){
        for(int j = 0;j<=n-1;j++){
            if(arr[j] & (1<<i)){
                setarr[i]++;
            }
        }
        setarr[i] = setarr[i]%3;
    }
    int num = 0;
    for(int i = 0;i<=n-1;i++){
        num = num + (1<<i)*setarr[i];
    }
    cout<<num<<endl;
}