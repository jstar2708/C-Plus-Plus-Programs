#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int lower,upper;
    cin>>lower>>upper;
    time_t x;
    x = time(0);
    cout<<x<<endl;
    srand(x);
    for(int i = 0;i<=4;i++){
        cout<<(rand()%(upper-lower + 1) + lower)<<endl;
    }
    return 0;
}