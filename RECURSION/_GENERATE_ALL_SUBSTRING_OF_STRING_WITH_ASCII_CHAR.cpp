#include<iostream>
using namespace std;

void ascisub(string str,string s,int i = 0){
    if(i==str.size()){
        cout<<s<<endl;
        return;
    }
    char ch = str[i];
    ascisub(str,s,i+1);
    ascisub(str,s+ch,i+1);
    ascisub(str,s + to_string(int(ch)),i+1);
    
}
int main(){
    string str;
    getline(cin,str);
    ascisub(str,"");
    return 0;
}