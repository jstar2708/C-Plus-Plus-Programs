#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<=n;i++){
        int res = 1;
        for(int j = 1;j<=i;j++){
        res *= 2;
        }
        cout<<res<<endl;
    }
    return 0;
}