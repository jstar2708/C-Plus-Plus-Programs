#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 1;
    int b = 0;
    int m = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            if(m%2==0){
                cout<<b;
            } else{
                cout<<a;
            } m++;
        } cout<<endl;
    } return 0;
}