#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mn,mx,md;
    if(a>b && b>c){
        md = b;
        mn = c;
        mx = a;
    } else if(a>c && c>b){
        md = c;
        mn = b;
        mx = a;
    } else if(b>a && a>c){
        md = a;
        mn = c;
        mx = b;
    } else if(b>c && c>a ){
        md = c;
        mn = a;
        mx = b;
    } else if(c>a && a>b){
        md = a;
        mn = b;
        mx = c;
    } else if(c>b && b>a){
        md = b;
        mn = a;
        mx = c;
    }
    cout<<mx<<" "<<md<<" "<<mn<<endl;
    return 0;

}