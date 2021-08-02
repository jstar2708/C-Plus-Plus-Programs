#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<"Leap year"<<endl;
            }
            else{
                cout<<"Not leap year"<<endl;
            }
        } else{
            cout<<"Leap year"<<endl;
        }
    } else{
        cout<<"Not leap year"<<endl;
    }
    return 0;
}