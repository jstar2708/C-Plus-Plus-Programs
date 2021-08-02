#include <iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple(int a,int b = 10){       //default argument in constructor
        data1 = a;
        data2 = b;
    }
    void printdata();       //declaration
};

void simple :: printdata(){
    cout<<"Value of data 1 and data 2 is : "<<data1<<" "<<data2<<endl;;
}

int main(){
    simple a(5);
    a.printdata();
    
    simple b(5,4);
    b.printdata();

    return 0;
}