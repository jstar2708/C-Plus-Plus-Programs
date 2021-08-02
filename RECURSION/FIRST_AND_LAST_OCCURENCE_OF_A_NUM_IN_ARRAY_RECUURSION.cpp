#include<iostream>
 using namespace std;
 void secocc(int arr[],int n,int x){
     if(n==0){
         cout<<"No second occrence"<<endl;
         return;
     }
     
     if(arr[n]==x){
         cout<<n;
         return;
     } else{
         secocc(arr,n-1,x);
     }
 }

 void firocc(int arr[],int n,int x,int j = 0){
     if(j==n){
         cout<<"No occurence"<<endl;
         return;
     } 
     if(arr[j]==x){
         cout<<j<<endl;
         return;
     } else{
         firocc(arr,n,x,j = j +1);
     }
 }
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i = 0;i<=n-1;i++){
         cin>>arr[i];
     }
     int x;
     cin>>x;
     firocc(arr,n-1,x);
     secocc(arr,n-1,x);
     return 0;
 }