#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                cout<<"YES IT IS A LEAP YEAR";
            } else{
                cout<<"NO";
            }
        } else{
                cout<<"YES IT IS A LEAP YEAR";
        }
    } else{
        cout<<"NO";
    } return 0;
}