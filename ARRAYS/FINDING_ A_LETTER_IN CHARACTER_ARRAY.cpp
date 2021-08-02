#include<iostream>
using namespace std;

int main(){
    int n;         //array size
    cin>>n;
    cin.ignore();
    char arr[n+1];      //declaring the array with n+1 size because at last it has an extra character '\0'.
    cin.getline(arr,n);         //taking input from the user with whitespaces.
    char ch;
    cin>>ch;
    int ans = 0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i]==ch){
            cout<<"FOUND";
            ans = 1;
        }

    }if(ans==0){
        cout<<"NOT FOUND";
    }
    return 0;
}