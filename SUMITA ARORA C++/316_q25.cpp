#include<iostream>
#include<ctype.h>
using namespace std;

void checker(char ch){
    if(isalnum((int)ch)){
        if(isdigit((int)ch)){
            cout<<"It is digit"<<endl;
        }
        else{
            cout<<"It is letter"<<endl;
        }
    }
    else{
        cout<<"It is a character";
    }
}

int main(){
    char ch;
    cin>>ch;
    checker(ch);
    return 0;
}
