#include<iostream>
using namespace std;

double power(long long  x,long long n){
    double ans = 1;
    long long n1 = n;
    if(n<0){
        n1 = -1*n;          //if power is given -ve then we will make it positive and then at last return 1/(x^n)
    }
    while(n1>0){
        if(n1%2==0){        //if power is odd then just divide it by 2 ans multiply x b itself
            n1 = n1/2;
            x = x*x;
        }
        else{               //if power is odd then just decrement power and multiply ans by x.
            n1 = n1 - 1;
            ans = ans*x;
        }
    }
    if(n<0){
        return (double)1/(double)ans;
    }
    return ans;
}

int main(){
    long long x;
    cin>>x;
    long long n;
    cin>>n;
    cout<<power(x,n);
    return 0;

}