#include<iostream>
using namespace std;

void feet(float &n){
    n = n/30.48;
}
void inches(float &m){
    m = m/2.54;
}

int main(){
    int ch;
    cout<<"Do you want distance in feet or inches (1 or 0) : ";
    cin>>ch;
    float dis;
    cout<<"Enter distance in cm : ";
    cin>>dis;
    ch==1?feet(dis):inches(dis);
    cout<<dis;
    return 0;
}