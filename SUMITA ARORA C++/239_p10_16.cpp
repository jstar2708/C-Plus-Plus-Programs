#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long fac = 1;
    for(int i = n;i>=1;i--){
        fac*=i;
    }
    cout<<"Factorial is : "<<fac<<endl;
    return 0;
}