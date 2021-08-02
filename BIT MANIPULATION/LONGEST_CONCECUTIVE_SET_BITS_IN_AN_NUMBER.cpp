#include<bits/stdc++.h>
using namespace std;

int consset(int n){
    int res = 0,count = 0;
    for(int i = 0;i<log2(n)+1;i++){
        if(n & (1<<i)){
            count++;
        }
        else{
            count = 0;
        }
        res = max(count,res);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<consset(n);
    return 0;
}