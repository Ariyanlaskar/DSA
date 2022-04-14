#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    vector<int> maxdp(n), mindp(n);
    maxdp[0] = nums[0];
    mindp[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        maxdp[i] = max(maxdp[i - 1] * nums[i], max(mindp[i - 1] * nums[i], nums[i]));
        mindp[i] = min(mindp[i - 1] * nums[i], min(maxdp[i - 1] * nums[i], nums[i]));
    }
    int ans = INT_MIN;
    for (auto i : maxdp)
    {
        ans = max(ans, i);
    }
    return ans;
}
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.