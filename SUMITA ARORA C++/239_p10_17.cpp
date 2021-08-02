#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s = 0,s1 = 0;
    for(int i = 2;i<=n;i+=2){
        s = s + i;
    }
    for(int i = 1;i<=n;i+=2){
        s1 = s1 + i;
    }
    cout<<"Even sum : "<<s<<endl;
    cout<<"Odd sum : "<<s1<<endl;
    return 0;
}