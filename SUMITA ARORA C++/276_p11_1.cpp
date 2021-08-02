#include<iostream>
using namespace std;

int cube(int n){
    return n*n*n;
}

int main(){
    int n;
    cin>>n;
    cout<<"Cube is : "<<cube(n)<<endl;
    return 0;
}