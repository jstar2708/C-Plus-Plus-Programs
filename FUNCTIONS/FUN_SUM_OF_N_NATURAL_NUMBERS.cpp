#include<iostream>
using namespace std;

int sum(int x){
    int suml = 0;
    for(int i = 1;i<=x;i++){
        suml = suml + i;
    } return suml;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}