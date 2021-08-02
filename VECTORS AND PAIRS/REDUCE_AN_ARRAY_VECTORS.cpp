#include <bits/stdc++.h>
using namespace std;

bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    vector<pair<int, int>> v1;
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        pair<int, int> p;
        cin >> p.first;
        p.second = i;
        v1.push_back(p);
    }

    sort(v1.begin(), v1.end(), mycompare);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        arr[v1[i].second] = i;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}