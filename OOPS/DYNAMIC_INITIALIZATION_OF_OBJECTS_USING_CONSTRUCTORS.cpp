#include<iostream>
using namespace std;

class Bankdeposit{
    int principle;
    int years;
    float interestrate;
    float returnvalue;
    public:
    Bankdeposit(){};
    Bankdeposit(int p,int y,int R);         //rate can be given as an integer like in percentage--4,5,7.
    Bankdeposit(int p,int y,float r);       //rate can be given as an float like 0.4,0.09....
    void show();
};

Bankdeposit :: Bankdeposit(int p,int y,int R){
    principle = p;
    years = y;
    interestrate = (float)R/100;
    returnvalue = p;
    for(int i = 0;i<y;i++){
        returnvalue = returnvalue + returnvalue*(interestrate);
    }
}

Bankdeposit::Bankdeposit(int p,int y,float r){
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = p;
    for(int i = 0;i<y;i++){
        returnvalue = returnvalue + returnvalue*(interestrate);
    }
}

void Bankdeposit :: show(){
    cout<<"Principle amount was : "<<principle<<endl
        <<"Return value is : "<<returnvalue<<endl;
}

int main(){
    Bankdeposit bd1,bd2,bd3;
    int p,y,R;
    float r;
    cout<<"Enter the values of p,y,r : ";
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show();
    cout<<endl;
    cout<<"Enter the values of p,y,R : ";
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p,y,R);
    bd2.show();
    cout<<endl;
    bd3.show();
    return 0;
}