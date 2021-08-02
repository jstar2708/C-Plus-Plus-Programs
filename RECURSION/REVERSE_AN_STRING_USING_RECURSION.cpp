#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse(string str){
    if(str.length()==0){
        return;
    }
    string s = str.substr(1);
    reverse(s);
    cout<<str[0];

}

int main(){
    string str;
    getline(cin,str);
    reverse(str);
    return 0;
}
   