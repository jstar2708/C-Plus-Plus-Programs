#include<iostream>
using namespace std;

int main(){
    //creating a 2d array in stack.
   // int m,n;
  //cin>>m>>n;
  //  int arr[m][n];
    //for(int i = 0;i<=m-1;i++){
      //  for(int j = 0;j<=n-1;j++){
        //    cin>>arr[i][j];
        //}
    //}
    //for(int i = 0;i<=m-1;i++){
      //  for(int j = 0;j<=n-1;j++){
        //    cout<<arr[i][j]<<" "; 
       // } cout<<endl;
   // }
   
   
   
   //creating a 2d array in heap
   int m,n;
   cin>>m>>n;   //taking input from user for array rows and columns.
   int**p = new int*[m];      //creating a pointer array which represents rows which would further point the columns.
   for(int i = 0;i<=m-1;i++){
       p[i] = new int[n];          //each row block creting a new column arrays
   }
   for(int i = 0;i<=m-1;i++){
       for(int j = 0;j<=n-1;j++){
           cin>>p[i][j];             //taking input from user 
       }
   }
   for(int i = 0;i<=m-1;i++){
       for(int j  = 0;j<=n-1;j++){
           cout<<p[i][j]<<" ";          //printing the array 
       } cout<<endl;
   }


    return 0;

}