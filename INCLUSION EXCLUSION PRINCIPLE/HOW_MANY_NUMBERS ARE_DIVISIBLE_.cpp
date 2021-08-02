#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int a,b;
   cin>>a>>b;
   int c1 = 0,c2 = 0,c3 = 0;
   c1 = (int)n/a;
   c2 = (int)n/b;
   c3 = (int)n/(a*b);
   cout<<c1+c2-c3<<endl;
   cout<<c3;
   return 0;
}