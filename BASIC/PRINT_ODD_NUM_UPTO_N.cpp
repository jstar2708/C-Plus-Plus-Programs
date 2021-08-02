#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i = 1;i<=a;i++){
        int n;
        cin>>n;
        if(n%2==0){
            continue;
        } else{
            cout<<n<<endl;
        }
    } return 0;
}