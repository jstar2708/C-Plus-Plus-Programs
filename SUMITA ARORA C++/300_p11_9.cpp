#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int count = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}