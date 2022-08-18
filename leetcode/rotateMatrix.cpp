#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
}

void printV1(vector<int> &a)
{
    for (auto &itr : a)
    {
        cout << itr << " ";
    }
    cout << endl;
}

void printV2(vector<vector<int>> &a)
{
    for (auto itr1 : a)
    {
        for (auto itr2 : itr1)
        {
            cout << itr2 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    // vector<vector<int>> a(n);
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(n);
        for (int j = 0; j < n; j++)
        {
            cin >> temp[j];
        }
        a[i] = temp;
    }
    solve(a);
    printV2(a);
    return 0;
}