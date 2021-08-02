#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int N = 100000;
    bool ch[N];
    for(int i = 0;i<=N-1;i++){
        ch[i]=false;
    }
    for(int i = 0;i<=n-1;i++){
        if(arr[i]>=0){
            ch[arr[i]]=true;
        }
    } for(int i = 0;i<=N-1;i++){
        if(ch[i]==false){
            cout<<i;
            break;
        }
    } return 0;

}