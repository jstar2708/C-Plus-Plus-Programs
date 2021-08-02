#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j,k;
    for(int i = 1;i<=n;i++){
        k = 1;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        } for(;j<=n;j++){
            cout<<k<<" ";
            k++;
        } cout<<endl;
    } return 0;
}