#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    int st = 0;
    int e = 0;
    int sumo = 0;
    while(sumo!=s){
        if(sumo<s){
            sumo = sumo + arr[e];
            e++;
        } else if(sumo>s){
            sumo = sumo - arr[st];
            st++;
        }

    } cout<<st+1<<" "<<e;
    return 0;

}