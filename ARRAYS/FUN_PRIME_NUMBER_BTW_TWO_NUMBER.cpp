#include<iostream>
using namespace std;

void prime(int x,int y){
    for(int i = x;i<=y;i++){
        int k = 2;
        for(int j = 2;j<=i;j++){
            k++;
            if(i%j==0){
                break;
            } 
        } if(k==i+1){
            cout<<i<<endl;
        }

    }
}



int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}