#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    //for lowercase to uppercase
    transform(str.begin(),str.end(),str.begin(),::toupper);  //transform(string first iterator,string last iterator,iterator to start with,upper or lower)
    cout<<str<<endl;
    //for uppercase to lowercase
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    return 0;
}