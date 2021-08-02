#include<iostream>
using namespace std;

void substr(string str,string s,int i = 0){
    if(i==str.size()){
        cout<<s<<endl;
        return;
    } 
    substr(str,s+str[i],i+1);
    substr(str,s,i+1);
}

int main(){
    string str;
    getline(cin,str);
    substr(str,"");
    return 0;
}