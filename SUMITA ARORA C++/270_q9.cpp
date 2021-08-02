#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    for(int i = 1;i<=n;i++){
        if(i%m==0){
            if(i%2==0){
                cout<<"Even and divisible ->"<<i<<endl;
            }
            else{
                cout<<"Odd and divisible ->"<<i<<endl;
            }
        }
    }
    return 0;
}