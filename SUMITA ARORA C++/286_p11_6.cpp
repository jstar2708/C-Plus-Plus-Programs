#include<iostream>
#include<string>
using namespace std;

int find(string s,char c){
    for(int i = 0;i<=s.size()-1;i++){
        if(s[i]==c){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    if(find(str,ch)){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
    return 0;
    
}