#include<bits/stdc++.h>
using namespace std;

void setn(vector<int>v,int n,int cid,vector<int>arr){
    if(cid>=n){
        for(int i =0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    setn(v,n,cid+1,arr);
    arr.push_back(v[cid]);
    setn(v,n,cid+1,arr);
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> arr;
    setn(v,n,0,arr);
    return 0;
}