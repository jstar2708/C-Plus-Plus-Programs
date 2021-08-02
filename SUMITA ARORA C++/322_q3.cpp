#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

void changer(string str,char ch){
    for(int i = 0;i<=str.size()-1;i++){
        if(str[i]==ch|| str[i]==ch + 32){
            if(str[i]>='a' && str[i]<='z'){
                str[i] = str[i] - 32;
            } else if(str[i]>='A' && str[i]<='Z'){
                str[i] = str[i] + 32;
            }
        }
    }
    cout<<str<<endl;
}

int main(){
    string str;
    cin>>str;
    char ch;
    cin>>ch;
    if(islower(int(ch))){
        ch = ch - 32;
    }
    changer(str,ch);
    return 0;
}