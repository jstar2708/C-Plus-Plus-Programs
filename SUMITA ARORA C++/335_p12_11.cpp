#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int i;
    for(i = 0;i<=n-1;i++){
        if(arr[i]==x){
            cout<<"Found at : "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Not found"<<endl;
    }
    return 0;
}