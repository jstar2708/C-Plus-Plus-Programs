#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    str[0]-=32;
    for(int i = 0;i<=str.size()-2;i++){
        if(str[i]==' ' && islower((int)str[i+1])){
            str[i+1] = str[i+1] -32; 
        }
    }
    cout<<str<<endl;
    return 0;
}