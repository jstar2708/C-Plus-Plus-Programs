#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    int cr = 0;int mx = 0;
    int i = 0;
    int st = 0;
    int mxst = 0;
    while(1){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(cr>mx){
                mx = cr;
                mxst = st;
            }
            cr = 0;
            st = i+1;
        } else{
            cr++;
        } 
        if(arr[i]=='\0'){
            break;
        }
        i++;
    } cout<<mx<<endl;
    for(int i = mxst;i<=mxst + mx;i++){
        cout<<arr[i];
    } return 0;
}