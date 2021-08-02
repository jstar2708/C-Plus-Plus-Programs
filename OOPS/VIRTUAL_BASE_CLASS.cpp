#include<bits/stdc++.h>
using namespace std;

/*
student ---> Test
student ---> sports
Test ---> result
sports --->result
*/
class student{
    protected:
    int roll_no;
    public:
    void setroll(int a){
        roll_no = a;
    }
    void printroll(){
        cout<<"Your roll number is : "<<roll_no<<endl;
    }
};

class Test : virtual public student{
    protected:
    float maths,physics;
    public:
    void setmarks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void printmarks(){
        cout<<"Your result is here :"<<endl
            <<"Maths : "<<maths<<endl
            <<"Physics : "<<physics<<endl;
    }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void setscore(float sc){
        score = sc;
    }
    void printscore(){
        cout<<"Your PT score is : "<<score<<endl;
    }
};

class result: public Test,public sports{
    private:
    float total;
    public:
    void display(){
        total = maths + physics + score;
        printroll();
        printmarks();
        printscore();
        cout<<"Total marks is : "<<total<<endl;
    }
};

int main(){
    result r;
    r.setroll(1);
    r.setmarks(98.4,78.8);
    r.setscore(96);
    r.display();
    return 0;
}