#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"You cannot vote!"<<endl;
    } else{
        cout<<"You can vote!"<<endl;
    } return 0;
}