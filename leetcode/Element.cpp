#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a)
{
    int n = a.size();
    unordered_map<int, int> m;
    int temp;
    for (auto &it : a)
    {
        m[it]++;
        if (m[it] > 1)
        {
            temp = it;
            return temp;
        }
    }
    return temp;
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

    vector<int> a(n + 1);
    for (auto &it : a)
    {
        cin >> it;
    }

    int r = solve(a);
    cout << r << endl;
}

// another method
// while (nums[0] != nums[nums[0]])
//     swap(nums[0], nums[nums[0]]);
// return nums[0];

// torties method or slow fast pointer;
// void solve(vector<int> &a)
// {

//     int s = a[0];
//     int f = a[0];

//     // while(\\)
//     do
//     {
//         s = a[s];
//         f = a[a[f]];
//     } while (s != f)
//         f = a[0];

//     while (s != f)
//     {
//         s = a[s];
//         f = a[f];
//     }

//     return s;
// }