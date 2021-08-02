#include<iostream>
using namespace std;

void possiblestr(string str,int k,string ans){
    if(ans.length()==k){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i<=str.size()-1;i++){
        char fix = str[i];
        possiblestr(str,k,ans + fix);
    }
}

int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    possiblestr(str,k,"");
    return 0;
}