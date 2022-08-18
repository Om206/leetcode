#include <bits/stdc++.h>
using namespace std;
void printV1(vector<int> &a);
vector<vector<int>> solve(vector<vector<int>> &a)
{
    sort(a.begin(), a.end());
    vector<vector<int>> result;
    int n = a.size();
    vector<int> temp;
    temp = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] <= temp[1])
            temp[1] = max(temp[1], a[i][1]);
        else
        {
            result.push_back(temp);
            temp = a[i];
        }
    }
    result.push_back(temp);

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
    vector<vector<int>> a, result;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(2);
        for (auto &it : temp)
            cin >> it;
        a.push_back(temp);
    }
    result = solve(a);
    cout << result.size() << endl;
    printV2(result);
    cout << "Print\n";
}

// for (int i = 0; i < n; i++)
// {
//     if (a[i][1] > a[i + 1][0])
//     {
//         vector<int> temp(2);
//         temp[0] = a[i][0];
//         temp[1] = a[i + 1][1];
//         result.push_back(temp);
//         a[i][1] = a[i + 1][1];
//         // a[i + 1].clear();
//         i++;
//         if (temp[1] > a[i + 1][0])
//             continue;
//         if (i < n)
//             if (result[result.size() - 1][1] > a[i + 1][0])
//                 result[result.size() - 1].clear();
//     }
// }