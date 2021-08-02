#include <iostream>
using namespace std;

bool isSafe(int **arr, int n, int x, int y)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int **arr, int n, int x, int y, int **solarr)
{
    if (x == n - 1 && y == n - 1)
    {
        solarr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, n, x, y))
    {
        solarr[x][y] = 1;
        if (ratinmaze(arr, n, x + 1, y, solarr))
        {
            return true;
        }
        if (ratinmaze(arr, n, x, y + 1, solarr))
        {
            return true;
        }
        solarr[x][y] = 0; //backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i <= n - 1; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **solarr = new int *[n];
    for (int i = 0; i <= n - 1; i++)
    {
        solarr[i] = new int[n];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            solarr[i][j] = 0;
        }
    }
    cout << endl;
    cout << endl;

    if (ratinmaze(arr, n, 0, 0, solarr))
    {
        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                cout << solarr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}