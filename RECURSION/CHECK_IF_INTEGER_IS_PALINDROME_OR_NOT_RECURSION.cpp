#include<iostream>
using namespace std;

int palin(string str,int i = 0){
    if(i==str.size()){
        return 1;
    } if(str[i]==str[str.size()-i-1]){
        return palin(str,i = i + 1);
    }
    return 0;
}

int main(){
    string str;
    cin>>str;
    cout<<palin(str,0);
    return 0;
}