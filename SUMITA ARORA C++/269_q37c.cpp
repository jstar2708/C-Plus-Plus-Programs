#include<iostream>
using namespace std;

int main(){
    for(int i = 4;i>=0;i--){
        for(int j = i;j>=0;j--){
            cout<<"  ";
        }
        for(int k = 0;k<1;k++){
            cout<<"&";
        }
        for(int a = 3;a<=2*(4-i) + 1;a++){
            cout<<"  ";
        }
        if(i<4){
            for(int k = 0;k<1;k++){
            cout<<" &";
            }
        }
        cout<<endl;
    }
    for(int i = 1;i<11;i++){
        cout<<" &";
    }
    cout<<endl;
    return 0;
}