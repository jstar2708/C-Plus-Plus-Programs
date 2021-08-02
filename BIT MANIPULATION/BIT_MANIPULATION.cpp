#include<iostream>
using namespace std;

int getbit(int n,int pos){
    return (n & (1<<pos))!=0;
}
int setbit(int n,int pos){
    return (n | (1<<pos));
}
int clearbit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
int updatebit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int togglebit(int n,int pos){
    return (n xor (1<<pos));
}

int main(){
    cout<<getbit(5,2)<<endl;
    cout<<setbit(23,0)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
    cout<<togglebit(6,2);
    return 0;
}