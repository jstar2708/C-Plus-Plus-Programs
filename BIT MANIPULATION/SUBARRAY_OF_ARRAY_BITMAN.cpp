#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<=(1<<(n))-1;i++){
        for(int j = 0;j<=n-1;j++){
            if((1<<j) & i){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}