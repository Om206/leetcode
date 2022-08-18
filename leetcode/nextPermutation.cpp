#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a)
{
    int n = a.size();                  // 5
    int i = n - 2;                     // 4
    while (a[i] >= a[i + 1] && i >= 0) // 3 4
        i--;
    cout << i << "\n";
    if (i == -1)
    {
        reverse(a.begin(), a.end());
    }
    else
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] > a[i])
            {
                swap(a[j], a[i]);
                break;
            }
        }
        reverse(a.begin() + i + 1, a.end());
    }
}
void solve1(vector<int> &nums)
{
    int n = nums.size(), k, l;
    for (k = n - 2; k >= 0; k--)
    {
        if (nums[k] < nums[k + 1])
        {
            break;
        }
    }
    cout << k << "\n";
    if (k < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (nums[l] > nums[k])
            {
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin() + k + 1, nums.end());
    }
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
    solve(a);
    printV(a);
    return 0;
}

// void nextPermutation(vector<int> &nums)
// {
//     int i, j;
//     for (i = nums.size() - 2; i >= 0; i--)
//     {

//         if (nums[i] < nums[i + 1] && i >= 0)
//         {

//             for (j = nums.size() - 1; j > i; j--)
//             {
//                 if (nums[j] > nums[i])
//                 {
//                     int t = nums[j];
//                     nums[j] = nums[i];
//                     nums[i] = t;
//                     break;
//                 }
//             }
//             break;
//         }
//     }
//     reverse(nums.begin() + i + 1, nums.end());
// }