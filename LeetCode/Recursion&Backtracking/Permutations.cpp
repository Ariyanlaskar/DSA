#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> nums, int idx)
{
    if (idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        permute(nums, idx + 1);
        swap(nums[i], nums[idx]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    permute(nums, 0);
    return ans;
}
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]