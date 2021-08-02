#include<iostream>
using namespace std;

void towerofhanoi(int n,string source,string final,string helper){

    if(n==0){
        return;
    }
    towerofhanoi(n-1,source,helper,final);
    cout<<"Move from "<<source<<" to "<<final<<endl;
    towerofhanoi(n-1,helper,final,source);
}

int main(){
    int n;
    cin>>n;
    string source = "A";
    string helper = "B";
    string final = "C";
    towerofhanoi(n,source,final,helper);
}