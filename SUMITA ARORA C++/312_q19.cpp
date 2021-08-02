#include<iostream>
using namespace std;

void calc(int n,int m,char o){
    if(o=='+'){
        cout<<n+m<<endl;
    }
    else if(o=='-'){
        cout<<n-m<<endl;
    }
    else if(o=='*'){
        cout<<n*m<<endl;
    }
    else{
        cout<<(float)n/m<<endl;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    char ch;
    cin>>ch;
    calc(a,b,ch);
    return 0;
}