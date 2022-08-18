#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &a)
{
    int r = a.size(), c = a[0].size();
    vector<int> row(r, -1), col(c, -1);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                col[j] = 0;
                row[i] = 0;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (col[j] == 0 || row[i] == 0)
            {
                a[i][j] = 0;
            }
        }
    }
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

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }

    solve(a);
    printv(a);
    cout << "Done\n";
    return 0;
}