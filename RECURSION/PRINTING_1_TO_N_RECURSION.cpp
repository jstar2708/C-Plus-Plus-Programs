#include<iostream>
using namespace std;

void prin(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    
    prin(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    prin(n);
    return 0;
}