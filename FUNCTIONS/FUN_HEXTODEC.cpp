#include<bits/stdc++.h>
using namespace std;


int hextodec(string a){
    int l = a.size();
    int h = 1;
    int sum = 0;
    for(int i = l-1;i>=0;i--){
        if(a[i]>='0' && a[i]<='9'){
            sum = sum + (a[i]-'0')*h;
        } else if(a[i]>='A' && a[i]<='F'){
                sum = sum + ((a[i]-'A')+10)*h;
            } h = h*16;
            cout<<sum<<endl;
    } return sum;
}

int main(){
    string n;
    cin>>n;
    cout<<hextodec(n);
    return 0;
}