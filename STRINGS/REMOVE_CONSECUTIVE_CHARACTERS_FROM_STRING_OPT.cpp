#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    string ans;
    ans = str[0];           //adding first character to the ans string
    for(int i = 1;i<=str.size()-1;i++){
        if(str[i]!=str[i-1]){       //checking the condition for consecutive characters.
            ans = ans + str[i];
        }
    }
    cout<<ans<<endl;
    cout<<str[str.size()];
    return 0;
}