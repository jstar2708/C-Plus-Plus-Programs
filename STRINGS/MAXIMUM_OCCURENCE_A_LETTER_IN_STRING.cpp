#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //string should be of lowercase letters
    string str;
    cin>>str;
    int mx = 0;
    string s;

    //to find the maximum occurence of a letter we will create a array of 26 size each representing a letter of english alphabets
    int freq[26] = {0};   //initalizing our list or array by 0.
    for(int i = 0;i<=str.size()-1;i++){
        freq[str[i]-'a']++;         //incrementing the value of occerence in array.
    }
    for(int i = 0;i<=25;i++){
        if(mx<freq[i]){
            mx = freq[i];              //finding the maximum index increamented
            s = i + 'a';                //finding the character which occured most.
        }
    }
    cout<<mx<<" "<<s<<endl;
    return 0;
}