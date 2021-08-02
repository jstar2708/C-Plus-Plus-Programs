#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first = 0,second = 1;
    cout<<first<<" "<<second<<" ";
    for(int i = 1;i<=n-2;i++){
        int third = second + first;
        cout<<third<<" ";
        first = second;
        second = third;
    }
    return 0;
}