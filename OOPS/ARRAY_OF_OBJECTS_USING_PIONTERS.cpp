#include<bits/stdc++.h>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id = a;
        price = b;
    }
    void getdata(){
        cout<<"Code of this item is : "<<id<<endl;
        cout<<"Price of this item is : "<<price<<endl;
    }
};

int main(){
    int size = 3;
    int p;
    float q;
    Shop *ptr = new Shop [size];
    Shop *ptrtemp = ptr;
    for(int i = 0;i<size;i++){
        cout<<"Enter Id and price of item "<<i+1<<" : ";
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for ( int i = 0; i < size; i++)
    {
        cout<<"Item number is : "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}