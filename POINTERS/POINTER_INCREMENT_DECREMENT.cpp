#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout<<&a<<endl;
    int *aptr = &a;
    aptr++;     //this only increments the address of a by 4 because a standard integer takes 4 bytes space.for a char it would be 1.
    cout<<aptr<<endl;
    cout<<a;
    return 0;
}