#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &a){
    for(int i  =0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<=(n/2)-1;i++){
        swap(v[i],v[n-i-1]);
    }
    display(v);
    return 0;
}