#include <bits/stdc++.h>
using namespace std;
int maximumUniqueSubarray(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return nums[0];
    }
    int ans = -1;
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[nums[i]] != 0 && mp[nums[i]] >= j)
        {
            int idx = mp[nums[i]];
            while (j < idx)
            {
                count -= nums[j];
                j++;
            }
        }
        count += nums[i];
        ans = max(ans, count);
        mp[nums[i]] = i + 1;
    }
    return ans;
}
// Input: nums = [4,2,4,5,6]
// Output: 17