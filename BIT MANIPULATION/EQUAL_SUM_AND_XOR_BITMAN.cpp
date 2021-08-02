#include<iostream>
using namespace std;

void equalsumxor(int a){
    //a + b = 2*a&b + a^b.So for a+b = a^b ,a&b==0.
    int count = 0;
    while(a>0){
        if((a & 1)==0){
            count++;
        }
        a = a>>1;
    }
    cout<<(1<<count)<<endl;
}

int main(){
    int n;
    cin>>n;
    equalsumxor(n);
    return 0;
}