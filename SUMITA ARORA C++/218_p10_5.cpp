#include<iostream>
using namespace std;

int main(){
    int sales;
    float com;
    cout<<"Enter sales value : ";
    cin>>sales;
    if(sales>=30001){
        com = sales*(float)15/100;
    }
    else if(sales<=30000 && sales>=22001){
        com = sales*(float)10/100;
    }
    else if(sales >=12001 && sales <=22000){
        com = sales*(float)7/100;
    }
    else if(sales >=5001 && sales<=12000){
        com = sales*(float)3/100;
    }
    else if(sales >=0 && sales <=5000){
        com = 0;
    }
    cout<<com<<endl;
    return 0;

}