#include<bits/stdc++.h>
using namespace std;

void flipbits(int a){
    int b = a;
    for(int i = 0;i<(int)(log2(a)+1);i++){
        b = (b | (1<<i));
    }
    cout<<(b-a)<<endl;
}
int main(){
    int n;
    cin>>n;
    flipbits(n);
    return 0;
}