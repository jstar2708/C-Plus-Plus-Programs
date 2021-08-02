#include<iostream>
using namespace std;

int swapbit(int n){
    int even = n & 0xAAAAAAAA;          //gives all even bits of a number as it contains all set bits at even position.
    int odd = n & 0x55555555;           //gives all odd bits of a number as it contains all set bits at odd position.
    even = even>>1;
    odd = odd<<1;           //0x55555555 = .....1010101 upto 32 bits
                            //0xAAAAAAAA = .....0101010 upto 32 bits
    return (odd|even);
}

int main(){
    int n;
    cin>>n;
    cout<<swapbit(n);
    return 0;
}