#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m = 0;
    for(int i = 1;i<=n;i+=2){
        m = m + i*i;
    }
    cout<<m<<endl;
    return 0;
}