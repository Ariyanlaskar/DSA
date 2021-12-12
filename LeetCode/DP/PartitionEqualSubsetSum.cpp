#include <bits/stdc++.h>
using namespace std;
bool IsPossible(vector<int> &nums, int n, int sum)
{
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (j == 0)
            {
                dp[i][j] = true;
            }
            else if (i == 0)
            {
                dp[i][j] = false;
            }
            else if (nums[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][sum];
}
bool canPartition(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    for (auto &i : nums)
    {
        sum += i;
    }
    if (sum % 2 != 0)
    {
        return false;
    }
    bool ans = IsPossible(nums, n, sum / 2);
    return ans;
}
int main()
{
    vector<int>nums = {1,5,11,5};
    cout<<canPartition(nums)<<endl;
    return 0;
}
// Input: nums = [1,5,11,5]
// Output: true