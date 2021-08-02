#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter : ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Uppercase";
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lowercase";
    } else if(ch>=48 && ch<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Characters";
    }
    return 0;
}