#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if((ch>='a' && ch <='z' )|| (ch>='A' && ch<='Z')){
        cout<<"Entered character is letter"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Entered character is a digit"<<endl;
    }
    else{
        cout<<"It is other character"<<endl;
    }
    return 0;
}