#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    cout<<"Size is : "<<v.size()<<endl;
    for(int i = 0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> a(10);
    display(a);
    display(v);
    return 0;
}