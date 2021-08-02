#include<iostream>
using namespace std;

int main(){
    int m,n,i,j,c=0;
    cin>>m>>n;
    int a[m][n],b[m][n];
    for(i = 0;i<=m-1;i++){
        for(j = 0;j<=n-1;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<=m-1;i++){
        for(j = 0;j<=n-1;j++){
            cin>>b[i][j];
            if(b[i][j]!=a[i][j]){
                c++;
            }
        }
    }
    if(c>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}