#include<iostream>
using namespace std;

void sieveprime(int x){
    int prime[x+1] = {0};         //intializing by 0.
    for(int i = 2;i<=x;i++){
        if(prime[i]==0){        //checking if the number has already been marked or not.if not then we are going to continue
            for(int j = i*i;j<=x;j+=i){
                prime[j] = 1;              //marking the multiples and the factors are not marked because of j = i*i
                                           //as the marking of any factor starts form its square. 
            }
        }
    }
    for(int i = 2;i<=x;i++){
        if(prime[i]==0){            //checking all the unmarked numbers and printing them
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    sieveprime(n);
    return 0;
}