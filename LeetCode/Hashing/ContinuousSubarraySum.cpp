#include <bits/stdc++.h>
using namespace std;
bool checkSubarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n < 2)
    {
        return false;
    }
    unordered_map<int, int> mp;
    mp[0] = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (mp.find(sum % k) != mp.end())
        {
            if (i - mp[sum % k] >= 2)
            {
                return true;
            }
        }
        else
        {
            mp[sum % k] = i;
        }
    }
    return false;
}
// Input: nums = [23,2,4,6,7], k = 6
// Output: true