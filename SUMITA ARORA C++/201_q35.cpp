#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Character is lowercase ,its uppercase is :";
        cout<<(char)(ch - 32)<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Character is uppercase ,its lowercase is : ";
        cout<<(char)(ch + 32)<<endl;
    }
    else{
        cout<<"It is not a letter";
    }
    return 0;

    
}