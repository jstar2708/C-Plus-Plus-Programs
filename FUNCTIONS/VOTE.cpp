#include<iostream>
using namespace std;

string age(int x){
    if(x>=18){
        return "Yes";
    } else{
        return "No";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<age(n);
    return 0;
}