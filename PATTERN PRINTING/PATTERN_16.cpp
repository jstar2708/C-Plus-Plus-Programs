#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j,k;
    for(int i = 1;i<=n;i++){
        for(j = 1;j<=n-i+1;j++){
            cout<<"*";
        } for(;j<=n+i-2;j++){
            cout<<" ";
        } for(int m=1;m<=n-i+1;m++){
            if(i == 1 && m==1){
                cout<<"";
            } else{
                cout<<"*";
            }
        }
        cout<<endl;

    
    } for(int i = 1;i<=n;i++){
        for(k= 1;k<=i;k++){
            cout<<"*";
        } for(k=1;k<=2*(n-i)-1;k++){
            cout<<" ";
        } for(k=1;k<=i;k++){
            if(k==5 && i==5){
                cout<<"";
            } else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}