#include<iostream>
using namespace std;

string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string str,string ans){
    if(str.size()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    string code = key[ch-'0'];
    string ros = str.substr(1);
    for(int i = 0;i<=code.length()-1;i++){
        keypad(ros,ans+code[i]);
    }
}

int main(){
    string str;
    getline(cin,str);
    keypad(str,"");
    return 0;
}