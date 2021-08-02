#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<"X is greater than Y";
    } else if(x<y){
        cout<<"Y is greater than X";
    } else{
        cout<<"X is equal to Y";
    } return 0;
}