#include<iostream>
#include<math.h>
using namespace std;

int fac(int a){
    int fact = 1;
    while(a>0){
        fact*=a;
        a = a-1;
    }
    return fact;
}

int main(){
    int x,n;
    cin>>x>>n;
    float s = 0;
    for(int i = 1;i<=n;i++){
        s = s + (float)pow(x,i)/fac(i);
    }
    cout<<s<<endl;
}