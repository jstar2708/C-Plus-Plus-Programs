#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    char o;
    cin>>o;
    switch(o){
        case '+':
            cout<<x+y<<endl;
            break;
        case '-':
            cout<<x-y<<endl;
            break;
        case '*':
            cout<<x*y<<endl;
            break;
        case '/':
            cout<<x/y<<endl;
            break;
        default:
            cout<<"Operator not found";
            break;
    } return 0;

}
