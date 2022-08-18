#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a)
{
    int n = a.size();
    int XOR = a[0];

    for (int i = 1; i < n; i++)
        XOR = XOR ^ i ^ a[i];
    XOR = XOR ^ n;

    int set;
    set = XOR & ~(XOR - 1);
    cout << "set: " << set << "\nXOR " << XOR << endl;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & set)
        {
            x = x ^ a[i];
        }
        else
        {
            y = y ^ a[i];
        }

        if ((i + 1) & set)
        {
            x = x ^ (i + 1);
        }
        else
        {
            y = y ^ (i + 1);
        }
    }

    int flag = 0;
    for (auto &it : a)
    {
        if (it == x)
            return { x, y }
    }
    return {x, y};
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
    // int y = 8 & ~7;
    // cout << y << endl;
    vector<int> result;
    result = solve(a);
    printV1(result);
    return 0;
}