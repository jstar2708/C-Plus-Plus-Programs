#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //kadane's algorithm
    /* So we are going to find the max sum till ith element and check if adding ith element
    to max_sofar makes it greater or lesser than ith element.if greater then update max_sofar 
    to max_sofar + arr[i];
    else if max_sofar becomes less than arr[i] then just update max_sofar to arr[i].
    after this check if max_sofar is greater than our max ,if yes then update our max to
    max_sofar.
    else leave it as it is. */
    int mx = arr[0];
    int max_sofar = arr[0];
    for(int i = 1;i<n;i++){
        max_sofar = max(arr[i],arr[i]+ max_sofar);
        if(mx<max_sofar){
            mx = max_sofar;
        }
    }
    cout<<mx<<endl;
    return 0;
}

