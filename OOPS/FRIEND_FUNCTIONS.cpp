#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    /*A friend function is not a part of class but 
    it can access the class members both private or public indirectly(i.e by use of object.member_name-----example-> o1.a)*/
    friend Complex sumcomp(Complex o1,Complex o2);
    void setcomp(int x,int y){
        a = x;
        b = y;
    }
    void getcomp(){
        cout<<"Complex Number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumcomp(Complex o1,Complex o2){
    //cout<<a       //this will throw error
    //cout<<o1.a   //this is correct
    Complex o3;
    o3.setcomp((o1.a + o2.a),(o1.b + o2.b));
    return o3;
} 

int main(){
    Complex o1,o2,sum;
    o1.setcomp(1,2);
    o1.getcomp();
    o2.setcomp(2,3);
    o2.getcomp();

    sum = sumcomp(o1,o2);
    sum.getcomp();
    return 0;

}

/*Properties of friend functions :
1. it is not a class function or we could say it is not in the scope of class.
2. since it is not a scope of class it cannot be called from the object of the class
ex-> c1.sumcomp() == invalid.
3. can be invoked without the help of object.
4. usually contains objects as arguments.
5. can be declared inside public or private part of class.
6. it cannot access the members(a,b) directly by their names and need objects for accessing it.
*/