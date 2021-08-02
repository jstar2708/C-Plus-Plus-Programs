#include<iostream>
using namespace std;

void perm(string str,string ans){
    if(str.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i<=str.size()-1;i++){
        char fix = str[i];
        string ros = str.substr(0,i)+str.substr(i+1);
        perm(ros,ans + fix);
    }
}

int main(){
    string str;
    getline(cin,str);
    perm(str,"");
    return 0;
}