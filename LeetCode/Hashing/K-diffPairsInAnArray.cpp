#include <bits/stdc++.h>
using namespace std;
int findPairs(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (auto i : nums)
    {
        mp[i]++;
    }
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp[nums[i]] == 0)
        {
            continue;
        }
        if (k == 0)
        {
            if (mp[nums[i]] > 1)
            {
                count++;
            }
        }
        if (k != 0 && mp[nums[i] - k])
        {
            count++;
        }
        if (k != 0 && mp[nums[i] + k])
        {
            count++;
        }
        mp[nums[i]] = 0;
    }
    return count;
}
// Input: nums = [3,1,4,1,5], k = 2
// Output: 2