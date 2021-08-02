#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    int s = 1;
    for(int i = 1;i<=n;i++){
        s = s + pow(x,i);
    }
    cout<<s;
    return 0;
}