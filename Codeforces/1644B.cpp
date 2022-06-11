#include "bits/stdc++.h"
using namespace std;
void solve(vector<int> &nums, vector<vector<int> > &ans, int idx)
{
    if (idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx + 1);
        swap(nums[i], nums[idx]);
    }
}
vector<vector<int>> permute(vector<int> nums)
{
    vector<vector<int> > ans;
    solve(nums, ans, 0);
    return ans;
}

int main()
{

    vector<vector<int>> res;
    vector<int> a;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            a[i] = i + 1;

        res = permute(a);

        for (auto i : res)
        {
            for (auto ii : i)
            {
                cout << ii << " ";
            }
            cout << endl;
        }
    }

    return 0;
}