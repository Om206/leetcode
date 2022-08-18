#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a)
{
    int n = a.size();
    int i = 0, j = 0, k = n - 1;

    while (j <= k)
    {
        if (a[j] == 0)
        {
            swap(a[j], a[i]);
            i++;
            j++;
        }
        else if (a[j] == 1)
        {
            j++;
        }
        else
        {
            swap(a[k], a[j]);
            k--;
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
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    solve(a);
    printV1(a);
    return 0;
}

// my first solution

// int c1, c2, c0;
// c1 = c2 = c0 = 0;
// for (int i = 0; i < n; i++)
// {
//     switch (a[i])
//     {
//     case 0:
//         c0++;
//         break;
//     case 1:
//         c1++;
//         break;
//     case 2:
//         c2++;
//         break;
//     }
// }
// // 2 1 0
// int i = 0;
// for (i = 0; i < c0; i++)
// {
//     a[i] = 0;
// }
// for (; i < c1; i++)
//     a[i] = 1;
// for (; i < c2; i++)
//     a[i] = 2;