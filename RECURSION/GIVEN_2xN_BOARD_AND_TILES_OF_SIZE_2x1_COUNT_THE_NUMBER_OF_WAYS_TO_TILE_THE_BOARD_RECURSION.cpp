#include<iostream>
using namespace std;

int counttile(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(n==2){
        return 2;
    }

    return counttile(n-1) + counttile(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<counttile(n);
    return 0;
}