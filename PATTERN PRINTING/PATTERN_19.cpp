#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        } for(int k = 1;k<=2*(n-i);k++){
            cout<<" ";
        } for(int j = 1;j<=i;j++){
            cout<<"*";
        } cout<<endl;
    } for(int i = 1;i<=n;i++){
        for(int j = n;j>=i;j--){
            cout<<"*";
        } for(int k = 1;k<=2*(i-1);k++){
            if(i==1){
                continue;
            } else{
                cout<<" ";
            }
        } for(int j = n;j>=i;j--){
            cout<<"*";
        } cout<<endl;
    } return 0;
}
