#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a)
{
    int sum = 0, f, s;
    int n = a.size();
    s = f = a[0];
    for (auto &it : a)
        sum += it;
    do
    {
        s = a[s];
        f = a[a[f]];
    } while (s != f);

    f = a[0];
    while (s != f)
    {
        s = a[s];
        f = a[f];
    }
    int sn;
    sn = n * (n + 1) / 2;
    sum = sum - s;
    sum = sn - sum;
    vector<int> result = {s, sum};
    // result.push_back({s, sum});
    return result;
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
    vector<int> r;
    r = solve(a);
    printV1(r);
    return 0;
}
