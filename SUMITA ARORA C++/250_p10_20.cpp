#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    for(i = 2;i<=n-1;i++){
        if(!(n%i)){
             cout<<"No it is not a prime"<<endl;
             exit(0);
    }
        }
    if(i==n){
        cout<<"Yes it is prime"<<endl;
    }
    return 0;

}