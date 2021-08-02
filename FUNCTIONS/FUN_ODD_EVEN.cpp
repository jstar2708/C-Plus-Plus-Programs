#include<iostream>
using namespace std;

string odd_even(int i){
    if(i%2==0){
        return "even";
    }
    else{
        return "odd";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<odd_even(n);
    return 0;
}