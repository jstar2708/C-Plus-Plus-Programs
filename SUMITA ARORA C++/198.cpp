#include<iostream>
using namespace std;

int main(){
    int players;
    cout<<"HOW MANY PLAYERS ARE THERE ?";
    cin>>players;
    int teams = players/5;
    int rem = players - teams*5;
    cout<<teams<<" "<<rem<<endl;
    return 0;
    
}