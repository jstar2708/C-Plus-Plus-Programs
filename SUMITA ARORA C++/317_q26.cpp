#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int a = ch;
    if(isalpha(a)){
        if(islower(a)){
            cout<<"It is lower";
        } else{
            cout<<"It is upper";
        }
    }
    return 0;
}