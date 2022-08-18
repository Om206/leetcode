#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, vector<int> &b, int n1, int n2)
{
    int n = n1 + n2 - 1;
    int i, j;
    i = n1 - 1;
    j = n2 - 1;

    while (i >= 0 && j >= 0)
    {
        if (a[i] > b[i])
        {
            a[n] = a[i];
            n--;
            i--;
        }
        else
        {
            a[n] = b[j];
            n--;
            j--;
        }
    }
    while (i >= 0)
        a[n--] = a[i--];
    while (j >= 0)
        a[n--] = b[j--];
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
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }
    printV1(a);
    printV1(b);
    solve(a, b, n1, n2);
    printV1(a);
}