#include<iostream>
using namespace std;

void increament(int *a){
    (*a)++;
}

int main(){
    int a = 10;
    int *aptr = &a;
    increament(aptr);
    cout<<a;
    return 0;
}