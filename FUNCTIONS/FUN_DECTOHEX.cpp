#include<bits/stdc++.h>
using namespace std;


string dectohex(int m){
    string ans  = "";
    int x = 1;
    while(x<=m){
        x = x*16;
    } x = x/16;
    while(x>0){
        int ld = m/x;
        m = m - ld*x;
        x = x/16;

        if(ld<=9){
            ans = ans + to_string(ld);
        } else{
            char c = 'A'+ ld - 10;
            ans.push_back(c);
        } 
    } return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<dectohex(n);
    return 0;
}