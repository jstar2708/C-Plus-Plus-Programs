#include<iostream>
using namespace std;

void swap(int*y,int*z){
    int temp = *z;
    *z = *y;
    *y = temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}