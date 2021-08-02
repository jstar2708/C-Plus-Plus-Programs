#include<iostream>
using namespace std;

string pt(int i,int j,int k){
    if(i*i==j*j+k*k){
        return "Yes";
    } else{
        return "No";
    }
}

string max(int x,int y,int z){
    if(x<y){
        if(y<z){
            return pt(z,y,x);
        } else{
            return pt(y,x,z);
        }
    } else{
        if(x<z){
            return pt(z,y,x);
        } else{
            return pt(x,y,z);
        }
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,b,c);
    return 0;
}