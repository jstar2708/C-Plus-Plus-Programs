#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int * aptr = &a;
    cout<<"The value of a is : "<<*aptr<<endl;

    //new keyword

    int *p = new int (40);
    cout<<"The value at address p is : "<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for(int i = 0;i<3;i++){
        cout<<"The value of arr["<<i<<"] is : "<<arr[i]<<endl;
    }

    //delete operator
    int *arr1 = new int[3];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    delete[]arr1;       //deallocating memory
    for(int i = 0;i<3;i++){
        cout<<"The value of arr1["<<i<<"] is : "<<arr1[i]<<endl;
    }
    return 0;
}