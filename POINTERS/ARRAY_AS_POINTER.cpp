#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30};
    for(int i = 0;i<=2;i++){
        cout<<*(arr+i)<<" ";
    }
    int* aptr = arr;
    cout<<endl;
    for(int i = 0;i<=2;i++){
        cout<<*aptr<<" ";
        aptr++;
    } return 0;
}