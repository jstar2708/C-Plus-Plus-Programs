#include<iostream>
using namespace std;

int main(){
    char ch = 'y';
    while(ch=='y'){
        int n;
        cin>>n;
        int i;
        for(i = 2;i<=n-1;i++){
            if(n%i==0){
                break;
            }
        }
        if(i==n){
            cout<<"Prime"<<endl;
            goto start;
        }
        if(n%2==0){
            cout<<"it is even"<<endl;
        } 
        else{
            cout<<"it is odd"<<endl;
        }
        start :
        cin>>ch;
    }
    return 0;

}