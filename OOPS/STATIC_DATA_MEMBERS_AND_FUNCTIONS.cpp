#include<bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    static int count;       //static data member of class which is by default initialized by 0.
                            //every object shares this count variable.
                            //we cannot intialize the count variable here.
                            /*for example for obj1 we have set the value of count = 10,then for obj2 the count variable
                            will be equal to 10.*/
    public:
    void setid(){
        cout<<"Enter the id : ";
        cin>>id;
        count++;
    }
    void getid(){
        cout<<"Id of employee "<<count<< " is : "<<id<<endl;
    }

    static void getcount(){      
        //cout<<id;     will throw an error
        cout<<"Count is : "<<count<<endl;       //this function can only access static vaiables or static functions,otherwise if any other variable is used (which is not static)
                                                //then it will throw an error.
    }
};
int Employee :: count; //we can initialize the static varialble here.
//int Employee :: count = 1000;



int main(){
    Employee jaideep,mayank,sanskriti;
    //jaideep.id = 1;  gives an error because id is private
    jaideep.setid();
    jaideep.getid();
    Employee :: getcount();

    mayank.setid();
    mayank.getid();
    Employee :: getcount();


    sanskriti.setid();
    sanskriti.getid();
    Employee :: getcount();

    
    return 0;
}