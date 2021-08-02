#include<iostream>
using namespace std;

void zero_small(int &a,int &b){
    if(a>b){
        b=0;
    }
    else{
        a=0;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    zero_small(a,b);
    cout<<a<<" "<<b;
    return 0;
}