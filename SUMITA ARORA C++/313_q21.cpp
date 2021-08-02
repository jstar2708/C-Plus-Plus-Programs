#include<iostream>
#include<math.h>
using namespace std;

int fac(int a){
    int fact = 1;
    while(a>0){
        fact= fact*a;
        a--;
    }
    return fact;
}

double sumsequence(double x,int n){
    double s= 0;
    int k = 1;
    for(int i = 1;i<=n;i++){
        s = s + pow(-1,i-1)*(fac(k)/pow(x,i));
        k+=2;
    }
    return s;

}

int main(){
    int n;
    cin>>n;
    double x;
    cin>>x;
    cout<<sumsequence(x,n);
    return 0;
}