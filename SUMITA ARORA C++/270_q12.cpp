#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0,count1 = 0,count2 = 0;
    while(n!=0){
        if(n>=26 && n<=35){
            count1++;
        } 
        else if(n>=36 && n<=45){
            count2++;
        }
        else if(n>=46 && n<=55){
            count++;
        }
        cin>>n;
    }
    cout<<"26-35 : "<<count1<<endl;
    cout<<"36-45 : "<<count2<<endl;
    cout<<"46-55 : "<<count;
    return 0;
}