#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it;
    for (int i = 0; i <= 2; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto element : v)
    {
        cout << element << " "; //element is not iterator ,it is a value.
    }
    cout << endl;

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    swap(v, v2);
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;
    for (auto element : v)
    { //
        cout << element << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}