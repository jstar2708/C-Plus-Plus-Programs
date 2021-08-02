#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    int i = 0;
    cin>>arr;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }

    
    return 0;
}