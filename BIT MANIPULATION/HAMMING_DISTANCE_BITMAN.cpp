#include<iostream>
using namespace std;

void hammingdist(int a,int b){
    int c = a^b;
    int count = 0;
    for(int i = 0;i<=31;i++){
        if(c & (1<<i)){
            count++;
        }
    }
    cout<<count;
}


int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    hammingdist(n,m);
    return 0;
}