#include<iostream>
using namespace std;

int main(){
    int c;
    cin>>c;
    while(c>0){
         int n = c%10;
         c = c/10;
         cout<<n + 48<<endl;

    }
    return 0;
}