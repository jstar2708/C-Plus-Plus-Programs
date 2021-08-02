#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int s1 = str1.size();
    int s2 = str2.size();
    if(s1>s2){
        cout<<"string 1 is greater"<<endl;
    }
    else if(s1<s2){
        cout<<"string 2 is greater"<<endl;
    }
    else{
        cout<<"both are equal"<<endl;
    }
    return 0;
}
    