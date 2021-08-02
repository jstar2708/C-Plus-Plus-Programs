#include<iostream>
#include<string>
using namespace std;

string dec(string s,int N){
    switch(N){
        case 0:
        s = "000";
        break;
        case 1:
        s = "001";
        break;
        case 2:
        s = "010";
        break;
        case 3:
        s = "011";
        break;
        case 4:
        s = "100";
        break;
        case 5:
        s = "101";
        break;
        case 6:
        s = "110";
        break;
        case 7:
        s = "111";
        break;
    }
    return s;

}


int bin(int n){
    string strones;
    string strten;
    strones = dec(strones,n%10);
    n = n/10;
    strten = dec(strten,n);
    return stoi(strten+strones);
}
int main(){
    int n;
    cin>>n;
    cout<<bin(n);
    return 0;
}