#include <bits/stdc++.h>
using namespace std;
int deleteAndEarn(vector<int> &nums)
{
    int s = INT_MIN;
    for (auto i : nums)
    {
        s = max(i, s);
    }
    vector<int> freq(s + 1, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]] += nums[i];
    }
    vector<int> dp(s + 1);
    dp[0] = 0;
    dp[1] = max(freq[1], dp[0]);
    for (int i = 2; i <= s; i++)
    {
        dp[i] = max(dp[i - 2] + freq[i], dp[i - 1]);
    }
    return dp[s];
}
// Input: nums = [3,4,2]
// Output: 6