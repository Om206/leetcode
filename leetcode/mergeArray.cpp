#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, vector<int> &b)
{
    int n1 = a.size(), n2 = b.size();
    int n = n1 + n2;
    int i, j, k;
    n = ceil((float)n / 2);
    while (n)
    {
        i = 0;
        j = n;
        while (j < (n1 + n2))
        {
            if (j < n1 && a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
            else if (j >= n1 && i < n1 && a[i] > b[j - n1])
            {
                swap(a[i], b[j - n1]);
            }
            else if (j >= n1 && i >= n1 && b[i - n1] > b[j - n1])
            {
                swap(b[i - n1], b[j - n1]);
            }
            i++;
            j++;
        }
        if (n == 1)
        {
            n = 0;
        }
        else
        {
            n = ceil((float)n / 2);
        }
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
    solve(a, b);
    printV1(a);
    printV1(b);
}