#include<iostream>
#include<math.h>
using namespace std;

int fac(int a){
    int fact = 1;
    while(a>0){
        fact*=a;
        a--;
    }
    return fact;
}

double SumSeries(int n, double x){
    double s = 0;
    int k = 1;
    for(int i = 1;i<=n;i++){
        s = s + pow(-1,i-1)*pow(x,i)/fac(k);
        k+=2;
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    double x;
    cin>>x;
    cout<<SumSeries(n,x)<<endl;
    return 0;
}