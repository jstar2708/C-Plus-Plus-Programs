#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    p = {2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;

    p = make_pair(9,"abcdef");
    cout<<p.first<<" "<<p.second<<endl;

    p.first = 3;
    p.second = "monu";
    cout<<p.first<<" "<<p.second<<endl;

    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;

    pair <int,string> &p1 = p;
    p1.first = 10;
    cout<<p.first<<" "<<p.second<<endl;
    int n;
    cin>>n;

    pair<int,int> parr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>parr[i].first;
        cin>>parr[i].second;
    }
    swap(parr[0],parr[1]);
    for(int i = 0;i<=n-1;i++){
        cout<<parr[i].first<<" "<<parr[i].second<<endl;
    }
    return 0;
}