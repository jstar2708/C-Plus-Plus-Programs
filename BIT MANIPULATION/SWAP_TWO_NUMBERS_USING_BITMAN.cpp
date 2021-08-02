#include<iostream>
using namespace std;

void swap(int x,int y){
    x = x^y;
    y = y^x;
    x = x^y;
    cout<<x<<" "<<y<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}