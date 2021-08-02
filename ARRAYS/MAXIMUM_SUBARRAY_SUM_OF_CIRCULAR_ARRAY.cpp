#include<iostream>
using namespace std;

int kadane(int arr[],int n){
    int mx = arr[0];
    int max_sofar = arr[0];
    for(int i = 1;i<n;i++){
        max_sofar = max(arr[i],arr[i]+ max_sofar);
        if(mx<max_sofar){
            mx = max_sofar;
        }
    }
    return mx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrap_sum = kadane(arr,n);
    int total_sum = 0;
    for(int i = 0;i<n;i++){
        total_sum = total_sum + arr[i];
        arr[i] = -arr[i];
    }
    int non_contri_elements = -kadane(arr,n);
    wrapsum = total_sum - non_contri_elements;
    if(wrapsum==0){
        cout<<nonwrap_sum;
        exit(0);
    }
    int mx = max(wrapsum,nonwrap_sum);
    cout<<mx<<endl;
}