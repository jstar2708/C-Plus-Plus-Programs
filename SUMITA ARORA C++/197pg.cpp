#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age : ";
    cin>>age;
    cout<<"The person is expirenced or not ,Enter yes or no : ";
    int ch;
    cin>>ch;
    int salary = 0;
    if(age>35 && ch == 1){
        salary = 6000;
    }
    else if(age<35 && age>28 && ch == 1){
        salary = 4800;
    }
    else if(ch == 1){
        salary = 3000;
    }
    else if(ch == 0){
        salary = 2000;
    }
    cout<<salary;
    return 0;


}