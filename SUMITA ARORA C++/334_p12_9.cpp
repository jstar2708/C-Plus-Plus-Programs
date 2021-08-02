#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,rev;
    getline(cin,str);
    int i = 0,k = 0,a = 0;
    for(i = 0;i<=str.size()-1;i++){
        if(str[i]==' ' || i==str.size()-1){
            for(k = (str[i]==' '?i-1:i);a<k;a++,k--){
                int temp = str[a];
                str[a] = str[k];
                str[k] = temp;
            }
            a = i+1;
        }
    }
    cout<<str<<endl;
    return 0;
}