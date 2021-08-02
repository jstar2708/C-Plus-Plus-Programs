#include <iostream>
using namespace std;
//merge function which merges the array.
void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;      //size of 1st array (from index low to mid).
    int n2 = h - mid;           //size of second array (form mid + 1 to high).
    int A[n1];                  //temp array 1.
    int B[n2];                  //temp array 2.
    for (int i = 0; i < n1; i++)
    {
        A[i] = arr[l + i];          //copying first part of array in temp array1.
    }
    for (int i = 0; i < n2; i++)
    {
        B[i] = arr[mid + 1 + i];        //copying second part of array in temp array2.
    }
    int i = 0, j = 0, k = l;        //k is equal to l because the array passed in merge sort array may be a subpart of main array so start of array could be greater than 0;
    while (i < n1 && j < n2)
    {
        if (A[i] > B[j])            //comparing both the temp arrays and passing the shorter value in array.
        {               
            arr[k] = B[j];
            k++;
            j++;
        }
        else
        {
            arr[k] = A[i];
            k++;
            i++;
        }
    }
    while (i < n1)          //adding remaining elements of temp array 1 if any left.
    {
        arr[k] = A[i];
        i++;
        k++;
    }
    while (j < n2)          //adding remaining elements of temp array 2 if any left.
    {
        arr[k] = B[j];
        j++;
        k++;
    }
}
//mergesort function which repeatedly divides the array.
void mergesort(int arr[], int l, int h)
{
    if (l < h)          //if l==h the only 1 element is left,then no further division can take place.If i<h is true,means that ther are more than 1 element left. 
    {
        int mid = (l + h) / 2;      //finding the mid of array.
        mergesort(arr, l, mid);     //passing the 1st part of array for dividing it again till 1 element is left.
        mergesort(arr, mid + 1, h);     //passing the second part of array for dividing it again.
        merge(arr, l, mid, h);          //passing the two arrays for merging.
    }
}

int main()
{
    int n;
    cin >> n;           //size of array.
    int arr[n];     
    for (int i = 0; i <= n - 1; i++)        
    {
        cin >> arr[i];          //taking input
    }
    mergesort(arr, 0, n - 1);           //calling merge() function
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";              //printing the resultant array.
    }

    return 0;
}