#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int N;
    while(n>0){
        N = n%10;
        n = n/10;
        cout<<N<<endl;
    } return 0;
}