#include<bits/stdc++.h>
using namespace std;

void power(int n,int p){
    double ans = 1;
    unsigned powe = abs(p);
    while(powe>0){
        if(powe%2==0){
            n = n*n;
            powe = powe/2;
        }
        else{
            ans = ans*n;
            powe--;
        }
    }
    if(p<0){
        cout<<((double)1/(double)ans)<<endl;
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    power(n,p);
    return 0;
}