33#include<iostream>
using namespace std;

void perm(int arr[],int n,int cid){
    if(cid==n-1){
        for(int i = 0;i<=n-1;i++){
            cout<<arr[i];
        }
        cout<<endl;
        return;
    }
    for(int i= cid;i<=n-1;i++){
        swap(arr[i],arr[cid]);
        perm(arr,n,cid + 1);
        swap(arr[i],arr[cid]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<=n-1;i++){
        cin>>arr[i];
    }
    perm(arr,n,0);
    return 0;
}