#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;
    for(int i = 0;i<d;i++){
        int temp = arr[0];      //storing the 1st element
        for(int j = 1;j<=n-1;j++){
            arr[j-1] = arr[j];          //shifting of elements
        }
        arr[n-1] = temp;            //storing the first element at last
    }
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}