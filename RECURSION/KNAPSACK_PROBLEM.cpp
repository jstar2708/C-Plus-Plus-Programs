#include<iostream>
using namespace std;

int knapsack(int n,int w[],int v[],int W){
    if(n==0){
        return 0;
    }
    if(W<w[n-1]){
        return knapsack(n-1,w,v,W);
    }
    return max(knapsack(n-1,w,v,W-w[n-1]) + v[n-1],knapsack(n-1,w,v,W));
}

int main(){
    int n;
    cin>>n;
    int W;
    cin>>W;
    int w[n],v[n];
    for(int i = 0;i<=n-1;i++){
        cin>>w[i];
    }
    for(int i = 0;i<=n-1;i++){
        cin>>v[i];
    }
    cout<<knapsack(n,w,v,W);
    return 0;
}