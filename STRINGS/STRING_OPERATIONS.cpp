#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    //adding two strings.
    //1st way
    string s1,s2;
    s1 = "fam";
    s2 = "ily";
    s1.append(s2);          //value of s1 gets changed to "family".
    cout<<s1<<"\n";

    //2nd way
    s1 = "fam";
    s1 = s1 + s2;           //value of s1 gets changed to "family".
    cout<<s1<<endl;

    //3rd way
    s1 = "fam";
    cout<<s1 + s2<<endl;        //adding two elements without changing value of s1 or s2.



    //accessing a particular character in strings.
    string s;
    s = "Jaideep";
    cout<<s[3]<<endl;       //it is accessing the element at index 3.


    //to clear a string

    string s4;
    s4 = "nincompoop";
    s4.clear();             //it empties the string.
    cout<<s4<<endl;

    //to compare two string
    string s5 = "abc";
    string s6 = "abb";
    cout<<s6.compare(s5)<<endl;         //it compares s6 with s5.If the value of both string is same then it will give 0.
                                        //If the value of both strings are not equal or,if the value of s6 is shorter than s5 then it will
                                        //give -1.If the value of both strings are not equal or,if the value of s6 is larger than s5 then it will
                                        //give 1 

    //to check weather a string is empty or not.

    string s7 = "jjkfejwkbfbv fkdhk";
    s7.clear();
    if(s7.empty()){                         //checks weather a string is empty or not and returns true false accordingly.
        cout<<"s7 is empty"<<endl;
    }


    //to erase a part or whole string.

    string s8 = "nincompoop";
    s8.erase(3,3);              //  <stringname>.erase(index from which it has to be erased,how many characters to be erased)
                                //it starts erasing the from given index untill it hasn't erased the amount of charactes given by user
    cout<<s8<<endl;


    //to find a substring in a string.

    string s9 = "nincompoop";
    cout<<s9.find("com")<<endl;       //it returns the staring index of the substring and if it does not find
                                //it ,it provides a garbage value.

    //to insert a string in another string.

    cout<<s9.insert(2,"lol")<<endl;    //it inserts the given string in the provided index.

    //to find the length of string.We have two functions for this-

    cout<<s9.size()<<endl;          //1st way
    cout<<s9.length()<<endl;          //2nd way

    //to sort a given string.
    //for this we have to include a header file algorithm

    string s10  = "kfljdklsjfdkvdf";
    sort(s10.begin(),s10.end());        //it sorts the string in ascending order.s10.begin() gives the starting
                                        //iterator of s10 and s10.end() gives the next iterator after its ending iterator
                                        //for descending order we have to add one more argument---> greater<int>()
    cout<<s10<<endl;


    //to get substring of a string.
    string s11 = s10.substr(6,4);           //it returns the substring of the string starting from the provided index
                                            //<stringname>.substr(index,no of characters after index required)
    cout<<s11<<endl;
    
    //to convert a string into integer

    string s12 = "123";
    int x = stoi(s12);
    x = x + 15;
    cout<<x<<endl;

    //to convert a integer to string;

    int y = 123;
    string s13 = to_string(y);
    s13 = s13 + "456";
    cout<<s13<<endl;

    return 0;
}