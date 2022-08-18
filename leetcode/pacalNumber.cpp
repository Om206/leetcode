#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(int n)
{
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i].resize(i + 1);
        a[i][i] = a[i][0] = 1;
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    return a;
}

void printv(vector<vector<int>> &a)
{
    for (auto &itr1 : a)
    {
        for (auto &itr2 : itr1)
            cout << itr2 << " ";
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    vector<vector<int>> a;
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     vector<int> temp;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     a.push_back(temp);
    // }
    a = solve(n);
    printv(a);
    cout << "Done\n";
    return 0;
}