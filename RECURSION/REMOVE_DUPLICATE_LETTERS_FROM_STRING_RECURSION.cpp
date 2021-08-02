#include<iostream>
using namespace std;

string dup(string str){
    if(str.size()==0){
        return "";
    }
    char ch = str[0];
    string ans = dup(str.substr(1));
    if(ch==ans[0]){
        return ans;
    } else{
        return ch + ans;
    }
}

int main(){
    string str;
    getline(cin,str);
    string s = dup(str);
    cout<<s<<endl;
    return 0;
}