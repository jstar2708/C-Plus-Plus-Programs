#include<iostream>
using namespace std;

double power(int n,int p = 2){
    double r = 1;
    for(int i = 0;i<=p-1;i++){
        r*=n;
    }
    return r;
}

int main(){
    double n;
    cin>>n;
    int p;
    cin>>p;
    cout<<power(n,p)<<endl;
    cout<<"Result only with n : "<<power(n);
    return 0;
}