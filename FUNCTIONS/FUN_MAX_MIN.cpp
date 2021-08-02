#include<iostream>
using namespace std;


int max(int x,int y,int z){
    if(x>y){
        if(x>z){
            return x;
        } else{
            return z;
        }
    } else{
        if(y>z){
            return y;
        } else{
            return z;
        }
    }
}

int min(int x,int y,int z){
    if(x>y){
        if(y>z){
            return z;
        } else{
            return y;
        }
    } else{
        if(x>z){
            return z;
        } else{
            return x;
        }
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,b,c)<<endl;
    cout<<min(a,b,c)<<endl;
    return 0;

}