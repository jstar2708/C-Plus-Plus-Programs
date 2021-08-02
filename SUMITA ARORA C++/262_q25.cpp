#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mx = INT_MIN,mn = INT_MAX,mxo = INT_MIN,mno = INT_MAX;
    while(n!=0){
        if(n%2==0){
            if(n>mx && n!=0){
                mx = n;
            }
            if(n<mn){
                mn = n;
            }
        }
        else{
            if(n>mxo && n!=0){
                mxo = n;
            } if(n<mno){
                mno = n;
            }
        }
        cin>>n;
    }
    cout<<mn<<" "<<mx<<" "<<mno<<" "<<mxo<<endl;
    return 0;
}