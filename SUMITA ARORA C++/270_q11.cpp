#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    float m = 1;
    for(int i = 1;i<=n;i++){
        float fac = 1;
        int k = i;
        while(k>0){
            fac = fac*k;
            k = k - 1;
        }
        float a = 1/fac;

        m = m + a;
        
    }
    cout<<m<<endl;
}