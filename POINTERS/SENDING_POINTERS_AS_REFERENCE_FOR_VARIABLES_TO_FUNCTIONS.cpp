// In this program we are going to swap values using pointers by passing them into a swap function.



#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){
    int a = 2;
    int b = 4;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b;
    return 0;
}