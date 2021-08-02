#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int y;
    cout<<"Enter y for the equation : ";
    cin>>y;
    float res = 2 - y*exp(2*y) + pow(4,y);
    cout<<res<<endl;
    return 0;
}