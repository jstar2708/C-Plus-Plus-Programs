#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    char c[n+1];
    for(int i = 0;i<=n-1;i++){
        cin>>c[i];
    }
    int i;
    for(i = 0;i<=n/2;i++){
        if(c[i]!=c[n-i-1]){
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==(n/2) + 1){
        cout<<"YES"<<endl;
    }
    return 0;
}