#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = 1;
    int j;
    for(int i = 1;i<=n;i++){
        x = i;
        for(j = 1;j<=n-i;j++){
            cout<<"  ";
        }
        for(;j<=n;j++){
            cout<<x<<" ";
            x--;
        } x = 1;
        for(;j<=n+i-1;j++){
            cout<<++x<<" ";
        
        } cout<<endl;
    } return 0;
}