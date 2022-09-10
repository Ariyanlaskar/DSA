#include <bits/stdc++.h>
using namespace std;
int combinationSum4(vector<int> &nums, int target)
{
    vector<int> dp(target + 1, -1);
    int ans = findComb(nums, target, dp);
    return ans;
}
int findComb(vector<int> &nums, int target, vector<int> &dp)
{
    if (dp[target] != -1)
    {
        return dp[target];
    }
    if (target == 0)
    {
        return 1;
    }
    if (target < 0)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] <= target)
        {
            count += findComb(nums, target - nums[i], dp);
        }
    }
    dp[target] = count;
    return dp[target];
}
// Input: nums = [1,2,3], target = 4
// Output: 7
