#include<iostream>
using namespace std;

class complex{
    int a,b;
    static int counter;     //static variable
    public:

    complex(void);      //constructor
    //constructor is a special member function with the same name as of class.
    //constructor is used to initialize the objects
    //it is automatically invoked when an object is created

    void printcomp(){
        cout<<"Complex number : "<<a<<" + "<<b<<"i"<<endl;
    }
};

int  complex :: counter;        //static variable

complex :: complex(void){       //default constructor as it has no parameters.
    a = 10;
    b = counter + 20;
    counter++;
}

int main(){
    complex x,y,z;
    x.printcomp();
    y.printcomp();
    z.printcomp();
    return 0;
}
    
/* Characterstics of Constructors -->
1.It should be declared in the public section of class.
2. They are automatically invoked when object is created.
3.Do not have return type and cannot return value.
4.It can have default arguments.
5.We cannot refer to their address.
*/