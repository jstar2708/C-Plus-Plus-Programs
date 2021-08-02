#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter coeffients of equation : ";
    cin>>a>>b>>c;
    float x1 = 0,x2 = 0;
    float D = b*b - 4*a*c;
    if(D<0){
        cout<<"Roots are complex";
    }
    else{
        x1 = (float)((-b + sqrt(D))/(2*a));
        x2 = (float)((-b - sqrt(D))/(2*a));
        if(D==0){
            cout<<"Roots are real and equal "<<endl;
        }
        else{
            cout<<"Roots are real and unequal"<<endl;
        }
        cout<<"Roots are : ";
        cout<<x1<<" "<<x2;
    }
    return 0;

}