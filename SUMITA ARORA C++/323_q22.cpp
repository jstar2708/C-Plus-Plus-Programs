#include<iostream>
using namespace std;

int reference(int *n,int *m){
    if(*n%2!=0){
        if(*m%2!=0){
            if(*n>*m){
                return *n;
            } else{
                return *m;
            }
        } else{
            return *n;
        }
    } if(*m%2!=0){
        return *m;
    }
    return 0;
}

int main(){
    int n;
    int m;
    cin>>n>>m;
    cout<<reference(&n,&m);
    return 0;
}