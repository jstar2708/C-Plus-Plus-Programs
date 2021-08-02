#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(int empid){
        id = empid;
        salary = 34;
    }
    Employee(){}        //
};
//derived class syntax
/*class {{derived-class name}} : {{visibility-mode}} {{base-class-name}}
{
    class members.....
}; */

//creating a Programmer class derived from Employee class

/*NOTE->
1.Default visibility mode is private
2. Private Visibility mode : public members of base class are private members of derived class.
3. Public Visibility mode : public members of base class becomes public members of dervied class.
4. private members of base class are never inherited.
*/
class Programmer : public Employee{
    public:
    int language_code;
    Programmer(int ind){
        id = ind;
        language_code = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    Employee Jaideep(1),Mayank(2);
    cout<<Jaideep.salary<<endl;
    cout<<Mayank.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.language_code<<endl;
    skillF.getdata();
    cout<<skillF.id<<endl;
    return 0;
}