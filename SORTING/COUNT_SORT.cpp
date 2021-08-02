#include <bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        mx = max(mx, arr[i]); //finding max element in the array
    }
    int count[100] = {0};
    for (int i = 0; i <= n - 1; i++)
    { //counting the occurence of every element
        count[arr[i]]++;
    }
    for (int i = 1; i <= mx; i++)
    {
        count[i] = count[i] + count[i - 1]; //adding the count of i-1th element to count[i]
    }
    int res[n] = {0}; //resultant array
    for (int i = n - 1; i >= 0; i--)
    {
        res[--count[arr[i]]] = arr[i]; //placing the element in its right position
    }
    for (int i = 0; i <= n - 1; i++)
    { //copying resultant array to orignal array
        arr[i] = res[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    countsort(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}