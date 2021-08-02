#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,s2;
    getline(cin,s);
    getline(cin,s2);
    s  = s + " " + s2;
    cout<<s<<endl;
    return 0;
}