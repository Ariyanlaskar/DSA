#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<int> ans;
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    solve(nums, ans, res, 0);
    return res;
}
void solve(vector<int> &nums, vector<int> &ans, vector<vector<int>> &res, int idx)
{
    res.push_back(ans);
    for (int i = idx; i < nums.size(); i++)
    {
        if (i != idx && nums[i] == nums[i - 1])
        {
            continue;
        }
        ans.push_back(nums[i]);
        solve(nums, ans, res, i + 1);
        ans.pop_back();
    }
}
// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]