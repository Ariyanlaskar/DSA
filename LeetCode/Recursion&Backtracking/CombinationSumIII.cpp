#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> path;
vector<vector<int>> combinationSum3(int k, int n)
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    solve(nums, k, n, 0);
    return ans;
}
void solve(vector<int> &nums, int k, int n, int idx)
{
    int size = path.size();
    if (n < 0 or size > k)
    {
        return;
    }
    if (n == 0 && k == size)
    {
        ans.push_back(path);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        if (nums[i] > n)
        {
            break;
        }
        path.push_back(nums[i]);
        solve(nums, k, n - nums[i], i + 1);
        path.pop_back();
    }
}
// Input: k = 3, n = 7
// Output: [[1,2,4]]