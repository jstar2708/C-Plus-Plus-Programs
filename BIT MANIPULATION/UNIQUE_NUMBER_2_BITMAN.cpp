#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int xorsum = 0;
    for(int i = 0;i<=n-1;i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int pos= 0;
    while((xorsum & 1)==0){
        xorsum  = xorsum>>1;
        pos++;
    }
    int xor2 = 0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i] & (1<<pos)){
             xor2 = xor2 ^ arr[i];
        }
    }
    cout<<xor2<<" "<<(tempxor^xor2)<<endl;
    return 0;
}