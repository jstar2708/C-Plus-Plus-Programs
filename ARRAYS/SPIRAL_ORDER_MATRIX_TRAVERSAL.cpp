#include <bits/stdc++.h>
using namespace std;

void spiralorder(int **arr, int m, int n)
{
    int row_start = 0, col_start = 0, row_end = m - 1, col_end = n - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        for (int i = row_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }
        row_start++;
        if (row_start > row_end)
        {
            break;
        }
        for (int i = row_start; i <= row_end; i++)
        {
            cout << arr[i][col_end] << " ";
        }
        col_end--;
        if (col_start > col_end)
        {
            break;
        }
        for (int i = col_end; i >= col_start; i--)
        {
            cout << arr[row_end][i] << " ";
        }
        row_end--;
        for (int i = row_end; i >= row_start; i--)
        {
            cout << arr[i][col_start] << " ";
        }
        col_start++;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    spiralorder(arr, m, n);
    return 0;
}