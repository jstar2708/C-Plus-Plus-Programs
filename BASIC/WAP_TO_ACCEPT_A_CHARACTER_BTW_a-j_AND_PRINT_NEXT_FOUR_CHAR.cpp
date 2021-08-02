#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='j'){
        for(int i = 0;i<=3;i++){
            ch++;
            cout<<ch<<endl;
        }
    }
    return 0;
}