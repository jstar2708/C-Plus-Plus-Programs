#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s = sqrt(n);
    cout<<s<<endl;
    int i;
    for(i = 2;i<=(s/2)+1;i++){
        if(s%i==0){
            break;
        }
    }
    if(i==(s/2)+2){
        cout<<"Yes it is prime"<<endl;
    } else{
        cout<<"No"<<endl;
    }
    return 0;
}