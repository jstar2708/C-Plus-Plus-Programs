#include<bits/stdc++.h>
using namespace std;

void display(vector<pair<int,int>> &v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int>> v1;
    int n;
    cin>>n;
    for(int i = 0;i<=n-1;i++){
        cin>>v1[i].first;
        v1[i].second = i;
    }

    sort(v1.begin(),v1.end());
    vector<pair<int,int>> v2;
    for(int i= 0;i<=n-1;i++){
        v2[v1[i].second] = i;
    }
    display(v2);
}