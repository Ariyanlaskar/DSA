#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
    int sum = 0, ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[sum]++;
        sum += nums[i];
        if (mp[(sum)-k] != 0)
        {
            ans += mp[sum - k];
        }
    }
    return ans;
}
// Input: nums = [1,1,1], k = 2
// Output: 2