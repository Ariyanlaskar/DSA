#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp1(n), dp2(n);
    if (n == 1)
    {
        return nums[0];
    }
    dp1[0] = nums[0];
    dp1[1] = max(nums[1], dp1[0]);
    if (n == 2)
    {
        return dp1[1];
    }
    for (int i = 2; i < n - 1; i++)
    {
        dp1[i] = max(dp1[i - 1], nums[i] + dp1[i - 2]);
    }
    dp2[1] = nums[1];
    dp2[2] = max(nums[2], dp2[1]);
    for (int i = 3; i < n; i++)
    {
        dp2[i] = max(dp2[i - 1], nums[i] + dp2[i - 2]);
    }
    return max(dp1[n - 2], dp2[n - 1]);
}

// Input: nums = [2,3,2]
// Output: 3
// Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.