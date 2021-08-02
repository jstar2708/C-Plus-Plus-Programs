#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int count = 0;
    getline(cin,str);
    for(int i = 0;i<=str.size()-1;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='O'|| str[i]=='I'||str[i]=='U'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}