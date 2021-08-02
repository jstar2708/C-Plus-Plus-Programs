#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setdata(){
        salary = 35000;
        cout<<"Enter id of employee : ";
        cin>>id;
    }
    void getdata(){
        cout<<"Employee details are : "<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    Employee company[3];
    for(int i = 0;i<3;i++){
        company[i].setdata();
        company[i].getdata();
    }
    return 0;
}