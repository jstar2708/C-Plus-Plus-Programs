#include<iostream>
using namespace std;

string mox(string str){
    if(str.size()==0){
        return "";
    }
    char ch = str[0];
    string ans = mox(str.substr(1));
    if(ch=='x'){
        return ans + ch;
    }
    return ch + ans;
}

int main(){
    string str;
    getline(cin,str);
    cout<<mox(str)<<endl;
    return 0;
}