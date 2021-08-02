#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0 && n%2!=0){
        cout<<(float)sqrt(n);
    }
    else{

        cout<<pow(n,5);
    }
    return 0;
}