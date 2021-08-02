#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<pow(n,2)<<endl;
    }
    else{
        cout<<pow(n,3);
    }
    return 0;
}