#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float a = 2,b = 9;
    float m = a/b;
    if(n==1){
        cout<<a/b<<endl;
    }
    for(int i = 2;i<=n;i++){
        int p = pow(-1,i-1);
        a = a + 3;
        b = b + 4;
        m = m + p*(a/b);
    }
    cout<<m;
}