#include<iostream>
using namespace std;

int octtodec(int i){
    int j = 1;
    int sum = 0;
    while(i>0){
        sum  = sum + (i%10)*j;
        j = j*8;
        i = i/10;
    } return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<octtodec(n);
    return 0;
}