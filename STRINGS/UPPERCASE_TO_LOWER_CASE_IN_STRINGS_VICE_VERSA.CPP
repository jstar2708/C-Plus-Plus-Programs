#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;

    //for lower case to upper case
    for(int i = 0;i<=str.size()-1;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;
        } 
    } cout<<str<<endl;

    //for lower case to upper case
    for(int i = 0;i<=str.size()-1;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i] + 32;
        }
        
    } 
    cout<<str<<endl;
    
    return 0;
}