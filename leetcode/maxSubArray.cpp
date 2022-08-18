#include <bits/stdc++.h>
using namespace std;
// Kadanne's Algorithm from leetcode solution
int solve(vector<int> &a)
{
    int n = a.size();
    int Max = INT_MIN;
    int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += a[j];
    //         Max = max(Max, sum);
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        sum = max(0, sum);
        sum = max(min(0, a[i]), sum + a[i]);
        Max = max(Max, sum);
    }
    return Max;
}

void printV(vector<int> &a)
{
    for (int &itr : a)
        cout << itr << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = solve(a);
    cout << max << endl;
    // cout << max << endl;
    // printV(a);
    return 0;
}

// int maxSubArray(vector<int> &nums)
// {
//     int a = nums[0];
//     int b = nums[0];

//     for (int i = 1; i < nums.size(); i++)
//     {
//         a = max(nums[i], a + nums[i]);
//         b = max(b, a);
//     }

//     return b;
// }
