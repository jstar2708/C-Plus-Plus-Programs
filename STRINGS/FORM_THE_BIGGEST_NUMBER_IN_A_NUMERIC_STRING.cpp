#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    //to form the biggest number we will sort the string in descending order,for example-"1234"-->"4321".

    sort(str.begin(),str.end(),greater<int>());     //greater<int>() is added to sort the string in reverse order i.e. descending order.
    cout<<str<<'\n';
    return 0;
}