#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float x;
    cin>>x;
    float s = 0;
    for(int i = 1;i<=n;i++){
        float fac = 1;
        int j = i;
        while(j>0){
            fac*=j;
            j = j-1;
        }
        s = s + pow(-1,i-1)*pow(x,i)/fac;

    }
    cout<<s<<endl;
    return 0;
}