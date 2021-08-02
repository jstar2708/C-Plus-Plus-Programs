#include<iostream>
using namespace std;

void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y;
}

int main(){
    int n,m;
    cin>>n>>m;
    swap(n,m);
    return 0;
}