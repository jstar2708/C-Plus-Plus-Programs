#include<bits/stdc++.h>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void setroll(int);
    void getroll();
};

void student :: setroll(int r){
    roll_number = r;
}
void student :: getroll(){
    cout<<"Your roll is : "<<roll_number<<endl;
}

class exam : public student{
    protected:
    int maths,physics;
    public:
    void setmarks(int,int);
    void getmarks();
};

void exam :: setmarks(int m1,int m2){
    maths = m1;
    physics = m2;
}
void exam :: getmarks(){
    cout<<"Marks in maths : "<<maths<<endl;
    cout<<"Marks in physics : "<<physics<<endl;
}

class Result : public exam{
    public:
    void getpercent(){
        cout<<"Your results is : "<<((maths+physics)/2)<<"%"<<endl;
    }
};
int main(){
    Result Jaideep;
    Jaideep.setroll(1);
    Jaideep.setmarks(97,99);
    Jaideep.getroll();
    Jaideep.getmarks();
    Jaideep.getpercent();
    return 0;
}