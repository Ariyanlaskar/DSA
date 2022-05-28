#include <bits/stdc++.h>
using namespace std;
vector<int> largestDivisibleSubset(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if (n == 0)
    {
        return {};
    }
    vector<int> dp(n + 1, 1);
    int maxlen = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] % nums[j] == 0 && dp[i] < 1 + dp[j])
            {
                dp[i] = 1 + dp[j];
            }
            if (maxlen < dp[i])
            {
                maxlen = dp[i];
            }
        }
    }
    int prev = -1;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (dp[i] == maxlen && (prev % nums[i] == 0 || prev == -1))
        {
            ans.push_back(nums[i]);
            maxlen -= 1;
            prev = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
// Input: nums = [1,2,3]
// Output: [1,2]
// Explanation: [1,3] is also accepted.