#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(!s1.compare(s2)){      //or---if(s1.compare(s2)==0)
        cout<<"Strings are equal";
    } 
    if(s1.compare(s2)){
        cout<<"strings are not equal";
    }
    return 0;
}