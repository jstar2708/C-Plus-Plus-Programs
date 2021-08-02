#include<iostream>
using namespace std;

int partition(int arr[],int l,int h){     //function which will place pivot element in its right place and return its index
    int pivot = arr[h];        //selection pvot element (as per my choice).
    int i = l-1;                // i will denote the last element before pivot(when this function ends)
    for(int j = l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);      //swaping the pivot element to its ideal position
    return i + 1;       //returning pivot index
}

void quicksort(int arr[],int l,int h){          //quicksort function
    if(l<h){                  //checking if remaining elements in array is not equal to 1.
        int pi = partition(arr,l,h);            //calling for partition function
        quicksort(arr,l,pi-1);              //passing array before pivot in quicksort(),pivot element is excluded
        quicksort(arr,pi+1,h);              //passing array after pivot in quicksort(),pivot element is excluded
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);       //calling quicksort()
    for(int i = 0;i<=n-1;i++){          //printing the final array
        cout<<arr[i]<<" ";  
    }
    return 0;
}