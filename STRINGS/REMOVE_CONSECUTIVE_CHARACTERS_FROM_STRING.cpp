#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i = 0;i<=str.size()-2;i++){
        int j = i+ 1;
        while(str[i]==str[j] && j<=str.size()-1){          //checking for consecutive condition.
            j++;
        } 
        if(j-i==0){
            i = i + 1;
        } else{
            str.erase(i,j-i-1);
        }
    }
    cout<<str;
}