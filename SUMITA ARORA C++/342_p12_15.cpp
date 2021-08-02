#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int n = str.size()-1;
    int i = 0,k = 0,j = 0;
    while(i<=n){
        if(str[i]==' ' || i==n){
            for((i==n?k = i:k = i-1);j<k;j++,k--){
                int temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            j = i + 1;
        }
        i++;
    }
    cout<<str<<endl;
    return 0;

}