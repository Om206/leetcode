#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a)
{
    int n = a.size();
    int result = m
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

    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    int result;
    result = solve(a);

    cout << result;
}