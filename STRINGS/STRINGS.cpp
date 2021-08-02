#include<iostream>
#include<string>
using namespace std;
int main(){
    //1st way of entering a string
    string str;
    cin>>str;       //string should be entered without spaces i.e it cannot take input a line.
    cout<<str<<endl;

    //2nd way of entering a string
    string str1;            
    str1 = "Jaideep";          //string should be entered without spaces i.e it cannot take input a line.    
    cout<<str1<<endl;

    //3rd way of entering a string.
    string str3(5,'n');         //<stringname>(size,character in '')
    cout<<str3<<endl;           //with this method we can input a single character a number of times as per user convenience.

    //4th way and the best
    string str2;
    getline(cin,str2);          //it can take input as a line.
    cout<<str2;

    return 0;
}